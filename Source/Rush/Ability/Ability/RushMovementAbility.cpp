#include "RushMovementAbility.h"

#include "EnhancedInputComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Rush/Character/RushCharacter.h"
#include "Rush/Core/GameMode/RushGameMode.h"
#include "Rush/Input/RushInputComponent.h"
#include "Rush/Tags/RushGameplayTag.h"

URushMovementAbility::URushMovementAbility()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	// Set the ability tags
	FGameplayTagContainer TagAccepts;
	TagAccepts.AddTag(RushGameplayTag::Ability_Movement);
	SetAssetTags(TagAccepts);
}

void URushMovementAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}

	ARushGameMode* GameMode = Cast<ARushGameMode>(GetWorld()->GetAuthGameMode());
	if (!GameMode)
	{
		return;
	}
	if (RushCharacter->RushInputComponent)
	{
		RushCharacter->RushInputComponent->BindNativeActions(
			GameMode->UIConfig,
			RushGameplayTag::InputTag_Move,
			ETriggerEvent::Triggered,
			this,
			&URushMovementAbility::Input_Move);
	}
}

void URushMovementAbility::Input_Move(const FInputActionValue& Value)
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}
	// log EchoCharacter
	const FVector2D MovementInput = Value.Get<FVector2D>();

	const FRotator ControlRotation = RushCharacter->GetControlRotation();

	const FVector RightVector = UKismetMathLibrary::GetRightVector(ControlRotation);
	const FVector ForwardVector = UKismetMathLibrary::GetForwardVector(ControlRotation);

	RushCharacter->AddMovementInput(ForwardVector, MovementInput.Y);
	RushCharacter->AddMovementInput(RightVector, MovementInput.X);
}
