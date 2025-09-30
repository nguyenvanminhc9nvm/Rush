#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "SMG02MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG02MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG02 Muzzle Settings")
    static FMuzzleSettingsEntry GetSMG02MuzzleSettingsByName(EMuzzleName MuzzleName);
};
