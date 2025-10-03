#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterPoseSettings.h"
#include "CharacterHandgun03PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun03PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun03 Pose Settings")
    static FCharacterPoseSettings GetCharacterHandgun03PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character Handgun03 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterHandgun03PoseSettings();

};
