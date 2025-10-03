#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterBlendspaceSettings.h"
#include "CharacterSMG03BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG03BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 03 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterSMG03BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
