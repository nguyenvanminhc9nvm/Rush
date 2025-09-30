#pragma once

#include "CoreMinimal.h"
#include "Curves/CurveVector.h"
#include "FWeaponSettings.generated.h"

UENUM(BlueprintType)
enum class EWeaponFireMode : uint8
{
    Semi        UMETA(DisplayName = "Semi"),
    Automatic   UMETA(DisplayName = "Automatic"),
    BurstHold   UMETA(DisplayName = "Burst Hold"),
    Burst       UMETA(DisplayName = "Burst")
};

USTRUCT(BlueprintType)
struct RUSH_API FRecoilInterpolation
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil Interpolation")
    float Stiffness = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil Interpolation")
    float CriticalDampingFactor = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil Interpolation")
    float Mass = 0.006f;

    FRecoilInterpolation()
    {
        // Initialize with default values
    }
};

USTRUCT(BlueprintType)
struct RUSH_API FRecoilState
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil State")
    UCurveVector* LocationCurve = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil State")
    FRecoilInterpolation LocationInterpolation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil State")
    float LocationMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil State")
    UCurveVector* RotationCurve = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil State")
    FRecoilInterpolation RotationInterpolation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil State")
    float RotationMultiplier = 1.0f;

    FRecoilState()
    {
        // Initialize with default values
    }
};

USTRUCT(BlueprintType)
struct RUSH_API FRecoilStates
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil States")
    FRecoilState RecoilStateStanding;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil States")
    FRecoilState RecoilStateAiming;

    FRecoilStates()
    {
        // Initialize with default values
    }
};

USTRUCT(BlueprintType)
struct RUSH_API FRecoilProperties
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil Properties")
    FRecoilStates RecoilStatesViewmodel;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil Properties")
    FRecoilStates RecoilStatesCamera;

    FRecoilProperties()
    {
        // Initialize with default values
    }
};

USTRUCT(BlueprintType)
struct RUSH_API FWeaponSettings
{
    GENERATED_BODY()

    // Basic Weapon Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic Properties")
    bool bBoltAction = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic Properties")
    bool bCycledReload = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic Properties")
    bool bCanReloadFull = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic Properties")
    bool bAutoReloadOnEmpty = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic Properties")
    bool bAutoReloadOnEmptyFire = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic Properties")
    bool bCanActionBoltWhileAiming = false;

    // Fire Mode and Rates
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire Properties")
    EWeaponFireMode FireMode = EWeaponFireMode::Automatic;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire Properties")
    int32 FireRate = 600;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire Properties")
    int32 FireRateEmpty = 450;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire Properties")
    int32 BurstCount = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire Properties")
    float BurstTimeBetween = 0.0f;

    // Spread Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spread Properties")
    float SpreadYaw = 4.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spread Properties")
    float SpreadPitch = 4.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spread Properties")
    float SpreadAimingMultiplier = 0.1f;

    // Recoil Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Recoil Properties")
    FRecoilProperties RecoilProperties;

    // Curves and Effects
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curves and Effects")
    UCurveFloat* SpreadCurve = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curves and Effects")
    UForceFeedbackEffect* ForceFeedbackEffect = nullptr;

    FWeaponSettings()
    {
        // Initialize with default values
    }
};
