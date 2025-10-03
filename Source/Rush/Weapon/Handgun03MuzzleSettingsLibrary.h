#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "Handgun03MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun03MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun03 Muzzle Settings")
    static FMuzzleSettingsEntry GetHandgun03MuzzleSettingsByName(EMuzzleName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Handgun03 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllHandgun03MuzzleSettings();
};
