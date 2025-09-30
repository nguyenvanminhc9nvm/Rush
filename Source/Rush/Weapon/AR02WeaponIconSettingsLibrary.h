#pragma once

#include "CoreMinimal.h"
#include "Enum/EWeaponIconName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FWeaponIcon.h"
#include "AR02WeaponIconSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR02WeaponIconSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR02 Weapon Icon Settings")
    static FWeaponIcon GetWeaponIconByName(EWeaponIconName IconName);
};
