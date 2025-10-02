#pragma once

#include "CoreMinimal.h"
#include "Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Weapon/Struct/FWeaponMontageSettings.h"
#include "Sniper02MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper02MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper 02 Montage Settings")
    static FWeaponMontageSettings GetSniper02MontageSettingsByName(EWeaponMontageName MontageName);

};
