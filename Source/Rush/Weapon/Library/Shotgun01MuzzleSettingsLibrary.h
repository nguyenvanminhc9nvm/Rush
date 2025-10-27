#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "Shotgun01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UShotgun01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Shotgun01 Muzzle Settings")
    static FMuzzleSettingsEntry GetShotgun01MuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Shotgun01 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllShotgun01MuzzleSettings();
};
