#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterPoseSettings.h"
#include "CharacterShotgun01PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterShotgun01PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Shotgun 01 Pose Settings")
    static FCharacterPoseSettings GetCharacterShotgun01PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character Shotgun 01 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterShotgun01PoseSettings();

};
