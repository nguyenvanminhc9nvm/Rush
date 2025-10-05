#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterMontageSettings.h"
#include "CharacterSMG03MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG03MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 03 Montage Settings")
    static FCharacterMontageSettings GetCharacterSMG03MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character SMG 03 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterSMG03MontageSettings();

};
