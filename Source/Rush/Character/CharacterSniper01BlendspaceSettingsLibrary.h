#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterSniper01BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper01BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 01 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterSniper01BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
