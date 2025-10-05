#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponIcon.h"
#include "Sniper02WeaponIconSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper02WeaponIconSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper02 Weapon Icon Settings")
    static FWeaponIcon GetWeaponIconByName(EWeaponIconName IconName);

    UFUNCTION(BlueprintCallable, Category="Sniper02 Weapon Icon Settings")
    static TArray<FWeaponIcon> GetAllSniper02WeaponIcons();
};
