#pragma once

#include "CoreMinimal.h"
#include "Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Weapon/Struct/FWeaponMontageSettings.h"
#include "Handgun03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun 03 Montage Settings")
    static FWeaponMontageSettings GetHandgun03MontageSettingsByName(EWeaponMontageName MontageName);

};
