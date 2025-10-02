#include "CharacterSMG04BlendspaceSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterBlendspaceName, FCharacterBlendspaceSettings> GCharacterSMG04BlendspaceSettingsMap;

static void InitCharacterSMG04BlendspaceSettingsMap()
{
    if (GCharacterSMG04BlendspaceSettingsMap.Num() > 0) return;

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
    GCharacterSMG04BlendspaceSettingsMap.Add(ECharacterBlendspaceName::Walking, WalkingSettings);

    // Leaning
    FCharacterBlendspaceSettings LeaningSettings = CreateBlendspaceSettings(
        TEXT("/Script/Engine.BlendSpace'/Game/Assets/Character/Blendspace/Common/BS_FP_PCH_Leaning.BS_FP_PCH_Leaning'")
    );
    GCharacterSMG04BlendspaceSettingsMap.Add(ECharacterBlendspaceName::Leaning, LeaningSettings);

    // Aim-Offset
    FCharacterBlendspaceSettings AimOffsetSettings = CreateBlendspaceSettings(
        TEXT("/Script/Engine.BlendSpace1D'/Game/Assets/Character/Blendspace/SMGs/BS_TP_CH_SMG_04_Look.BS_TP_CH_SMG_04_Look'")
    );
    GCharacterSMG04BlendspaceSettingsMap.Add(ECharacterBlendspaceName::Aim_Offset, AimOffsetSettings);
}

FCharacterBlendspaceSettings UCharacterSMG04BlendspaceSettingsLibrary::GetCharacterSMG04BlendspaceSettingsByName(ECharacterBlendspaceName BlendspaceName)
{
    InitCharacterSMG04BlendspaceSettingsMap();
    if (GCharacterSMG04BlendspaceSettingsMap.Contains(BlendspaceName))
    {
        return GCharacterSMG04BlendspaceSettingsMap[BlendspaceName];
    }
    return FCharacterBlendspaceSettings(); // Return default settings if not found
}
