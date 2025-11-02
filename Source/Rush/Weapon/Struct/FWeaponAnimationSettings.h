#pragma once

#include "CoreMinimal.h"
#include "FWeaponSettings.h"
#include "FScopeSettingsEntry.h"
#include "Rush/Character/Struct/FCharacterBlendspaceSettings.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "FWeaponAnimationSettings.generated.h"

enum EWeaponName : uint8;

USTRUCT(Blueprintable, BlueprintType)
struct FBlendSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BlendIn = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BlendOut = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TimedValue = 0.0f;
};

USTRUCT(Blueprintable)
struct FLoweredSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FBlendSettings SettingsBlend;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform AdditionalOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bRemoveStandingOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bRunningAnimationUsed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RunningAnimationExplicitTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bRunningAnimationOffsetUsed;
};

USTRUCT(Blueprintable)
struct FLeanSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UCurveVector> CurveLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UCurveVector> CurveRotation;
};


USTRUCT(BlueprintType)
struct RUSH_API FWeaponAnimationSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TEnumAsByte<EWeaponName> Name;

    // Running Blend Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FBlendSettings BlendSettings;

    // Play Rate Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PlayRateBreathing = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PlayRateWalking = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PlayRateRunning = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PlayRateTurning = 1.0f;

    // Lag Movement Interp Speed
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LagMovementInterpSpeed = 10.0f;

    // Look Offset Multiplier Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector LookOffsetMultiplierLocation = FVector(-0.1f, 0.0f, 0.1f);

    // Look Offset Multiplier Rotation
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector LookOffsetMultiplierRotation = FVector(0.0f, -0.7f, 0.0f);

    // Standing Offset
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform StandingOffset = FTransform::Identity;

    // Standing Lag Movement Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLagValues StandingLag;
    
    // Override TP Standing Lag
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bOverrideTPStandingLag = false;

    // TP Standing Lag Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLagValues TPStandingLag;

    // Standing Lag Location Controller Multiplier
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StandingLagLocationControllerMultiplier = 1.0f;

    // Aiming Offset
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform AimingOffset = FTransform::Identity;

    // Aiming Lag Movement Location
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLagValues AimingLag;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform RunningOffset = FTransform::Identity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform CrouchingOffset = FTransform::Identity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform MontageOffset = FTransform::Identity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLoweredSettings LoweredSettings;

    // Character Sequence Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterSequenceSettings CharacterSequenceSettingsStandingBreathing;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterSequenceSettings CharacterSequenceSettingsAimingWalking;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterSequenceSettings CharacterSequenceSettingsAimingBreathing;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterSequenceSettings CharacterSequenceSettingsTurning;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterSequenceSettings CharacterSequenceSettingsJog;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterSequenceSettings CharacterSequenceSettingsSprint;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterSequenceSettings CharacterSequenceSettingsSprintImpulse;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterSequenceSettings CharacterSequenceSettingsSprintTactical;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterSequenceSettings CharacterSequenceSettingsCrouchingWalking;

    // Character Blendspace Settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterBlendspaceSettings CharacterBlendspaceSettingsLeaning;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterBlendspaceSettings CharacterBlendspaceSettingsWalking;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FCharacterBlendspaceSettings CharacterBlendspaceSettingsAiming;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLeanSettings LeanSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FBlendSettings AimingSyncTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FTransform TacticalSprintOffset;

    FWeaponAnimationSettings()
    {
        // Initialize with default values
    }
};
