#pragma once

#include "CoreMinimal.h"
#include "Enum/EMuzzleName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FMuzzleSettingsEntry.h"
#include "Handgun02MuzzleSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun02MuzzleSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun02 Muzzle Settings")
    static FMuzzleSettingsEntry GetHandgun02MuzzleSettingsByName(EMuzzleName MuzzleName);

    UFUNCTION(BlueprintCallable, Category="Handgun02 Muzzle Settings")
    static TArray<FMuzzleSettingsEntry> GetAllHandgun02MuzzleSettings();
};
