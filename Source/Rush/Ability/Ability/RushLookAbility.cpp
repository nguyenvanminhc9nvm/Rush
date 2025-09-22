#include "RushLookAbility.h"

#include "Rush/Character/RushCharacter.h"
#include "Rush/GameMode/RushGameMode.h"
#include "Rush/Input/RushInputComponent.h"
#include "Rush/Tags/RushGameplayTag.h"

URushLookAbility::URushLookAbility()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	// Set the ability tags
	FGameplayTagContainer TagAccepts;
	TagAccepts.AddTag(RushGameplayTag::Ability_Look);
	SetAssetTags(TagAccepts);
}

void URushLookAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
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
			&URushLookAbility::Input_Look);
	}
}

void URushLookAbility::Input_Look(const FInputActionValue& Value)
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}

	const FVector2D LookInput = Value.Get<FVector2D>();
	if (LookInput.IsNearlyZero())
	{
		return;
	}
	

	// Calculate the new rotation based on the input
	const float YawDelta = LookInput.X;
	const float PitchDelta = LookInput.Y;

	// Apply the rotation
	RushCharacter->AddControllerYawInput(YawDelta);
	RushCharacter->AddControllerPitchInput(PitchDelta);
}
