#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Rush/Ability/RushGameplayAbility.h"
#include "RushMovementAbility.generated.h"

UCLASS(BlueprintType)
class RUSH_API URushMovementAbility : public URushGameplayAbility
{
	GENERATED_BODY()

public:
	URushMovementAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
	void Input_Move(const FInputActionValue& Value);

	UFUNCTION()
	void OnInputReady();
};