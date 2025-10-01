#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterAR03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR03 Montage Settings")
    static FCharacterMontageSettings GetCharacterAR03MontageSettingsByName(ECharacterMontageName MontageName);

};
