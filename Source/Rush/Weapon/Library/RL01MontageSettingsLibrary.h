#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "RL01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API URL01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="RL 01 Montage Settings")
    static FWeaponMontageSettings GetRL01MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="RL 01 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllRL01MontageSettings();

};
