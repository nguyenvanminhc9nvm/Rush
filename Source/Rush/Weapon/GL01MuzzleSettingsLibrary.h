#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "GL01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UGL01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="GL01 Muzzle Settings")
    static FMuzzleSettingsEntry GetGL01MuzzleSettingsByName(EMuzzleName MuzzleName);
};
