#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "AR01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Muzzle Settings")
    static FMuzzleSettingsEntry GetMuzzleSettingsByName(EMuzzleName MuzzleName);
};
