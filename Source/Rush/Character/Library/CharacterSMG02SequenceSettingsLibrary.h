#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterSMG02SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG02SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 02 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSMG02SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
