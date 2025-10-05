#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterSMG02BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSMG02BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character SMG 02 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterSMG02BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
