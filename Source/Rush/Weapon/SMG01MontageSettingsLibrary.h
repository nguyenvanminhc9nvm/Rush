#pragma once

#include "CoreMinimal.h"
#include "Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Weapon/Struct/FWeaponMontageSettings.h"
#include "SMG01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG 01 Montage Settings")
    static FWeaponMontageSettings GetSMG01MontageSettingsByName(EWeaponMontageName MontageName);

};
