#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponMontageSettings.h"
#include "GL01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UGL01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="GL 01 Montage Settings")
    static FWeaponMontageSettings GetGL01MontageSettingsByName(EWeaponMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="GL 01 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllGL01MontageSettings();

};
