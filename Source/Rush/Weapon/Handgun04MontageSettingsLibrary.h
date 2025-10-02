#pragma once

#include "CoreMinimal.h"
#include "Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Weapon/Struct/FWeaponMontageSettings.h"
#include "Handgun04MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun04MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun 04 Montage Settings")
    static FWeaponMontageSettings GetHandgun04MontageSettingsByName(EWeaponMontageName MontageName);

};
