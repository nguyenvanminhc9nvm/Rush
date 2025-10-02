#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterMontageSettings.h"
#include "CharacterSMG02MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG02MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 02 Montage Settings")
    static FCharacterMontageSettings GetCharacterSMG02MontageSettingsByName(ECharacterMontageName MontageName);

};
