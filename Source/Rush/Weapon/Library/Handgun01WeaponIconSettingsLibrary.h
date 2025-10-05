#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FWeaponIcon.h"
#include "Handgun01WeaponIconSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun01WeaponIconSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun01 Weapon Icon Settings")
    static FWeaponIcon GetWeaponIconByName(EWeaponIconName IconName);

    UFUNCTION(BlueprintCallable, Category="Handgun01 Weapon Icon Settings")
    static TArray<FWeaponIcon> GetAllHandgun01WeaponIcons();
};
