#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "Sniper01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper 01 Montage Settings")
    static FWeaponMontageSettings GetSniper01MontageSettingsByName(EWeaponMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Sniper 01 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllSniper01MontageSettings();

};
