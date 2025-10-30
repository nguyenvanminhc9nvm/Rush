#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Struct/FWeaponMontageSettings.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Handgun04MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun04MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun 04 Montage Settings")
    static FWeaponMontageSettings GetHandgun04MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Handgun 04 Montage Settings")
    static TArray<FWeaponMontageSettings> GetAllHandgun04MontageSettings();

};
