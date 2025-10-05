#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterPoseSettings.h"
#include "CharacterSniper03PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper03PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 03 Pose Settings")
    static FCharacterPoseSettings GetCharacterSniper03PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character Sniper 03 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterSniper03PoseSettings();

};
