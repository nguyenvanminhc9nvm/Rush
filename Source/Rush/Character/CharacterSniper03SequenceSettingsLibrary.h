#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterSequenceSettings.h"
#include "CharacterSniper03SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper03SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 03 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSniper03SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
