#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "AR01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Muzzle Settings")
    static FMuzzleSettingsEntry GetMuzzleSettingsByName(EWeaponIconName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllMuzzleSettings();
};
