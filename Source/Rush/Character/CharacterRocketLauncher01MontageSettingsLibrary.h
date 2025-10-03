#pragma once

#include "CoreMinimal.h"
#include "Enum/ECharacterMontageName.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Struct/FCharacterMontageSettings.h"
#include "CharacterRocketLauncher01MontageSettingsLibrary.generated.h"

UCLASS()
class RUSH_API UCharacterRocketLauncher01MontageSettingsLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Character Rocket Launcher 01 Montage Settings")
    static FCharacterMontageSettings GetCharacterRocketLauncher01MontageSettingsByName(ECharacterMontageName MontageName);

    UFUNCTION(BlueprintCallable, Category="Character Rocket Launcher 01 Montage Settings")
    static TArray<FCharacterMontageSettings> GetAllCharacterRocketLauncher01MontageSettings();

};
