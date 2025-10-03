#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterBlendspaceSettings.h"
#include "CharacterSniper03BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper03BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 03 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterSniper03BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
