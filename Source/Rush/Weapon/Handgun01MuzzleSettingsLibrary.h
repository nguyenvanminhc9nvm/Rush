#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "Handgun01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun01 Muzzle Settings")
    static FMuzzleSettingsEntry GetHandgun01MuzzleSettingsByName(EMuzzleName MuzzleName);
};
