#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponAnimationSettings.h"
#include "WeaponAnimationSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UWeaponAnimationSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Weapon Animation Settings")
    static FWeaponAnimationSettings GetWeaponAnimationSettingsByName(EWeaponName WeaponName);


};
