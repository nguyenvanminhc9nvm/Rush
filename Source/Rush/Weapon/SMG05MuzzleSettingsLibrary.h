#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "SMG05MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG05MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG05 Muzzle Settings")
    static FMuzzleSettingsEntry GetSMG05MuzzleSettingsByName(EMuzzleName MuzzleName);
};
