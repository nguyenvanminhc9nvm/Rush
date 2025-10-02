#pragma once

#include "CoreMinimal.h"
#include "Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Weapon/Struct/FWeaponMontageSettings.h"
#include "AR01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR 01 Montage Settings")
    static FWeaponMontageSettings GetAR01MontageSettingsByName(EWeaponMontageName MontageName);

};
