#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponIcon.h"
#include "SMG01WeaponIconSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG01WeaponIconSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG01 Weapon Icon Settings")
    static FWeaponIcon GetWeaponIconByName(EWeaponIconName IconName);

    UFUNCTION(BlueprintCallable, Category="SMG01 Weapon Icon Settings")
    static TArray<FWeaponIcon> GetAllSMG01WeaponIcons();
};
