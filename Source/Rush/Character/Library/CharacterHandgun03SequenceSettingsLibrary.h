#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterHandgun03SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun03SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun03 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterHandgun03SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
