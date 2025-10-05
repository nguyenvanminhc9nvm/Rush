#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterRL01BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterRL01BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character RL01 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterRL01BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
