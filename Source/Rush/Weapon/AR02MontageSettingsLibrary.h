#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponMontageSettings.h"
#include "AR02MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR02MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR 02 Montage Settings")
    static FWeaponMontageSettings GetAR02MontageSettingsByName(EWeaponMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="AR 02 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllAR02MontageSettings();

};
