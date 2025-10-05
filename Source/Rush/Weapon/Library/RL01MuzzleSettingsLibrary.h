#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "RL01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API URL01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="RL01 Muzzle Settings")
    static FMuzzleSettingsEntry GetRL01MuzzleSettingsByName(EMuzzleName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="RL01 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllRL01MuzzleSettings();
};
