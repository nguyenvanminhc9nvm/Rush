#include "CharacterGL01PoseSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterPoseName, FCharacterPoseSettings> GCharacterGL01PoseSettingsMap;

static void InitCharacterGL01PoseSettingsMap()
{
    if (GCharacterGL01PoseSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_FP_PCH_GL_01_Idle_Pose.A_FP_PCH_GL_01_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_TP_CH_GL_01_Lowered_Pose.A_TP_CH_GL_01_Lowered_Pose'")
    );
    GCharacterGL01PoseSettingsMap.Add(ECharacterPoseName::Idle, IdleSettings);

    // Idle-Walking
    FCharacterPoseSettings IdleWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_FP_PCH_GL_01_Idle_Pose.A_FP_PCH_GL_01_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_TP_CH_GL_01_Lowered_Pose.A_TP_CH_GL_01_Lowered_Pose'")
    );
    GCharacterGL01PoseSettingsMap.Add(ECharacterPoseName::Idle_Walking, IdleWalkingSettings);

    // Idle-Crouch
    FCharacterPoseSettings IdleCrouchSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_FP_PCH_GL_01_Idle_Pose.A_FP_PCH_GL_01_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_TP_CH_GL_01_Crouch_Pose.A_TP_CH_GL_01_Crouch_Pose'")
    );
    GCharacterGL01PoseSettingsMap.Add(ECharacterPoseName::Idle_Crouch, IdleCrouchSettings);

    // Aim
    FCharacterPoseSettings AimSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_FP_PCH_GL_01_Aim_Pose.A_FP_PCH_GL_01_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_TP_CH_GL_01_Aim_Pose.A_TP_CH_GL_01_Aim_Pose'")
    );
    GCharacterGL01PoseSettingsMap.Add(ECharacterPoseName::Aim, AimSettings);

    // Aim-Walking
    FCharacterPoseSettings AimWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_FP_PCH_GL_01_Aim_Pose.A_FP_PCH_GL_01_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_TP_CH_GL_01_Aim_Pose.A_TP_CH_GL_01_Aim_Pose'")
    );
    GCharacterGL01PoseSettingsMap.Add(ECharacterPoseName::Aim_Walking, AimWalkingSettings);

    // Aim-Crouch
    FCharacterPoseSettings AimCrouchSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_FP_PCH_GL_01_Aim_Pose.A_FP_PCH_GL_01_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_TP_CH_GL_01_Crouch_Aim_Pose.A_TP_CH_GL_01_Crouch_Aim_Pose'")
    );
    GCharacterGL01PoseSettingsMap.Add(ECharacterPoseName::Aim_Crouch, AimCrouchSettings);

    // Ready
    FCharacterPoseSettings ReadySettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_TP_CH_GL_01_Idle_Pose.A_TP_CH_GL_01_Idle_Pose'")
    );
    GCharacterGL01PoseSettingsMap.Add(ECharacterPoseName::Ready, ReadySettings);

    // Ready-Walking
    FCharacterPoseSettings ReadyWalkingSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_TP_CH_GL_01_Idle_Pose.A_TP_CH_GL_01_Idle_Pose'")
    );
    GCharacterGL01PoseSettingsMap.Add(ECharacterPoseName::Ready_Walking, ReadyWalkingSettings);

    // Ready-Crouch
    FCharacterPoseSettings ReadyCrouchSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Launchers/A_TP_CH_GL_01_Crouch_Idle_Pose.A_TP_CH_GL_01_Crouch_Idle_Pose'")
    );
    GCharacterGL01PoseSettingsMap.Add(ECharacterPoseName::Ready_Crouch, ReadyCrouchSettings);
}

FCharacterPoseSettings UCharacterGL01PoseSettingsLibrary::GetCharacterGL01PoseSettingsByName(ECharacterPoseName PoseName)
{
    InitCharacterGL01PoseSettingsMap();
    if (GCharacterGL01PoseSettingsMap.Contains(PoseName))
    {
        return GCharacterGL01PoseSettingsMap[PoseName];
    }
    return FCharacterPoseSettings(); // Return default settings if not found
}

TArray<FCharacterPoseSettings> UCharacterGL01PoseSettingsLibrary::GetAllCharacterGL01PoseSettings()
{
    InitCharacterGL01PoseSettingsMap();
    TArray<FCharacterPoseSettings> AllSettings;
    GCharacterGL01PoseSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
