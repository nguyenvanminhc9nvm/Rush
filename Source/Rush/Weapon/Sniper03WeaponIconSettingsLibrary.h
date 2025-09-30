#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponIconName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponIcon.h"
#include "Sniper03WeaponIconSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper03WeaponIconSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper03 Weapon Icon Settings")
    static FWeaponIcon GetWeaponIconByName(EWeaponIconName IconName);
};
