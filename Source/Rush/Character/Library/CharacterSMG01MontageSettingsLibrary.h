#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterMontageSettings.h"
#include "CharacterSMG01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 01 Montage Settings")
    static FCharacterMontageSettings GetCharacterSMG01MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character SMG 01 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterSMG01MontageSettings();

};
