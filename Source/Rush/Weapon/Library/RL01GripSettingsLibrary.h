#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "RL01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API URL01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="RL01 Grip Settings")
    static FGripSettingsEntry GetRL01GripSettingsByName(EWeaponIconName GripName);

    UFUNCTION(BlueprintCallable, Category="RL01 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllRL01GripSettings();
};
