#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterMontageSettings.h"
#include "CharacterSMG04MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG04MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 04 Montage Settings")
    static FCharacterMontageSettings GetCharacterSMG04MontageSettingsByName(ECharacterMontageName MontageName);

};
