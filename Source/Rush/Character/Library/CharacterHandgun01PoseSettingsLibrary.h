#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterPoseSettings.h"
#include "CharacterHandgun01PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun01PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun01 Pose Settings")
    static FCharacterPoseSettings GetCharacterHandgun01PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character Handgun01 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterHandgun01PoseSettings();

};
