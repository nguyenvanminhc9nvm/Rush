#pragma once

#include "CoreMinimal.h"
#include "Rush/Ability/RushGameplayAbility.h"
#include "RushChangePOVAbility.generated.h"

UCLASS(BlueprintType)
class RUSH_API URushChangePOVAbility : public URushGameplayAbility
{
	GENERATED_BODY()

public:
	URushChangePOVAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UPROPERTY()
	bool bIsFirstPerson = true;
};