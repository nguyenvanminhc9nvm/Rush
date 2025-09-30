#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "Handgun04MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun04MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun04 Muzzle Settings")
    static FMuzzleSettingsEntry GetHandgun04MuzzleSettingsByName(EMuzzleName MuzzleName);
};
