#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterMontageSettings.h"
#include "CharacterAR02MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR02MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR02 Montage Settings")
    static FCharacterMontageSettings GetCharacterAR02MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character AR02 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterAR02MontageSettings();

};
