#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "Rush/Weapon/Struct/FWeaponIcon.h"
#include "AR01WeaponIconSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR01WeaponIconSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR01 Weapon Icon Settings")
    static FWeaponIcon GetWeaponIconByName(EWeaponIconName IconName);

    UFUNCTION(BlueprintCallable, Category="AR01 Weapon Icon Settings")
    static TArray<FWeaponIcon> GetAllAR01WeaponIcons();
};
