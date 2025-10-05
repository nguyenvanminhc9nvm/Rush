#include "CharacterSniper02PoseSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterPoseName, FCharacterPoseSettings> GCharacterSniper02PoseSettingsMap;

static void InitCharacterSniper02PoseSettingsMap()
{
    if (GCharacterSniper02PoseSettingsMap.Num() > 0) return;

    // Helper function to create pose settings
    auto CreatePoseSettings = [](const FString& FirstPersonPath, const FString& ThirdPersonPath) -> FCharacterPoseSettings
    {
        FCharacterPoseSettings Settings;
        if (FirstPersonPath != TEXT("None"))
        {
            Settings.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, *FirstPersonPath);
        }
        if (ThirdPersonPath != TEXT("None"))
        {
            Settings.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, *ThirdPersonPath);
        }
        return Settings;
    };

    // Idle
    FCharacterPoseSettings IdleSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_FP_PCH_Sniper_02_Idle_Pose.A_FP_PCH_Sniper_02_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Lowered_Pose_New.A_TP_CH_Sniper_02_Lowered_Pose_New'")
    );
    GCharacterSniper02PoseSettingsMap.Add(ECharacterPoseName::Idle, IdleSettings);

    // Idle-Walking
    FCharacterPoseSettings IdleWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_FP_PCH_Sniper_02_Idle_Pose.A_FP_PCH_Sniper_02_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Lowered_Pose_New.A_TP_CH_Sniper_02_Lowered_Pose_New'")
    );
    GCharacterSniper02PoseSettingsMap.Add(ECharacterPoseName::Idle_Walking, IdleWalkingSettings);

    // Idle-Crouch
    FCharacterPoseSettings IdleCrouchSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_FP_PCH_Sniper_02_Idle_Pose.A_FP_PCH_Sniper_02_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Crouch_Lowered_Pose.A_TP_CH_Sniper_02_Crouch_Lowered_Pose'")
    );
    GCharacterSniper02PoseSettingsMap.Add(ECharacterPoseName::Idle_Crouch, IdleCrouchSettings);

    // Aim
    FCharacterPoseSettings AimSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_FP_PCH_Sniper_02_Aim_Pose.A_FP_PCH_Sniper_02_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Aim_Pose.A_TP_CH_Sniper_02_Aim_Pose'")
    );
    GCharacterSniper02PoseSettingsMap.Add(ECharacterPoseName::Aim, AimSettings);

    // Aim-Walking
    FCharacterPoseSettings AimWalkingSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Aim_Pose.A_TP_CH_Sniper_02_Aim_Pose'")
    );
    GCharacterSniper02PoseSettingsMap.Add(ECharacterPoseName::Aim_Walking, AimWalkingSettings);

    // Aim-Crouch
    FCharacterPoseSettings AimCrouchSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Crouch_Aim_Pose.A_TP_CH_Sniper_02_Crouch_Aim_Pose'")
    );
    GCharacterSniper02PoseSettingsMap.Add(ECharacterPoseName::Aim_Crouch, AimCrouchSettings);

    // Ready
    FCharacterPoseSettings ReadySettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Idle_Pose.A_TP_CH_Sniper_02_Idle_Pose'")
    );
    GCharacterSniper02PoseSettingsMap.Add(ECharacterPoseName::Ready, ReadySettings);

    // Ready-Walking
    FCharacterPoseSettings ReadyWalkingSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Idle_Pose.A_TP_CH_Sniper_02_Idle_Pose'")
    );
    GCharacterSniper02PoseSettingsMap.Add(ECharacterPoseName::Ready_Walking, ReadyWalkingSettings);

    // Ready-Crouch
    FCharacterPoseSettings ReadyCrouchSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Crouch_Idle_Pose.A_TP_CH_Sniper_02_Crouch_Idle_Pose'")
    );
    GCharacterSniper02PoseSettingsMap.Add(ECharacterPoseName::Ready_Crouch, ReadyCrouchSettings);
}

FCharacterPoseSettings UCharacterSniper02PoseSettingsLibrary::GetCharacterSniper02PoseSettingsByName(ECharacterPoseName PoseName)
{
    InitCharacterSniper02PoseSettingsMap();
    if (GCharacterSniper02PoseSettingsMap.Contains(PoseName))
    {
        return GCharacterSniper02PoseSettingsMap[PoseName];
    }
    return FCharacterPoseSettings(); // Return default settings if not found
}

TArray<FCharacterPoseSettings> UCharacterSniper02PoseSettingsLibrary::GetAllCharacterSniper02PoseSettings()
{
    InitCharacterSniper02PoseSettingsMap();
    TArray<FCharacterPoseSettings> AllSettings;
    GCharacterSniper02PoseSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
