#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterPoseSettings.h"
#include "CharacterHandgun04PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun04PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun04 Pose Settings")
    static FCharacterPoseSettings GetCharacterHandgun04PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character Handgun04 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterHandgun04PoseSettings();

};
