#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"

#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "FLaserSettingsEntry.generated.h"

USTRUCT(BlueprintType)
struct RUSH_API FLaserSettingsEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Laser Settings")
    TEnumAsByte<EWeaponIconName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Laser Settings")
    bool bOffWhileAiming;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Laser Settings")
    bool bOffWhileRunning;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Laser Settings")
    bool bOffWhileLowered;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Laser Settings")
    FVector RelativeLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Laser Settings")
    TSoftObjectPtr<USoundCue> ToggleSoundCue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Laser Settings")
    bool bFlashlight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Laser Settings")
    bool bLasersight;
};
