#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Enum/EWeaponName.h"
#include "Rush/Weapon/Struct/FWeaponIronsightEntry.h"
#include "Rush/Weapon/Struct/FWeaponIronsightSetting.h"
#include "IronsightSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UIronsightSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Ironsight Settings")
    static FWeaponIronsightSetting GetIronsightSettingByWeaponName(EWeaponName WeaponName);
};




