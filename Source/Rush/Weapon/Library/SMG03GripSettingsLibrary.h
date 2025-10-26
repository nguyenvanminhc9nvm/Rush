#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "SMG03GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USMG03GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SMG03 Grip Settings")
    static FGripSettingsEntry GetSMG03GripSettingsByName(EWeaponIconName GripName);

    UFUNCTION(BlueprintCallable, Category="SMG03 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllSMG03GripSettings();
};
