#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterHandgun03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun03 Montage Settings")
    static FCharacterMontageSettings GetCharacterHandgun03MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character Handgun03 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterHandgun03MontageSettings();

};
