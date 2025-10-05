#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponIcon.h"
#include "SMG05WeaponIconSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG05WeaponIconSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG05 Weapon Icon Settings")
    static FWeaponIcon GetWeaponIconByName(EWeaponIconName IconName);

    UFUNCTION(BlueprintCallable, Category="SMG05 Weapon Icon Settings")
    static TArray<FWeaponIcon> GetAllSMG05WeaponIcons();
};
