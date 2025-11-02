#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterShotgun01SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterShotgun01SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Shotgun 01 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName SequenceName);

};
