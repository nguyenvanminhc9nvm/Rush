#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterBlendspaceSettings.h"
#include "CharacterHandgun03BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun03BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun03 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterHandgun03BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
