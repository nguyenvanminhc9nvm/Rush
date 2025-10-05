#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterMontageSettings.h"
#include "CharacterSMG05MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG05MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 05 Montage Settings")
    static FCharacterMontageSettings GetCharacterSMG05MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character SMG 05 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterSMG05MontageSettings();

};
