#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Rush/Character/Struct/FCharacterPoseSettings.h"
#include "CharacterSniper01PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper01PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 01 Pose Settings")
    static FCharacterPoseSettings GetCharacterSniper01PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character Sniper 01 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterSniper01PoseSettings();

};
