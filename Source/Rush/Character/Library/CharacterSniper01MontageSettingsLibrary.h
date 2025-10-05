#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Rush/Character/Struct/FCharacterMontageSettings.h"
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
