#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterSequenceSettings.h"
#include "CharacterRocketLauncher01SequenceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterRocketLauncher01SequenceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Rocket Launcher 01 Sequence Settings")
    static FCharacterSequenceSettings GetCharacterRocketLauncher01SequenceSettingsByName(ECharacterSequenceName SequenceName);

};
