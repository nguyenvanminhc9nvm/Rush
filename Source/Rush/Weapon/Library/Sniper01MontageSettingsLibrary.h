#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "Sniper01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper 01 Montage Settings")
    static FWeaponMontageSettings GetSniper01MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Sniper 01 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllSniper01MontageSettings();

};
