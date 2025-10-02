#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterSMG04BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG04BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 04 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterSMG04BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
