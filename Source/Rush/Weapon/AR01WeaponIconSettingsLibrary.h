#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponIconName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponIcon.h"
#include "AR01WeaponIconSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR01WeaponIconSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR01 Weapon Icon Settings")
    static FWeaponIcon GetWeaponIconByName(EWeaponIconName IconName);
};
