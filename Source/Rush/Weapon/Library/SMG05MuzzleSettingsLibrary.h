#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "SMG05MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG05MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG05 Muzzle Settings")
    static FMuzzleSettingsEntry GetSMG05MuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="SMG05 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllSMG05MuzzleSettings();
};
