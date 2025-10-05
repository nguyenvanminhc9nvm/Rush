#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Enum/EFlashlightSettingsName.h"
#include "Rush/Weapon/Struct/FFlashlightSettingsEntry.h"
#include "FlashlightSettingsBPLibrary.generated.h"

UCLASS()
class RUSH_API UFlashlightSettingsBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Flashlight Settings")
    static FFlashlightSettingsEntry GetFlashlightSettingsByName(EFlashlightSettingsName SettingsName);
};

