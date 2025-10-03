#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterBlendspaceSettings.h"
#include "CharacterSniper02BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper02BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 02 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterSniper02BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
