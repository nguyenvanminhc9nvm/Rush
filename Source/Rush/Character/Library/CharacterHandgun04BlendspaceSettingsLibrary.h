#pragma once

#include "CoreMinimal.h"
#include "Rush/Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rush/Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterHandgun04BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterHandgun04BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Handgun04 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterHandgun04BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
