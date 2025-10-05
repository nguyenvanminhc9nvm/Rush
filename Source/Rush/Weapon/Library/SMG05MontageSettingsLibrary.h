#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "SMG05MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG05MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG 05 Montage Settings")
    static FWeaponMontageSettings GetSMG05MontageSettingsByName(EWeaponMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="SMG 05 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllSMG05MontageSettings();

};
