#pragma once

#include "CoreMinimal.h"
#include "Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Weapon/Struct/FWeaponMontageSettings.h"
#include "SMG04MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG04MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG 04 Montage Settings")
    static FWeaponMontageSettings GetSMG04MontageSettingsByName(EWeaponMontageName MontageName);

};
