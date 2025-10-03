#pragma once

#include "CoreMinimal.h"
#include "FWeaponSpeed.h"
#include "FWeaponMovementSettings.generated.h"

enum EWeaponMovementName: uint8;

USTRUCT(BlueprintType)
struct RUSH_API FWeaponMovementSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    TEnumAsByte<EWeaponMovementName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    FWeaponSpeed SpeedWalk;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    FWeaponSpeed SpeedAim;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    FWeaponSpeed SpeedRun;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    FWeaponSpeed SpeedCrouch;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    FWeaponSpeed SpeedMultiplierShooting;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    FWeaponSpeed SpeedRunFast;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    float AirControl = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    float JumpForce = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    float JumpMaxHoldTime = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Movement")
    float SpeedMultiplierFiringRevertAddedDelay = 0.0f;

    FWeaponMovementSettings()
    {
        // Initialize with default values
    }
};
