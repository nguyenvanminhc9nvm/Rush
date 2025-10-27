#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "Handgun01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun01 Muzzle Settings")
    static FMuzzleSettingsEntry GetHandgun01MuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Handgun01 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllHandgun01MuzzleSettings();
};
