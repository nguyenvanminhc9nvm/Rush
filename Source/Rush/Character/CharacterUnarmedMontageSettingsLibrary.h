#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterUnarmedMontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterUnarmedMontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Unarmed Montage Settings")
    static FCharacterMontageSettings GetCharacterUnarmedMontageSettingsByName(ECharacterMontageName MontageName);

};
