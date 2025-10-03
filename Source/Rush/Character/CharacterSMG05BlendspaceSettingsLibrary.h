#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterBlendspaceSettings.h"
#include "CharacterSMG05BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG05BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 05 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterSMG05BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
