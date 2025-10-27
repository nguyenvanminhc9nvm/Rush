#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "AR03MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR03MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR03 Muzzle Settings")
    static FMuzzleSettingsEntry GetAR03MuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="AR03 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllAR03MuzzleSettings();
};
