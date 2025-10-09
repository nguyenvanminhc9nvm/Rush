#pragma once

#include "CoreMinimal.h"
#include "Rush/Ability/RushGameplayAbility.h"
#include "RushJumpAbility.generated.h"

UCLASS()
class RUSH_API URushJumpAbility : public URushGameplayAbility
{
	GENERATED_BODY()

public:
	URushJumpAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
};