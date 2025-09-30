#pragma once

#include "CoreMinimal.h"
#include "Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FGripSettingsEntry.h"
#include "SMG05GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG05GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG05 Grip Settings")
    static FGripSettingsEntry GetSMG05GripSettingsByName(EGripName GripName);
};
