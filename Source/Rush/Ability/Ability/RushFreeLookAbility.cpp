#include "RushFreeLookAbility.h"

#include "Rush/Character/RushCharacter.h"
#include "Rush/Tags/RushGameplayTag.h"

URushFreeLookAbility::URushFreeLookAbility()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	// Set the ability tags
	FGameplayTagContainer TagAccepts;
	TagAccepts.AddTag(RushGameplayTag::Ability_FreeLook);
	SetAssetTags(TagAccepts);

	bRetriggerInstancedAbility = true;
}

void URushFreeLookAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	if (ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo()))
	{
		RushCharacter->ToggleFreeLook();
	}
}
