#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "Sniper01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper01 Grip Settings")
    static FGripSettingsEntry GetSniper01GripSettingsByName(EWeaponIconName GripName);

    UFUNCTION(BlueprintCallable, Category="Sniper01 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllSniper01GripSettings();
};
