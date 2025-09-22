#pragma once

#include "InputAction.h"
#include "GameplayTagContainer.h"
#include "RushInputAction.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType, Blueprintable)
struct FRushInputAction
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Rush Input Action")
	UInputAction* InputAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Rush Input Action")
	FGameplayTag ActionTag;
};

UCLASS(BlueprintType, Blueprintable)
class RUSH_API URushInputConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	URushInputConfig(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Rush Input Action")
	const UInputAction* FindInputActionByTag(const FGameplayTag& Tag) const;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rush Input Action")
	TArray<FRushInputAction> InputActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rush Input Action")
	UInputMappingContext* InputMappingContext;
};

