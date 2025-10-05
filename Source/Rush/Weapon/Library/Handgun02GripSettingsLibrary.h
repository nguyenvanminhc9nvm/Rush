#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "Handgun02GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UHandgun02GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Handgun02 Grip Settings")
    static FGripSettingsEntry GetHandgun02GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="Handgun02 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllHandgun02GripSettings();
};
