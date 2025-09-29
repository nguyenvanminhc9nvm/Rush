#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FFlashlightSettingsEntry.h"
#include "FlashlightSettingsBPLibrary.generated.h"

UENUM(BlueprintType)
enum class EFlashlightSettingsName: uint8
{
    Normal,
    Neon,
    Tactical
};

UCLASS()
class RUSH_API UFlashlightSettingsBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Flashlight Settings")
    static FFlashlightSettingsEntry GetFlashlightSettingsByName(EFlashlightSettingsName SettingsName);

private:
    static FString FlashlightSettingsNameToString(EFlashlightSettingsName SettingsName);
};
