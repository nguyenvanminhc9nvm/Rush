#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterGL01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterGL01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character GL01 Montage Settings")
    static FCharacterMontageSettings GetCharacterGL01MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character GL01 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterGL01MontageSettings();

};
