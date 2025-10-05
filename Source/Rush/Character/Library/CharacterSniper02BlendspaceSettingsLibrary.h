#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Enum/ECharacterBlendspaceName.h"
#include "Rush/Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterSniper02BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterSniper02BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Sniper 02 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterSniper02BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
