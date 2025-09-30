#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FGameAbility.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FGameAbility
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Ability")
    FGameplayTagContainer TagsRequired;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Ability")
    FGameplayTagContainer TagsBlocked;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Ability")
    FGameplayTagContainer TagsAdded;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Ability")
    FGameplayTagContainer TagsRemoved;

    FGameAbility()
    {
        // Initialize with default values
    }
};
