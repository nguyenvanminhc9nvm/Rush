#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterMontageSettings.h"
#include "CharacterSniper03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 03 Montage Settings")
    static FCharacterMontageSettings GetCharacterSniper03MontageSettingsByName(ECharacterMontageName MontageName);

};
