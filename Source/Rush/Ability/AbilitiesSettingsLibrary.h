#pragma once

#include "CoreMinimal.h"
#include "Enum/EAbilityName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FAbilities.h"
#include "AbilitiesSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UAbilitiesSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Abilities Settings")
    static FAbilities GetAbilitiesByName(EAbilityName AbilityName);

};
