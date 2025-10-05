#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterMontageSettings.h"
#include "CharacterAR01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR01 Montage Settings")
    static FCharacterMontageSettings GetCharacterAR01MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character AR01 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterAR01MontageSettings();
};
