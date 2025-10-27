#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "Sniper01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper01 Muzzle Settings")
    static FMuzzleSettingsEntry GetSniper01MuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Sniper01 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllSniper01MuzzleSettings();
};
