#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterSniper01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 01 Montage Settings")
    static FCharacterMontageSettings GetCharacterSniper01MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character Sniper 01 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterSniper01MontageSettings();

};
