#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "Handgun04GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun04GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun04 Grip Settings")
    static FGripSettingsEntry GetHandgun04GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="Handgun04 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllHandgun04GripSettings();
};
