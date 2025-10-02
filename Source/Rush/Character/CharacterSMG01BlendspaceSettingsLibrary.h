#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterSMG01BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG01BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 01 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterSMG01BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
