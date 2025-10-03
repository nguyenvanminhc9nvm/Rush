#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Enum/ECharacterPoseName.h"
#include "Struct/FCharacterPoseSettings.h"
#include "CharacterSMG03PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG03PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 03 Pose Settings")
    static FCharacterPoseSettings GetCharacterSMG03PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character SMG 03 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterSMG03PoseSettings();

};
