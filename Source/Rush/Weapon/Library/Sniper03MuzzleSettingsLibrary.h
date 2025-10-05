#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "Sniper03MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper03MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper03 Muzzle Settings")
    static FMuzzleSettingsEntry GetSniper03MuzzleSettingsByName(EMuzzleName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Sniper03 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllSniper03MuzzleSettings();
};
