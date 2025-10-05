#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "AR01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Grip Settings")
    static FGripSettingsEntry GetGripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="Grip Settings")
    static TArray<FGripSettingsEntry> GetAllGripSettings();
};
