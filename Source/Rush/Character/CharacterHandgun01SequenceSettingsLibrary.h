#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterSequenceSettings.h"
#include "CharacterHandgun01SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun01SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun01 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterHandgun01SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
