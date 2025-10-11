#pragma once

#include "CoreMinimal.h"
#include "Rush/Ability/RushGameplayAbility.h"
#include "RushLeanAbility.generated.h"

class URushAbilityTask_Tick;

UCLASS()
class RUSH_API URushLeanAbility : public URushGameplayAbility
{
	GENERATED_BODY()

public:
	URushLeanAbility();
	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION()
	void OnInputReady();
	
	UPROPERTY()
	float LeaningTargetPressed = 0.0f;

	UPROPERTY()
	float LeaningPrevious = 0.0f;
	
	UPROPERTY()
	bool bAutomaticallyLeaning = false;

	UPROPERTY()
	bool bLeaningSwitched = false;

	UPROPERTY()
	bool bLeaningPressed = false;

	UPROPERTY()
	float LeaningTarget = 0.0f;

	UPROPERTY()
	bool bLeaning = false;

	UFUNCTION()
	void CheckAutomaticLeaning();

	UFUNCTION()
	void Input_Lean(const struct FInputActionValue& Value);

	UFUNCTION()
	void Input_LeanReleased(const struct FInputActionValue& Value);

	UFUNCTION()
	void OnAbilityTick(float DeltaTime);

	UFUNCTION()
	void TraceForLeaningSide(float Multiplier, float& Sign, float& MinimumDistance, int32& MinimumIndex);

	UFUNCTION()
	void GetAvoidanceTraceInputs(const FVector& Offset, FVector& Start, FVector& End);

	UFUNCTION()
	void UpdateLeaningValues();

	// Trace-related member variables
	UPROPERTY()
	float CornerPeekDivision = 10.0f;

	UPROPERTY()
	FVector LeaningCameraOffsetLocation = FVector(0.0f, 50.0f, 0.0f);

	UPROPERTY()
	float LeaningAlpha = 0.0f;


	UPROPERTY()
	class USpringArmComponent* SpringArm = nullptr;

	UPROPERTY()
	class UCameraComponent* GameViewCamera = nullptr;

	UPROPERTY()
	float AvoidanceDistance = 100.0f;
	
	UPROPERTY()
	FVector LeaningCameraLocationOffset = FVector(0.0f, 50.0f, 0.0f);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rush|Leaning")
	FVector LeaningCameraOffsetRotation = FVector(20.0f, 00.0f, 0.0f);

private:
	UPROPERTY()
	URushAbilityTask_Tick* TickTask = nullptr;
};