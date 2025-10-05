#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterAR03SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR03SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR03 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterAR03SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
