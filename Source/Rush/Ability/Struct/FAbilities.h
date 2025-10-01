#pragma once

#include "CoreMinimal.h"
#include "FGameAbility.h"
#include "FAbilities.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FAbilities
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityKnife;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityReload;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityInspect;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityFire;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityAim;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityGrenadeThrow;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityRun;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityBoltAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityHolster;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityInteract;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilitySwapping;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameAbility AbilityTacticalSprint;

    FAbilities()
    {
        // Initialize with default values
    }
};
