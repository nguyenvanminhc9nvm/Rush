#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterPoseName.h"
#include "Enum/ECharacterSequenceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterPoseSettings.h"
#include "Struct/FCharacterSequenceSettings.h"
#include "CharacterSMG05PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG05PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 05 Pose Settings")
    static FCharacterPoseSettings GetCharacterSMG05PoseSettingsByName(ECharacterSequenceName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character SMG 05 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterSMG05PoseSettings();

};
