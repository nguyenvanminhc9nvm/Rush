#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "Sniper02MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper02MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper02 Muzzle Settings")
    static FMuzzleSettingsEntry GetSniper02MuzzleSettingsByName(EMuzzleName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Sniper02 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllSniper02MuzzleSettings();
};
