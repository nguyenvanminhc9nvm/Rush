#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterPoseSettings.h"
#include "CharacterSniper02PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper02PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 02 Pose Settings")
    static FCharacterPoseSettings GetCharacterSniper02PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character Sniper 02 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterSniper02PoseSettings();

};
