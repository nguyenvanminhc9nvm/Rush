#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterHandgun02MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun02MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun02 Montage Settings")
    static FCharacterMontageSettings GetCharacterHandgun02MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character Handgun02 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterHandgun02MontageSettings();

};
