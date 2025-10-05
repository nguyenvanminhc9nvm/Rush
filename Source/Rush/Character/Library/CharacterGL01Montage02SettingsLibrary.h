#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterMontageSettings.h"
#include "CharacterGL01Montage02SettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterGL01Montage02SettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character GL01 Montage02 Settings")
    static FCharacterMontageSettings GetCharacterGL01Montage02SettingsByName(ECharacterMontageName MontageName);

};
