#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterAR02SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR02SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR02 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterAR02SequenceSettingsByName(ECharacterPoseName SequenceName);

};
