#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "Sniper03GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper03GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper03 Grip Settings")
    static FGripSettingsEntry GetSniper03GripSettingsByName(EWeaponIconName GripName);

    UFUNCTION(BlueprintCallable, Category="Sniper03 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllSniper03GripSettings();
};
