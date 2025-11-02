#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterSMG01SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG01SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 01 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSMG01SequenceSettingsByName(ECharacterPoseName SequenceName);

};
