#pragma once

#include "CoreMinimal.h"
#include "Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FGripSettingsEntry.h"
#include "SMG04GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG04GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG04 Grip Settings")
    static FGripSettingsEntry GetSMG04GripSettingsByName(EGripName GripName);
};
