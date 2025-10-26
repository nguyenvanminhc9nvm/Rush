#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FLaserSettingsEntry.h"
#include "LaserSettingsLibrary.generated.h"

UCLASS()
class RUSH_API ULaserSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Laser Settings")
    static FLaserSettingsEntry GetLaserSettingsByName(EWeaponIconName LaserName);

    UFUNCTION(BlueprintCallable, Category="Laser Settings")
    static TArray<FLaserSettingsEntry> GetAllLaserSettings();
};
