#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "AR02MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR02MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR02 Muzzle Settings")
    static FMuzzleSettingsEntry GetAR02MuzzleSettingsByName(EMuzzleName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="AR02 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllAR02MuzzleSettings();
};
