#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterMontageSettings.h"
#include "CharacterSMG03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 03 Montage Settings")
    static FCharacterMontageSettings GetCharacterSMG03MontageSettingsByName(ECharacterMontageName MontageName);

};
