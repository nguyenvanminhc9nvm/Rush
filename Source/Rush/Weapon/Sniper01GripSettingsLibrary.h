#pragma once

#include "CoreMinimal.h"
#include "Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FGripSettingsEntry.h"
#include "Sniper01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper01 Grip Settings")
    static FGripSettingsEntry GetSniper01GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="Sniper01 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllSniper01GripSettings();
};
