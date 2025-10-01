#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterHandgun01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun01 Montage Settings")
    static FCharacterMontageSettings GetCharacterHandgun01MontageSettingsByName(ECharacterMontageName MontageName);

};
