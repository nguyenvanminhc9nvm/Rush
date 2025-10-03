#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponMontageSettings.h"
#include "SMG03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG 03 Montage Settings")
    static FWeaponMontageSettings GetSMG03MontageSettingsByName(EWeaponMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="SMG 03 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllSMG03MontageSettings();

};
