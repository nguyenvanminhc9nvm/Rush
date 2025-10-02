#include "CharacterSniper01BlendspaceSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterBlendspaceName, FCharacterBlendspaceSettings> GCharacterSniper01BlendspaceSettingsMap;

static void InitCharacterSniper01BlendspaceSettingsMap()
{
    if (GCharacterSniper01BlendspaceSettingsMap.Num() > 0) return;

    // Helper function to create blendspace settings
    auto CreateBlendspaceSettings = [](const FString& BlendspacePath) -> FCharacterBlendspaceSettings
    {
        FCharacterBlendspaceSettings Settings;
        if (BlendspacePath != TEXT("None"))
        {
            // Try to load as BlendSpace first, then BlendSpace1D
            Settings.Blendspace = LoadObject<UBlendSpace>(nullptr, *BlendspacePath);
            if (!Settings.Blendspace)
            {
                // If BlendSpace fails, try BlendSpace1D
                UBlendSpace1D* BlendSpace1D = LoadObject<UBlendSpace1D>(nullptr, *BlendspacePath);
                if (BlendSpace1D)
                {
                    // Cast BlendSpace1D to BlendSpace (they share the same base class)
                    Settings.Blendspace = Cast<UBlendSpace>(BlendSpace1D);
                }
            }
        }
        return Settings;
    };

    // Walking
    FCharacterBlendspaceSettings WalkingSettings = CreateBlendspaceSettings(
        TEXT("/Script/Engine.BlendSpace'/Game/Assets/Character/Blendspace/Common/BS_FP_PCH_Walking.BS_FP_PCH_Walking'")
    );
    GCharacterSniper01BlendspaceSettingsMap.Add(ECharacterBlendspaceName::Walking, WalkingSettings);

    // Leaning
    FCharacterBlendspaceSettings LeaningSettings = CreateBlendspaceSettings(
        TEXT("/Script/Engine.BlendSpace'/Game/Assets/Character/Blendspace/Common/BS_FP_PCH_Leaning.BS_FP_PCH_Leaning'")
    );
    GCharacterSniper01BlendspaceSettingsMap.Add(ECharacterBlendspaceName::Leaning, LeaningSettings);

    // Aim-Offset
    FCharacterBlendspaceSettings AimOffsetSettings = CreateBlendspaceSettings(
        TEXT("/Script/Engine.BlendSpace1D'/Game/Assets/Character/Blendspace/Snipers/BS_TP_CH_Sniper_01_Look.BS_TP_CH_Sniper_01_Look'")
    );
    GCharacterSniper01BlendspaceSettingsMap.Add(ECharacterBlendspaceName::Aim_Offset, AimOffsetSettings);
}

FCharacterBlendspaceSettings UCharacterSniper01BlendspaceSettingsLibrary::GetCharacterSniper01BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName)
{
    InitCharacterSniper01BlendspaceSettingsMap();
    if (GCharacterSniper01BlendspaceSettingsMap.Contains(BlendspaceName))
    {
        return GCharacterSniper01BlendspaceSettingsMap[BlendspaceName];
    }
    return FCharacterBlendspaceSettings(); // Return default settings if not found
}
