#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "FMuzzleSettingsEntry.generated.h"

enum EWeaponIconName: uint8;

USTRUCT(BlueprintType)
struct RUSH_API FMuzzleSettingsEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle Settings")
    TEnumAsByte<EWeaponIconName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle Settings")
    TSoftObjectPtr<UParticleSystem> FireParticles;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle Settings")
    TSoftObjectPtr<USoundCue> FireSoundCue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle Settings")
    bool bOverheatEnabled;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle Settings")
    int32 OverheatShots;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle Settings")
    TSoftObjectPtr<UParticleSystem> OverheatParticles;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle Settings")
    bool bFlashLight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle Settings")
    float FlashLightDuration;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Muzzle Settings")
    FVector FlashLightRelativeLocation;
};
