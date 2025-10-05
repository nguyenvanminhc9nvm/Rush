#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterAR02BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR02BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR02 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterAR02BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
