#pragma once

#include "CoreMinimal.h"
#include "Rush/Ability/RushGameplayAbility.h"
#include "RushLeanAbility.generated.h"

UCLASS()
class RUSH_API URushLeanAbility : public URushGameplayAbility
{
	GENERATED_BODY()

public:
	URushLeanAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	
	UPROPERTY()
	float LeaningTargetPressed = 0.0f;

	UPROPERTY()
	float LeaningPrevious = 0.0f;
	
	UPROPERTY()
	bool bAutomaticallyLeaning = false;

	UPROPERTY()
	bool bCanLean;

	UFUNCTION()
	void Input_Lean(const struct FInputActionValue& Value);

	
	

};