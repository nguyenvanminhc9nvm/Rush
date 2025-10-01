#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterSequenceSettings.h"
#include "CharacterAR01SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR01SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSequenceSettingsByName(ECharacterSequenceName SequenceName);

};
