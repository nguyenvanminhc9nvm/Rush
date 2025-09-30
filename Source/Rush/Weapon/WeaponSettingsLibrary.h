#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponSettings.h"
#include "WeaponSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UWeaponSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Weapon Settings")
    static FWeaponSettings GetWeaponSettingsByName(EWeaponName WeaponName);

};
