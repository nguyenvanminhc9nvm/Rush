#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterPoseSettings.h"
#include "CharacterShotgun01PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterShotgun01PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Shotgun 01 Pose Settings")
    static FCharacterPoseSettings GetCharacterShotgun01PoseSettingsByName(ECharacterPoseName PoseName);

};
