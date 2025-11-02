#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterGL01SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterGL01SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character GL01 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterGL01SequenceSettingsByName(ECharacterPoseName SequenceName);

};
