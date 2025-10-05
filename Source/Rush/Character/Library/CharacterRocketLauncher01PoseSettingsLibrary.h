#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterPoseSettings.h"
#include "CharacterRocketLauncher01PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterRocketLauncher01PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Rocket Launcher 01 Pose Settings")
    static FCharacterPoseSettings GetCharacterRocketLauncher01PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character Rocket Launcher 01 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterRocketLauncher01PoseSettings();

};
