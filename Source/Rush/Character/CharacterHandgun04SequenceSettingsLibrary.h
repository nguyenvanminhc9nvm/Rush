#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterSequenceSettings.h"
#include "CharacterHandgun04SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun04SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun04 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterHandgun04SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
