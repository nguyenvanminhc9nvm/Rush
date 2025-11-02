#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterSniper02SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper02SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 02 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSniper02SequenceSettingsByName(ECharacterPoseName SequenceName);

};
