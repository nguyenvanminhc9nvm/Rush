#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterMontageSettings.h"
#include "CharacterHandgun04MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun04MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun04 Montage Settings")
    static FCharacterMontageSettings GetCharacterHandgun04MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character Handgun04 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterHandgun04MontageSettings();

};
