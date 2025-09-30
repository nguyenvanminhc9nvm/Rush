#pragma once

#include "CoreMinimal.h"
#include "Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FGripSettingsEntry.h"
#include "AR01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Grip Settings")
    static FGripSettingsEntry GetGripSettingsByName(EGripName GripName);
};
