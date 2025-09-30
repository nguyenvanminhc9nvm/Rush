#pragma once

#include "CoreMinimal.h"
#include "Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FGripSettingsEntry.h"
#include "SMG01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG01 Grip Settings")
    static FGripSettingsEntry GetSMG01GripSettingsByName(EGripName GripName);
};
