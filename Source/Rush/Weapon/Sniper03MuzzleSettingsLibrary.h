#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "Sniper03MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper03MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper03 Muzzle Settings")
    static FMuzzleSettingsEntry GetSniper03MuzzleSettingsByName(EMuzzleName MuzzleName);
};
