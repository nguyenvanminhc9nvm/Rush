#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "SMG05GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG05GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG05 Grip Settings")
    static FGripSettingsEntry GetSMG05GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="SMG05 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllSMG05GripSettings();
};
