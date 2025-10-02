#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterPoseSettings.h"
#include "CharacterSMG01PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG01PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 01 Pose Settings")
    static FCharacterPoseSettings GetCharacterSMG01PoseSettingsByName(ECharacterPoseName PoseName);

};
