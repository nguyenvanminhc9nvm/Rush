#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterPoseSettings.h"
#include "CharacterSMG02PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG02PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 02 Pose Settings")
    static FCharacterPoseSettings GetCharacterSMG02PoseSettingsByName(ECharacterPoseName PoseName);

};
