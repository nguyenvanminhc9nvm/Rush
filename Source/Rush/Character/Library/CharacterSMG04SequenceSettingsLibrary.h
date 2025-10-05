#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterSMG04SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG04SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 04 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSMG04SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
