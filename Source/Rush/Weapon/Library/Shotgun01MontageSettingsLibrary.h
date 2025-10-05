#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "Shotgun01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UShotgun01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Shotgun 01 Montage Settings")
    static FWeaponMontageSettings GetShotgun01MontageSettingsByName(EWeaponMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Shotgun 01 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllShotgun01MontageSettings();

};
