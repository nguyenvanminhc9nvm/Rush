#pragma once

#include "CoreMinimal.h"
#include "Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FGripSettingsEntry.h"
#include "RL01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API URL01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="RL01 Grip Settings")
    static FGripSettingsEntry GetRL01GripSettingsByName(EGripName GripName);
};
