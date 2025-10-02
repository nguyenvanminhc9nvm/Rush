#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterSniper01SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper01SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 01 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSniper01SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
