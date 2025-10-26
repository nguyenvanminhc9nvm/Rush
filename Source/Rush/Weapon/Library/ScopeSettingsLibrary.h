#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"
#include "Rush/Weapon/Struct/FScopeSettingsEntry.h"
#include "ScopeSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UScopeSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Scope Settings")
    static FScopeSettingsEntry GetScopeSettingsByName(EWeaponIconName ScopeName);

    UFUNCTION(BlueprintCallable, Category="Scope Settings")
    static TArray<FScopeSettingsEntry> GetAllScopeSettings();
};
