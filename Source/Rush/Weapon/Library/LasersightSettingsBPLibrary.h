#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Enum/ELasersightSettingsName.h"
#include "Rush/Weapon/Struct/FLasersightSettingsEntry.h"
#include "LasersightSettingsBPLibrary.generated.h"

UCLASS()
class RUSH_API ULasersightSettingsBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Lasersight Settings")
    static FLasersightSettingsEntry GetLasersightSettingsByName(ELasersightSettingsName SettingsName);

};
