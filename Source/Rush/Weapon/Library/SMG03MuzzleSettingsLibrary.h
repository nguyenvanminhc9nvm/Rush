#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FMuzzleSettingsEntry.h"
#include "SMG03MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG03MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG03 Muzzle Settings")
    static FMuzzleSettingsEntry GetSMG03MuzzleSettingsByName(EMuzzleName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="SMG03 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllSMG03MuzzleSettings();
};
