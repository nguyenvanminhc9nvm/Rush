#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterHandgun02BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun02BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun02 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterHandgun02BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
