#pragma once

#include "CoreMinimal.h"
#include "Rush/Ability/RushGameplayAbility.h"
#include "RushSprintAbility.generated.h"

UCLASS(BlueprintType)
class RUSH_API URushSprintAbility : public URushGameplayAbility
{
	GENERATED_BODY()

public:
	URushSprintAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	void Input_Sprint(const bool Value);
};