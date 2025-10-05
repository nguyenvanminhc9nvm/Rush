#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "Handgun02MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun02MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun 02 Montage Settings")
    static FWeaponMontageSettings GetHandgun02MontageSettingsByName(EWeaponMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Handgun 02 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllHandgun02MontageSettings();

};
