#pragma once

#include "CoreMinimal.h"
#include "Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Weapon/Struct/FWeaponMontageSettings.h"
#include "Sniper03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper 03 Montage Settings")
    static FWeaponMontageSettings GetSniper03MontageSettingsByName(EWeaponMontageName MontageName);

};
