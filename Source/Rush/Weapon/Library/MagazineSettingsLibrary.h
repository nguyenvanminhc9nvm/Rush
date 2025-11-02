#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Enum/EWeaponName.h"
#include "Rush/Weapon/Struct/FMagazineEntry.h"
#include "MagazineSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UMagazineSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Magazine Settings")
    static FMagazineEntry GetMagazineSettingsByWeaponName(EWeaponName WeaponName);
};

