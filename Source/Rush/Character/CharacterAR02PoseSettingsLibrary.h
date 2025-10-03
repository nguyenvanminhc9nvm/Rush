#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterPoseSettings.h"
#include "CharacterAR02PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR02PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR02 Pose Settings")
    static FCharacterPoseSettings GetCharacterAR02PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character AR02 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterAR02PoseSettings();

};
