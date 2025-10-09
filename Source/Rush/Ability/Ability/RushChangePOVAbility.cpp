#include "RushChangePOVAbility.h"

#include "Rush/Character/RushCharacter.h"
#include "Rush/Tags/RushGameplayTag.h"

URushChangePOVAbility::URushChangePOVAbility()
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	// Set the ability tags
	FGameplayTagContainer TagAccepts;
	TagAccepts.AddTag(RushGameplayTag::Ability_ChangeCamera);
	SetAssetTags(TagAccepts);
	bRetriggerInstancedAbility = true;

	bRetriggerInstancedAbility = true;
}

void URushChangePOVAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	ARushCharacter* RushCharacter = Cast<ARushCharacter>(GetAvatarActorFromActorInfo());
	if (!RushCharacter)
	{
		return;
	}

	bIsFirstPerson = !bIsFirstPerson;

	RushCharacter->TogglePerspectiveChange(!bIsFirstPerson);
}
