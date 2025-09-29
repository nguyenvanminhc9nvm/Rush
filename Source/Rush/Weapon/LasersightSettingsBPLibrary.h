#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FLasersightSettingsEntry.h"
#include "LasersightSettingsBPLibrary.generated.h"

UENUM(BlueprintType)
enum class ELasersightSettingsName: uint8
{
    Normal,
    Neon,
    Yellow,
    Tactical,
    Evil,
    Venomous
};

UCLASS()
class RUSH_API ULasersightSettingsBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Lasersight Settings")
    static FLasersightSettingsEntry GetLasersightSettingsByName(ELasersightSettingsName SettingsName);

private:
    static FString LasersightSettingsNameToString(ELasersightSettingsName SettingsName);
};
