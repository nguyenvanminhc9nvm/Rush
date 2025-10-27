#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "SMG04MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG04MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG04 Muzzle Settings")
    static FMuzzleSettingsEntry GetSMG04MuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="SMG04 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllSMG04MuzzleSettings();
};
