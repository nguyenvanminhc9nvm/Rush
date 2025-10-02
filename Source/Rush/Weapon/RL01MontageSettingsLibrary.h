#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponMontageSettings.h"
#include "RL01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API URL01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="RL 01 Montage Settings")
    static FWeaponMontageSettings GetRL01MontageSettingsByName(EWeaponMontageName MontageName);

};
