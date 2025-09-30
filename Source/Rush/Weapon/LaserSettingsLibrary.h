#pragma once

#include "CoreMinimal.h"
#include "Enum/EFragmentLaserName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FLaserSettingsEntry.h"
#include "LaserSettingsLibrary.generated.h"

UCLASS()
class RUSH_API ULaserSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Laser Settings")
    static FLaserSettingsEntry GetLaserSettingsByName(EFragmentLaserName LaserName);
};
