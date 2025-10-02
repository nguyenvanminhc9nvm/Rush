#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponMontageSettings.h"
#include "SMG05MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG05MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG 05 Montage Settings")
    static FWeaponMontageSettings GetSMG05MontageSettingsByName(EWeaponMontageName MontageName);

};
