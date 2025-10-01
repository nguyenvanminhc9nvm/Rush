#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterBlendspaceSettings.h"
#include "CharacterHandgun01BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun01BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun01 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterHandgun01BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
