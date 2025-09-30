#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "SMG04MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG04MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG04 Muzzle Settings")
    static FMuzzleSettingsEntry GetSMG04MuzzleSettingsByName(EMuzzleName MuzzleName);
};
