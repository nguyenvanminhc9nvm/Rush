#pragma once

#include "CoreMinimal.h"
#include "Character/Enum/ECharacterBlendspaceName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Character/Struct/FCharacterBlendspaceSettings.h"
#include "CharacterShotgun01BlendspaceSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterShotgun01BlendspaceSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Shotgun 01 Blendspace Settings")
    static FCharacterBlendspaceSettings GetCharacterShotgun01BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName);

};
