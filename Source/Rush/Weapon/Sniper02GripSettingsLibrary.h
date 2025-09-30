#pragma once

#include "CoreMinimal.h"
#include "Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FGripSettingsEntry.h"
#include "Sniper02GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper02GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper02 Grip Settings")
    static FGripSettingsEntry GetSniper02GripSettingsByName(EGripName GripName);
};
