#pragma once

#include "CoreMinimal.h"
#include "Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FGripSettingsEntry.h"
#include "Handgun01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun01 Grip Settings")
    static FGripSettingsEntry GetHandgun01GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="Handgun01 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllHandgun01GripSettings();
};
