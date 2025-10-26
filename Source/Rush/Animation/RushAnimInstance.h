#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Struct/FScopeSettingsEntry.h"
#include "RushAnimInstance.generated.h"

UENUM(BlueprintType)
enum class EMovementState: uint8
{
	Idle 	UMETA(DisplayName = "Idle"),
	Moving 	UMETA(DisplayName = "Moving"),
};


UCLASS(BlueprintType)
class RUSH_API URushAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	URushAnimInstance();

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FScopeSettingsEntry ScopeSettingsEntry;
};