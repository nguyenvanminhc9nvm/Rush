#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "AR03MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR03MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR03 Muzzle Settings")
    static FMuzzleSettingsEntry GetAR03MuzzleSettingsByName(EMuzzleName MuzzleName);
};
