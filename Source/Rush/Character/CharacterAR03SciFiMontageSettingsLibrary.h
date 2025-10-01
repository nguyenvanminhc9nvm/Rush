#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterAR03SciFiMontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR03SciFiMontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR03 SciFi Montage Settings")
    static FCharacterMontageSettings GetCharacterAR03SciFiMontageSettingsByName(ECharacterMontageName MontageName);

};
