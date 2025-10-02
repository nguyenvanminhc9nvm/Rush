#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterMontageSettings.h"
#include "CharacterShotgun01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterShotgun01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Shotgun 01 Montage Settings")
    static FCharacterMontageSettings GetCharacterShotgun01MontageSettingsByName(ECharacterMontageName MontageName);

};
