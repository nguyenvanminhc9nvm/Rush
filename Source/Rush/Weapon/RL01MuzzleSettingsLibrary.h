#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "RL01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API URL01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="RL01 Muzzle Settings")
    static FMuzzleSettingsEntry GetRL01MuzzleSettingsByName(EMuzzleName MuzzleName);
};
