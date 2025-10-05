#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterSMG01SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG01SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 01 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSMG01SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
