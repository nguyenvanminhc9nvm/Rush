#pragma once

#include "CoreMinimal.h"
#include "FWeaponSpeed.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FWeaponSpeed
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Speed")
    float MaxSpeed = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Speed")
    float FootstepDistance = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Speed")
    float SyncedAnimationSpeed = 0.0f;

    FWeaponSpeed()
    {
        // Initialize with default values
    }
};
