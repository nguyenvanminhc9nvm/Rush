#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterMontageSettings.h"
#include "CharacterSniper02MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper02MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 02 Montage Settings")
    static FCharacterMontageSettings GetCharacterSniper02MontageSettingsByName(ECharacterMontageName MontageName);

};
