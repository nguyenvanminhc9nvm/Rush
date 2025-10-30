#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "SMG05MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG05MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG 05 Montage Settings")
    static FWeaponMontageSettings GetSMG05MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="SMG 05 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllSMG05MontageSettings();

};
