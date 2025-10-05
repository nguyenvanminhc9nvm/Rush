#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterAR03BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterAR03BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character AR03 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterAR03BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
