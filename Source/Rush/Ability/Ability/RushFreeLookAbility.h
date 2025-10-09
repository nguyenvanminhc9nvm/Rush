#pragma once

#include "CoreMinimal.h"
#include "Rush/Ability/RushGameplayAbility.h"
#include "RushFreeLookAbility.generated.h"

UCLASS()
class RUSH_API URushFreeLookAbility : public URushGameplayAbility
{
	GENERATED_BODY()

public:
	URushFreeLookAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
};