#pragma once

#include "CoreMinimal.h"
#include "Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FGripSettingsEntry.h"
#include "Shotgun01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UShotgun01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Shotgun01 Grip Settings")
    static FGripSettingsEntry GetShotgun01GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="Shotgun01 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllShotgun01GripSettings();
};
