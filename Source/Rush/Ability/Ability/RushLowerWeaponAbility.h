#pragma once

#include "CoreMinimal.h"
#include "Rush/Ability/RushGameplayAbility.h"
#include "RushLowerWeaponAbility.generated.h"

UCLASS()
class RUSH_API URushLowerWeaponAbility : public URushGameplayAbility
{
	GENERATED_BODY()
public:
	URushLowerWeaponAbility(const FObjectInitializer& ObjectInitializer);

	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

};