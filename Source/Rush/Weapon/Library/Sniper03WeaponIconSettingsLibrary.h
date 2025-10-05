#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponIcon.h"
#include "Sniper03WeaponIconSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper03WeaponIconSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper03 Weapon Icon Settings")
    static FWeaponIcon GetWeaponIconByName(EWeaponIconName IconName);

    UFUNCTION(BlueprintCallable, Category="Sniper03 Weapon Icon Settings")
    static TArray<FWeaponIcon> GetAllSniper03WeaponIcons();
};
