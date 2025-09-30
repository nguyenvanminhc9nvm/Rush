#pragma once

#include "CoreMinimal.h"
#include "FWeaponAnimationSettings.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FWeaponAnimationSettings
{
    GENERATED_BODY()

    // Running Blend Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Running Blend")
    float BlendIn = 0.4f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Running Blend")
    float BlendOut = 0.3f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Running Blend")
    float TimedValue = 0.25f;

    // Play Rate Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Play Rate")
    float PlayRateBreathing = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Play Rate")
    float PlayRateWalking = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Play Rate")
    float PlayRateRunning = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Play Rate")
    float PlayRateTurning = 1.0f;

    // Lag Movement Interp Speed
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lag")
    float LagMovementInterpSpeed = 10.0f;

    // Look Offset Multiplier Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look Offset")
    FVector LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);

    // Look Offset Multiplier Rotation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look Offset")
    FVector LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);

    // Standing Offset
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standing Offset")
    FTransform StandingOffset = FTransform::Identity;

    // Standing Lag Movement Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standing Lag")
    FVector StandingLagMovementLocationHorizontal = FVector(2.0f, 0.0f, 0.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standing Lag")
    FVector StandingLagMovementLocationVertical = FVector(0.0f, -1.75f, 0.0f);

    // Standing Lag Movement Rotation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standing Lag")
    FVector StandingLagMovementRotationHorizontal = FVector(0.0f, 0.0f, 1.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standing Lag")
    FVector StandingLagMovementRotationVertical = FVector(1.2f, 0.0f, -0.5f);

    // Standing Lag Look Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standing Lag")
    FVector StandingLagLookLocationHorizontal = FVector(3.0f, 0.0f, 0.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standing Lag")
    FVector StandingLagLookLocationVertical = FVector(0.0f, 0.0f, 1.0f);

    // Standing Lag Look Rotation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standing Lag")
    FVector StandingLagLookRotationHorizontal = FVector(0.0f, 3.0f, 0.25f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standing Lag")
    FVector StandingLagLookRotationVertical = FVector(0.25f, 0.0f, 0.0f);

    // Spring Interpolation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spring Interpolation")
    float SpringStiffness = 0.8f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spring Interpolation")
    float SpringCriticalDampingFactor = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spring Interpolation")
    float SpringMass = 0.01f;

    // Override TP Standing Lag
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Standing Lag")
    bool bOverrideTPStandingLag = false;

    // TP Standing Lag Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Standing Lag")
    FVector TPStandingLagMovementLocationHorizontal = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Standing Lag")
    FVector TPStandingLagMovementLocationVertical = FVector::ZeroVector;

    // TP Standing Lag Rotation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Standing Lag")
    FVector TPStandingLagMovementRotationHorizontal = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Standing Lag")
    FVector TPStandingLagMovementRotationVertical = FVector::ZeroVector;

    // TP Standing Lag Look Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Standing Lag")
    FVector TPStandingLagLookLocationHorizontal = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Standing Lag")
    FVector TPStandingLagLookLocationVertical = FVector::ZeroVector;

    // TP Standing Lag Look Rotation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Standing Lag")
    FVector TPStandingLagLookRotationHorizontal = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Standing Lag")
    FVector TPStandingLagLookRotationVertical = FVector::ZeroVector;

    // TP Spring Interpolation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Spring Interpolation")
    float TPSpringStiffness = 0.4f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Spring Interpolation")
    float TPSpringCriticalDampingFactor = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TP Spring Interpolation")
    float TPSpringMass = 0.006f;

    // Standing Lag Location Controller Multiplier
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Standing Lag")
    float StandingLagLocationControllerMultiplier = 1.0f;

    // Aiming Offset
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Offset")
    FTransform AimingOffset = FTransform::Identity;

    // Aiming Lag Movement Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Lag")
    FVector AimingLagMovementLocationHorizontal = FVector(0.1f, 0.0f, 0.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Lag")
    FVector AimingLagMovementLocationVertical = FVector::ZeroVector;

    // Aiming Lag Movement Rotation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Lag")
    FVector AimingLagMovementRotationHorizontal = FVector(0.0f, 0.1f, 0.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Lag")
    FVector AimingLagMovementRotationVertical = FVector::ZeroVector;

    // Aiming Lag Look Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Lag")
    FVector AimingLagLookLocationHorizontal = FVector(0.3f, 0.0f, 0.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Lag")
    FVector AimingLagLookLocationVertical = FVector(0.0f, 0.0f, 0.15f);

    // Aiming Lag Look Rotation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Lag")
    FVector AimingLagLookRotationHorizontal = FVector(0.0f, 1.3f, 0.3f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Lag")
    FVector AimingLagLookRotationVertical = FVector::ZeroVector;

    // Aiming Spring Interpolation
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Spring Interpolation")
    float AimingSpringStiffness = 0.9f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Spring Interpolation")
    float AimingSpringCriticalDampingFactor = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming Spring Interpolation")
    float AimingSpringMass = 0.009f;

    FWeaponAnimationSettings()
    {
        // Initialize with default values
    }
};
