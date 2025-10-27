#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "Handgun04MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun04MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun04 Muzzle Settings")
    static FMuzzleSettingsEntry GetHandgun04MuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Handgun04 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllHandgun04MuzzleSettings();
};
