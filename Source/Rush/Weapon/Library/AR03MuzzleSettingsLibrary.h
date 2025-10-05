#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "AR03MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR03MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR03 Muzzle Settings")
    static FMuzzleSettingsEntry GetAR03MuzzleSettingsByName(EMuzzleName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="AR03 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllAR03MuzzleSettings();
};
