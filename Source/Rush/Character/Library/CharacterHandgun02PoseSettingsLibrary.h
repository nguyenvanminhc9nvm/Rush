#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterPoseName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterPoseSettings.h"
#include "CharacterHandgun02PoseSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun02PoseSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun02 Pose Settings")
    static FCharacterPoseSettings GetCharacterHandgun02PoseSettingsByName(ECharacterPoseName PoseName);

    UFUNCTION(BlueprintCallable, Category="Character Handgun02 Pose Settings")
    static TArray<FCharacterPoseSettings> GetAllCharacterHandgun02PoseSettings();

};
