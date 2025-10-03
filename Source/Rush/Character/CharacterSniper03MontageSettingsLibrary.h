#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterSniper03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 03 Montage Settings")
    static FCharacterMontageSettings GetCharacterSniper03MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character Sniper 03 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterSniper03MontageSettings();

};
