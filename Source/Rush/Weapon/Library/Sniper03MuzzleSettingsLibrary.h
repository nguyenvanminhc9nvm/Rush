#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "Sniper03MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper03MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper03 Muzzle Settings")
    static FMuzzleSettingsEntry GetSniper03MuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Sniper03 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllSniper03MuzzleSettings();
};
