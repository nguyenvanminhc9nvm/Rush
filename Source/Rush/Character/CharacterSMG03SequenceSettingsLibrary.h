#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterSequenceSettings.h"
#include "CharacterSMG03SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG03SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 03 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSMG03SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
