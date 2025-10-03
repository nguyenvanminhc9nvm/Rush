#pragma once

#include "CoreMinimal.h"
#include "Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FGripSettingsEntry.h"
#include "AR02GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR02GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR02 Grip Settings")
    static FGripSettingsEntry GetAR02GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintPure, Category="AR02 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllAR02GripSettings();
};
