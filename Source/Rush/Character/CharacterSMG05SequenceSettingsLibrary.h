#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterSMG05SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG05SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 05 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSMG05SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
