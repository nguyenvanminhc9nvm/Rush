#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterBlendspaceSettings.h"
#include "CharacterGL01BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterGL01BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character GL01 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterGL01BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
