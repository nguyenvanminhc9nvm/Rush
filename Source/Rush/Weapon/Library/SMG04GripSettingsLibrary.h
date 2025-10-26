#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "SMG04GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG04GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG04 Grip Settings")
    static FGripSettingsEntry GetSMG04GripSettingsByName(EWeaponIconName GripName);

    UFUNCTION(BlueprintCallable, Category="SMG04 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllSMG04GripSettings();
};
