#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "Handgun02MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun02MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun02 Muzzle Settings")
    static FMuzzleSettingsEntry GetHandgun02MuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Handgun02 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllHandgun02MuzzleSettings();
};
