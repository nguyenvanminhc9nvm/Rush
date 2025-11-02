#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterAR01SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR01SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sequence Settings")
    static FCharacterSequenceSettings GetCharacterSequenceSettingsByName(ECharacterPoseName SequenceName);

};
