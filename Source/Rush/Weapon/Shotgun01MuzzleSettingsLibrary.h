#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "Shotgun01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UShotgun01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Shotgun01 Muzzle Settings")
    static FMuzzleSettingsEntry GetShotgun01MuzzleSettingsByName(EMuzzleName MuzzleName);
};
