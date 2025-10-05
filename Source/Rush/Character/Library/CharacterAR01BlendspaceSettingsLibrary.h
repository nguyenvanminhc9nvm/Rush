#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterAR01BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR01BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR01 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterAR01BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
