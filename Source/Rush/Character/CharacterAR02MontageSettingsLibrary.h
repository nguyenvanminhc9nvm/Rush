#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterAR02MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR02MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR02 Montage Settings")
    static FCharacterMontageSettings GetCharacterAR02MontageSettingsByName(ECharacterMontageName MontageName);

};
