#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterPoseSettings.h"
#include "CharacterAR01PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR01PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR01 Pose Settings")
    static FCharacterPoseSettings GetCharacterAR01PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character AR01 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterAR01PoseSettings();
};
