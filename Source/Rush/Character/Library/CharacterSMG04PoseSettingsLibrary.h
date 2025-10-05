#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterPoseSettings.h"
#include "CharacterSMG04PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG04PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 04 Pose Settings")
    static FCharacterPoseSettings GetCharacterSMG04PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character SMG 04 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterSMG04PoseSettings();

};
