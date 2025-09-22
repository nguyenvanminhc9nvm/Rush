#pragma once

#include "CoreMinimal.h"
#include "Rush/Ability/RushGameplayAbility.h"
#include "RushLookAbility.generated.h"

struct FInputActionValue;

UCLASS(BlueprintType)
class RUSH_API URushLookAbility : public URushGameplayAbility
{
	GENERATED_BODY()

public:
	URushLookAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	void Input_Look(const FInputActionValue& Value);
	
};