#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "SMG01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG01 Grip Settings")
    static FGripSettingsEntry GetSMG01GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="SMG01 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllSMG01GripSettings();
};
