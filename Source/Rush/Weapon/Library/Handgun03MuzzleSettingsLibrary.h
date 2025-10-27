#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "Handgun03MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun03MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun03 Muzzle Settings")
    static FMuzzleSettingsEntry GetHandgun03MuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Handgun03 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllHandgun03MuzzleSettings();
};
