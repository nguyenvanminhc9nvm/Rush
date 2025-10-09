#include "RushLeanAbility.h"

#include "Rush/Character/RushCharacter.h"
#include "Rush/Input/RushInputComponent.h"
#include "Rush/Tags/RushGameplayTag.h"

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
	if (RushCharacter->RushInputComponent)
	{
		RushCharacter->RushInputComponent->BindNativeActions(
			RushCharacter->UIConfig,
			RushGameplayTag::InputTag_Lean,
			ETriggerEvent::Started,
			this,
			&URushLeanAbility::Input_Lean);

		RushCharacter->RushInputComponent->BindNativeActions(
			RushCharacter->UIConfig,
			RushGameplayTag::InputTag_Lean,
			ETriggerEvent::Completed,
			this,
			&URushLeanAbility::K2_EndAbility);
	}
}

void URushLeanAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}
	
	LeaningTargetPressed = 0.f;
	
}

void URushLeanAbility::Input_Lean(const struct FInputActionValue& Value)
{
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}
	if (bCanLean)
	{
		// get action value float
		const float LeanValue = Value.Get<float>();
		LeaningTargetPressed = LeanValue;

		RushCharacter->bIsLearning = LeaningTargetPressed != LeaningPrevious && !bAutomaticallyLeaning;

		LeaningPrevious = LeaningTargetPressed;
	}
}
