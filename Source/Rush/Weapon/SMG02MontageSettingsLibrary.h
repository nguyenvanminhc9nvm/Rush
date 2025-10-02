#pragma once

#include "CoreMinimal.h"
#include "Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Weapon/Struct/FWeaponMontageSettings.h"
#include "SMG02MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG02MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG 02 Montage Settings")
    static FWeaponMontageSettings GetSMG02MontageSettingsByName(EWeaponMontageName MontageName);

};
