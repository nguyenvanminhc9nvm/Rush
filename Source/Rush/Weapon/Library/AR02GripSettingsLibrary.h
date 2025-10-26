#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "AR02GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAR02GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="AR02 Grip Settings")
    static FGripSettingsEntry GetAR02GripSettingsByName(EWeaponIconName GripName);

    UFUNCTION(BlueprintPure, Category="AR02 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllAR02GripSettings();
};
