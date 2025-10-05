#pragma once

#include "CoreMinimal.h"
#include "Rush/Weapon/Enum/EGripName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Struct/FGripSettingsEntry.h"
#include "Sniper02GripSettingsLibrary.generated.h"

UCLASS()
class RUSH_API USniper02GripSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Sniper02 Grip Settings")
    static FGripSettingsEntry GetSniper02GripSettingsByName(EGripName GripName);

    UFUNCTION(BlueprintCallable, Category="Sniper02 Grip Settings")
    static TArray<FGripSettingsEntry> GetAllSniper02GripSettings();
};
