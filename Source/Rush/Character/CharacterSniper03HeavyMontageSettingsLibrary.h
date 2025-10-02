#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterMontageSettings.h"
#include "CharacterSniper03HeavyMontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper03HeavyMontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 03 Heavy Montage Settings")
    static FCharacterMontageSettings GetCharacterSniper03HeavyMontageSettingsByName(ECharacterMontageName MontageName);

};
