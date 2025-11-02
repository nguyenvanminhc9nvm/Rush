#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterSniper01SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper01SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 01 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSniper01SequenceSettingsByName(ECharacterPoseName SequenceName);

};
