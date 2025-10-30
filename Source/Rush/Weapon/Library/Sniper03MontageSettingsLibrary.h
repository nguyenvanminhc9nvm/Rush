#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Sniper03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper 03 Montage Settings")
    static FWeaponMontageSettings GetSniper03MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Sniper 03 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllSniper03MontageSettings();

};
