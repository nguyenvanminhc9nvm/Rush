#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterPoseSettings.h"
#include "CharacterAR03PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR03PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR03 Pose Settings")
    static FCharacterPoseSettings GetCharacterAR03PoseSettingsByName(ECharacterPoseName PoseName);

};
