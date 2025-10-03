#include "CharacterAR01PoseSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterPoseName, FCharacterPoseSettings> GCharacterAR01PoseSettingsMap;

static void InitCharacterAR01PoseSettingsMap()
{
    if (GCharacterAR01PoseSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_FP_PCH_AR_01_Idle_Pose.A_FP_PCH_AR_01_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Lowered_Pose.A_TP_CH_AR_01_Lowered_Pose'")
    );
    GCharacterAR01PoseSettingsMap.Add(ECharacterPoseName::Idle, IdleSettings);

    // Idle-Walking
    FCharacterPoseSettings IdleWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_FP_PCH_AR_01_Idle_Pose.A_FP_PCH_AR_01_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Lowered_Pose.A_TP_CH_AR_01_Lowered_Pose'")
    );
    GCharacterAR01PoseSettingsMap.Add(ECharacterPoseName::Idle_Walking, IdleWalkingSettings);

    // Idle-Crouch
    FCharacterPoseSettings IdleCrouchSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_FP_PCH_AR_01_Idle_Pose.A_FP_PCH_AR_01_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Lowered_Pose.A_TP_CH_AR_01_Lowered_Pose'")
    );
    GCharacterAR01PoseSettingsMap.Add(ECharacterPoseName::Idle_Crouch, IdleCrouchSettings);

    // Aim
    FCharacterPoseSettings AimSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_FP_PCH_AR_01_Aim_Pose.A_FP_PCH_AR_01_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Aim_Pose.A_TP_CH_AR_01_Aim_Pose'")
    );
    GCharacterAR01PoseSettingsMap.Add(ECharacterPoseName::Aim, AimSettings);

    // Aim-Walking
    FCharacterPoseSettings AimWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_FP_PCH_AR_01_Aim_Pose.A_FP_PCH_AR_01_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Aim_Pose.A_TP_CH_AR_01_Aim_Pose'")
    );
    GCharacterAR01PoseSettingsMap.Add(ECharacterPoseName::Aim_Walking, AimWalkingSettings);

    // Aim-Crouch
    FCharacterPoseSettings AimCrouchSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_FP_PCH_AR_01_Aim_Pose.A_FP_PCH_AR_01_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Aim_Pose.A_TP_CH_AR_01_Aim_Pose'")
    );
    GCharacterAR01PoseSettingsMap.Add(ECharacterPoseName::Aim_Crouch, AimCrouchSettings);

    // Ready
    FCharacterPoseSettings ReadySettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Idle_Pose.A_TP_CH_AR_01_Idle_Pose'")
    );
    GCharacterAR01PoseSettingsMap.Add(ECharacterPoseName::Ready, ReadySettings);

    // Ready-Walking
    FCharacterPoseSettings ReadyWalkingSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Idle_Pose.A_TP_CH_AR_01_Idle_Pose'")
    );
    GCharacterAR01PoseSettingsMap.Add(ECharacterPoseName::Ready_Walking, ReadyWalkingSettings);

    // Ready-Crouch
    FCharacterPoseSettings ReadyCrouchSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Crouch_Idle_Pose.A_TP_CH_AR_01_Crouch_Idle_Pose'")
    );
    GCharacterAR01PoseSettingsMap.Add(ECharacterPoseName::Ready_Crouch, ReadyCrouchSettings);
}

FCharacterPoseSettings UCharacterAR01PoseSettingsLibrary::GetCharacterAR01PoseSettingsByName(ECharacterPoseName PoseName)
{
    InitCharacterAR01PoseSettingsMap();
    if (GCharacterAR01PoseSettingsMap.Contains(PoseName))
    {
        return GCharacterAR01PoseSettingsMap[PoseName];
    }
    return FCharacterPoseSettings(); // Return default settings if not found
}

TArray<FCharacterPoseSettings> UCharacterAR01PoseSettingsLibrary::GetAllCharacterAR01PoseSettings()
{
        InitCharacterAR01PoseSettingsMap();
    TArray<FCharacterPoseSettings> AllSettings;
    GCharacterAR01PoseSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
