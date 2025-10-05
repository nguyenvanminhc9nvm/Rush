#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterMontageSettings.h"
#include "CharacterHandgun03SkullsMontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun03SkullsMontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun03 Skulls Montage Settings")
    static FCharacterMontageSettings GetCharacterHandgun03SkullsMontageSettingsByName(ECharacterMontageName MontageName);

};
