#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterHandgun02SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun02SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun02 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterHandgun02SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
