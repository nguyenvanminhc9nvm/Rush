#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterPoseSettings.h"
#include "CharacterGL01PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterGL01PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character GL01 Pose Settings")
    static FCharacterPoseSettings GetCharacterGL01PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character GL01 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterGL01PoseSettings();

};
