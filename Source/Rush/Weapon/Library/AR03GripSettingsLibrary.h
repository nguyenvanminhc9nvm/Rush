#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "AR03GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR03GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR03 Grip Settings")
    static FGripSettingsEntry GetAR03GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="AR03 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllAR03GripSettings();
};
