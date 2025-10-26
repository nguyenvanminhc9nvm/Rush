#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "Handgun03GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun03GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun03 Grip Settings")
    static FGripSettingsEntry GetHandgun03GripSettingsByName(EWeaponIconName GripName);

    UFUNCTION(BlueprintCallable, Category="Handgun03 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllHandgun03GripSettings();
};
