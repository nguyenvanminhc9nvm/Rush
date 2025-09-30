#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponMovementName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponMovementSettings.h"
#include "WeaponMovementSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UWeaponMovementSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Weapon Movement Settings")
    static FWeaponMovementSettings GetWeaponMovementSettingsByName(EWeaponMovementName MovementName);
};
