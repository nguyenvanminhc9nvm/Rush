#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "SMG02GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG02GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG02 Grip Settings")
    static FGripSettingsEntry GetSMG02GripSettingsByName(EWeaponIconName GripName);

    UFUNCTION(BlueprintCallable, Category="SMG02 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllSMG02GripSettings();
};
