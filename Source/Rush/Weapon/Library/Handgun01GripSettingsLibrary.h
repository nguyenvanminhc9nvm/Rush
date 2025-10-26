#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "Handgun01GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun01GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun01 Grip Settings")
    static FGripSettingsEntry GetHandgun01GripSettingsByName(EWeaponIconName GripName);

    UFUNCTION(BlueprintCallable, Category="Handgun01 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllHandgun01GripSettings();
};
