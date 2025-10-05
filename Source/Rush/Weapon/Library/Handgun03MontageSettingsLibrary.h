#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Enum/EWeaponMontageName.h"
#include "Handgun03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun 03 Montage Settings")
    static FWeaponMontageSettings GetHandgun03MontageSettingsByName(EWeaponMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Handgun 03 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllHandgun03MontageSettings();

};
