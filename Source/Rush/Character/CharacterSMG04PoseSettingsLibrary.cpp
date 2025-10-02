#include "CharacterSMG04PoseSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterPoseName, FCharacterPoseSettings> GCharacterSMG04PoseSettingsMap;

static void InitCharacterSMG04PoseSettingsMap()
{
    if (GCharacterSMG04PoseSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_04_Idle_Pose.A_FP_PCH_SMG_04_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Lowered_Pose.A_TP_CH_SMG_04_Lowered_Pose'")
    );
    GCharacterSMG04PoseSettingsMap.Add(ECharacterPoseName::Idle, IdleSettings);

    // Idle-Walking
    FCharacterPoseSettings IdleWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_04_Idle_Pose.A_FP_PCH_SMG_04_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Lowered_Pose.A_TP_CH_SMG_04_Lowered_Pose'")
    );
    GCharacterSMG04PoseSettingsMap.Add(ECharacterPoseName::Idle_Walking, IdleWalkingSettings);

    // Idle-Crouch
    FCharacterPoseSettings IdleCrouchSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_04_Idle_Pose.A_FP_PCH_SMG_04_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Crouch_Pose.A_TP_CH_SMG_04_Crouch_Pose'")
    );
    GCharacterSMG04PoseSettingsMap.Add(ECharacterPoseName::Idle_Crouch, IdleCrouchSettings);

    // Aim
    FCharacterPoseSettings AimSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_04_Aim_Pose.A_FP_PCH_SMG_04_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Aim_Pose.A_TP_CH_SMG_04_Aim_Pose'")
    );
    GCharacterSMG04PoseSettingsMap.Add(ECharacterPoseName::Aim, AimSettings);

    // Aim-Walking
    FCharacterPoseSettings AimWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_04_Aim_Pose.A_FP_PCH_SMG_04_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Aim_Pose.A_TP_CH_SMG_04_Aim_Pose'")
    );
    GCharacterSMG04PoseSettingsMap.Add(ECharacterPoseName::Aim_Walking, AimWalkingSettings);

    // Aim-Crouch
    FCharacterPoseSettings AimCrouchSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_04_Aim_Pose.A_FP_PCH_SMG_04_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Crouch_Aim_Pose.A_TP_CH_SMG_04_Crouch_Aim_Pose'")
    );
    GCharacterSMG04PoseSettingsMap.Add(ECharacterPoseName::Aim_Crouch, AimCrouchSettings);

    // Ready
    FCharacterPoseSettings ReadySettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Idle_Pose.A_TP_CH_SMG_04_Idle_Pose'")
    );
    GCharacterSMG04PoseSettingsMap.Add(ECharacterPoseName::Ready, ReadySettings);

    // Ready-Walking
    FCharacterPoseSettings ReadyWalkingSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Idle_Pose.A_TP_CH_SMG_04_Idle_Pose'")
    );
    GCharacterSMG04PoseSettingsMap.Add(ECharacterPoseName::Ready_Walking, ReadyWalkingSettings);

    // Ready-Crouch
    FCharacterPoseSettings ReadyCrouchSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Crouch_Idle_Pose.A_TP_CH_SMG_04_Crouch_Idle_Pose'")
    );
    GCharacterSMG04PoseSettingsMap.Add(ECharacterPoseName::Ready_Crouch, ReadyCrouchSettings);
}

FCharacterPoseSettings UCharacterSMG04PoseSettingsLibrary::GetCharacterSMG04PoseSettingsByName(ECharacterPoseName PoseName)
{
    InitCharacterSMG04PoseSettingsMap();
    if (GCharacterSMG04PoseSettingsMap.Contains(PoseName))
    {
        return GCharacterSMG04PoseSettingsMap[PoseName];
    }
    return FCharacterPoseSettings(); // Return default settings if not found
}
