#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterHandgun04SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun04SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun04 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterHandgun04SequenceSettingsByName(ECharacterPoseName SequenceName);

};
