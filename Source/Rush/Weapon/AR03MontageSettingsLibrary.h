#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponMontageSettings.h"
#include "AR03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR 03 Montage Settings")
    static FWeaponMontageSettings GetAR03MontageSettingsByName(EWeaponMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="AR 03 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllAR03MontageSettings();

};
