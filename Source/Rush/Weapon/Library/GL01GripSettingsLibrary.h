#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "GL01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UGL01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="GL01 Grip Settings")
    static FGripSettingsEntry GetGL01GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="GL01 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllGL01GripSettings();
};
