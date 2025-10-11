#include "RushLeanAbility.h"

#include "Rush/Ability/Tasks/RushAbilityTask_Tick.h"
#include "Rush/Character/RushCharacter.h"
#include "Rush/Input/RushInputComponent.h"
#include "Rush/Tags/RushGameplayTag.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Rush/Tags/LogUtils.h"

URushLeanAbility::URushLeanAbility()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	// Set the ability tags
	FGameplayTagContainer TagAccepts;
	TagAccepts.AddTag(RushGameplayTag::Ability_Lean);
	SetAssetTags(TagAccepts);

	bRetriggerInstancedAbility = true;
}

void URushLeanAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                       const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                       const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}
	// Create and activate tick task
	TickTask = URushAbilityTask_Tick::CreateTickTask(this);
	if (TickTask)
	{
		TickTask->OnTick.AddDynamic(this, &URushLeanAbility::OnAbilityTick);
		TickTask->ReadyForActivation();
	}
	RushCharacter->OnRushInputReady.AddDynamic(this, &URushLeanAbility::OnInputReady);
}

void URushLeanAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                  const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	// Clean up tick task
	if (TickTask)
	{
		TickTask->EndTask();
		TickTask = nullptr;
	}

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}
	
	// Reset all lean state
	LeaningTargetPressed = 0.f;
	LeaningTarget = 0.f;
	LeaningAlpha = 0.f;
	bLeaningPressed = false;
	bLeaning = false;
	bAutomaticallyLeaning = false;
	
	RushCharacter->LeaningLocation = FVector::ZeroVector;
	RushCharacter->LeaningRotation = FVector::ZeroVector;
}

void URushLeanAbility::OnInputReady()
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}
	
	// Bind to Triggered (when holding)
	RushCharacter->RushInputComponent->BindNativeActions(
			RushCharacter->UIConfig,
			RushGameplayTag::InputTag_Lean,
			ETriggerEvent::Triggered,
			this,
			&URushLeanAbility::Input_Lean);
	
	// Bind to Completed (when released) but DON'T end ability
	RushCharacter->RushInputComponent->BindNativeActions(
			RushCharacter->UIConfig,
			RushGameplayTag::InputTag_Lean,
			ETriggerEvent::Completed,
			this,
			&URushLeanAbility::Input_LeanReleased);
	
}

void URushLeanAbility::CheckAutomaticLeaning()
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}
	
	
	float MinimumDistance = 9999.0f;
	int32 MinimumIndex = -1;
	float Sign = 1.0f;
	int32 CurrentIndex = 0;

	bool bIsFirstPerson = RushCharacter->IsFirstPersonView();
	bool bIsForwardBlocked = RushCharacter->bForwardBlocked;
	bool bAiming = RushCharacter->bAiming;

	if (!bIsFirstPerson)
	{
		LeaningTarget = LeaningTargetPressed;
		bLeaning = bLeaningPressed;
		bAutomaticallyLeaning = false;
		return;
	}

	if (bIsFirstPerson && bIsForwardBlocked && bAiming && bLeaningPressed)
	{
		LeaningTarget = LeaningTargetPressed;
		bLeaning = bLeaningPressed;
		bAutomaticallyLeaning = false;
		return;
	}

	if (!bIsFirstPerson || !bIsForwardBlocked)
	{
		LeaningTarget = LeaningTargetPressed;
		bLeaning = bLeaningPressed;
		bAutomaticallyLeaning = false;
		return;
	}

	if (!bLeaningPressed)
	{
		TraceForLeaningSide(1.0f, Sign, MinimumDistance, MinimumIndex);
					
		TraceForLeaningSide(-1.0f, Sign, MinimumDistance, MinimumIndex);
					
		if (MinimumIndex > -1)
		{
			const float AbsY = UKismetMathLibrary::Abs(LeaningCameraOffsetLocation.Y);
			const float DivisionResult = (AbsY / CornerPeekDivision) - 1.0f;
			const float Min = MinimumIndex / DivisionResult;
			const float NewSign = Min * Sign;
			LeaningTarget = NewSign;
			bLeaning = true;
			bAutomaticallyLeaning = true;
		}
	}
}

void URushLeanAbility::Input_Lean(const struct FInputActionValue& Value)
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}
	
	const float LeanValue = Value.Get<float>();
	LeaningTargetPressed = LeanValue;

	bLeaningSwitched = LeaningTargetPressed != LeaningPrevious && !bAutomaticallyLeaning;

	LeaningPrevious = LeaningTargetPressed;

	bLeaningPressed = true;

	RushCharacter->bIsLeaningSetter = bLeaning;
	RushCharacter->bLeaningSwitchedSetter = bLeaningSwitched;
	RushCharacter->LeaningAlphaSetter = LeaningAlpha;
}

void URushLeanAbility::Input_LeanReleased(const struct FInputActionValue& Value)
{
	// Reset lean state when released
	LeaningTargetPressed = 0.f;
	LeaningTarget = 0.f;
	bLeaningPressed = false; // IMPORTANT! Tell CheckAutomaticLeaning() we released the key
	bLeaning = false;
	bAutomaticallyLeaning = false;

	if (ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo()))
	{
		RushCharacter->bIsLeaningSetter = false;
		RushCharacter->bLeaningSwitchedSetter = false;
	}
}

void URushLeanAbility::OnAbilityTick(float DeltaTime)
{
	CheckAutomaticLeaning();
	UpdateLeaningValues();
	
	// Always update character's lean state every tick
	if (ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo()))
	{
		RushCharacter->bIsLeaningSetter = bLeaning;
		RushCharacter->bLeaningSwitchedSetter = bLeaningSwitched;
		RushCharacter->LeaningAlphaSetter = LeaningAlpha;
	}
}

void URushLeanAbility::TraceForLeaningSide(float Multiplier, float& Sign, float& MinimumDistance, int32& MinimumIndex)
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}

	SpringArm = RushCharacter->FindComponentByClass<USpringArmComponent>();
	if (!SpringArm)
	{
		return;
	}

	MinimumDistance = 9999.0f;
	MinimumIndex = -1;
	Sign = 1.0f;

	const float AbsY = UKismetMathLibrary::Abs(LeaningCameraOffsetLocation.Y);
	const float DivisionResult = AbsY / CornerPeekDivision;
	const int32 NumTraces = FMath::CeilToInt(DivisionResult - 1.0f);

	const FTransform CharacterTransform = RushCharacter->GetActorTransform();

	for (int32 CurrentIndex = 0; CurrentIndex < NumTraces; ++CurrentIndex)
	{
		const float IndexMultiplier = CurrentIndex * CornerPeekDivision;
		const float FinalMultiplier = IndexMultiplier * Multiplier;

		const FVector Direction = FVector(0.0f, FinalMultiplier, 0.0f);
		const FVector TransformedDirection = UKismetMathLibrary::TransformDirection(CharacterTransform, Direction);

		// Get trace start and end points using the avoidance trace inputs
		FVector TraceStart, TraceEnd;
		GetAvoidanceTraceInputs(TransformedDirection, TraceStart, TraceEnd);

		FHitResult HitResult;
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(RushCharacter);

		const bool bHit = UKismetSystemLibrary::LineTraceSingle(
			RushCharacter->GetWorld(),
			TraceStart,
			TraceEnd,
			ETraceTypeQuery::TraceTypeQuery1,
			false, // bTraceComplex
			ActorsToIgnore,
			EDrawDebugTrace::None,
			HitResult,
			true // bIgnoreSelf
		);

		if (!bHit)
		{
			FVector SpringArmLocation;
			if (SpringArm)
			{
				SpringArmLocation = SpringArm->GetComponentLocation();
			}
			else
			{
				SpringArmLocation = RushCharacter->GetActorLocation();
			}

			const float Distance = UKismetMathLibrary::Vector_Distance(SpringArmLocation, HitResult.TraceEnd);

			if (Distance < MinimumDistance)
			{
				MinimumDistance = Distance;
				MinimumIndex = CurrentIndex;
			}
		}

		Sign = Multiplier;
	}
}

void URushLeanAbility::GetAvoidanceTraceInputs(const FVector& Offset, FVector& Start, FVector& End)
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		Start = FVector::ZeroVector;
		End = FVector::ZeroVector;
		return;
	}

	FVector CameraLocation;
	if (GameViewCamera)
	{
		CameraLocation = GameViewCamera->GetComponentLocation();
	}
	else
	{
		CameraLocation = RushCharacter->GetActorLocation();
	}

	FVector ActorLocation = RushCharacter->GetActorLocation();
	
	double CameraX, CameraY, CameraZ;
	UKismetMathLibrary::BreakVector(CameraLocation, CameraX, CameraY, CameraZ);

	double ActorX, ActorY, ActorZ;
	UKismetMathLibrary::BreakVector(ActorLocation, ActorX, ActorY, ActorZ);

	FVector ModifiedVector = UKismetMathLibrary::MakeVector(ActorX, ActorY, CameraZ);

	FVector ScaledForward = UKismetMathLibrary::Multiply_VectorFloat(RushCharacter->GetForwardRotation(), AvoidanceDistance);

	Start = UKismetMathLibrary::Add_VectorVector(ModifiedVector, Offset);

	End = UKismetMathLibrary::Add_VectorVector(ModifiedVector, ScaledForward) + Offset;
}

void URushLeanAbility::UpdateLeaningValues()
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}

	SpringArm = RushCharacter->FindComponentByClass<USpringArmComponent>();
	if (!SpringArm)
	{
		return;
	}

	const float DeltaTime = UGameplayStatics::GetWorldDeltaSeconds(RushCharacter->GetWorld());

	const float NewLeaningAlpha = UKismetMathLibrary::FInterpTo(
		LeaningAlpha,
		LeaningTarget,
		DeltaTime,
		12.0f
	);

	LeaningAlpha = NewLeaningAlpha;
	
	
	if (SpringArm)
	{
		const FVector Start = SpringArm->GetComponentLocation();

		const float LeaningAlphaSign = UKismetMathLibrary::SignOfFloat(LeaningAlpha) * 2.0f;

		const FVector OffsetVector = UKismetMathLibrary::Multiply_VectorFloat(LeaningCameraOffsetLocation, LeaningAlphaSign);

		const FVector End = UKismetMathLibrary::TransformLocation(
			SpringArm->GetComponentTransform(),
			OffsetVector
		);
		
		FHitResult HitResult;
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(RushCharacter);
		
		const bool bHit = UKismetSystemLibrary::LineTraceSingle(
			RushCharacter->GetWorld(),
			Start,
			End,
			ETraceTypeQuery::TraceTypeQuery1,
			false, // bTraceComplex
			ActorsToIgnore,
			EDrawDebugTrace::None,
			HitResult,
			true // bIgnoreSelf
		);
		
		if (bHit)
		{
			const float Distance = HitResult.Distance * .9f;

			const float DistanceClamp = UKismetMathLibrary::Clamp(Distance, .0f, LeaningCameraOffsetLocation.Y);
			FVector LocationLean = UKismetMathLibrary::Multiply_VectorFloat(FVector(0.0f, DistanceClamp, 0.0f), LeaningAlpha);
			RushCharacter->LeaningLocation = UKismetMathLibrary::VInterpTo(RushCharacter->LeaningLocation, LocationLean, UGameplayStatics::GetWorldDeltaSeconds(this), .0f);
		} else
		{
			FVector LocationLean = UKismetMathLibrary::Multiply_VectorFloat(LeaningCameraOffsetLocation, LeaningAlpha);
			RushCharacter->LeaningLocation = UKismetMathLibrary::VInterpTo(RushCharacter->LeaningLocation, LocationLean, UGameplayStatics::GetWorldDeltaSeconds(this), .0f);
		}

		RushCharacter->LeaningRotation = UKismetMathLibrary::Multiply_VectorFloat(LeaningCameraOffsetRotation, LeaningAlpha);
	}
	
}
