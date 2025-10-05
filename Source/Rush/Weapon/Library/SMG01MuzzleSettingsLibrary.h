#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "SMG01MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG01MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG01 Muzzle Settings")
    static FMuzzleSettingsEntry GetSMG01MuzzleSettingsByName(EMuzzleName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="SMG01 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllSMG01MuzzleSettings();
};
