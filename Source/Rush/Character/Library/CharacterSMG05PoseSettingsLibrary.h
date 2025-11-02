#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterPoseSettings.h"
#include "CharacterSMG05PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG05PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 05 Pose Settings")
    static FCharacterPoseSettings GetCharacterSMG05PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character SMG 05 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterSMG05PoseSettings();

};
