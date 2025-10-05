#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "SMG04MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG04MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG 04 Montage Settings")
    static FWeaponMontageSettings GetSMG04MontageSettingsByName(EWeaponMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="SMG 04 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllSMG04MontageSettings();

};
