#include "CharacterShotgun01PoseSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterPoseName, FCharacterPoseSettings> GCharacterShotgun01PoseSettingsMap;

static void InitCharacterShotgun01PoseSettingsMap()
{
    if (GCharacterShotgun01PoseSettingsMap.Num() > 0) return;

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
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Idle_Pose.A_FP_PCH_Shotgun_01_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Lowered_Pose.A_TP_CH_Shotgun_01_Lowered_Pose'")
    );
    GCharacterShotgun01PoseSettingsMap.Add(ECharacterPoseName::Idle, IdleSettings);

    // Idle-Walking
    FCharacterPoseSettings IdleWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Idle_Pose.A_FP_PCH_Shotgun_01_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Lowered_Pose.A_TP_CH_Shotgun_01_Lowered_Pose'")
    );
    GCharacterShotgun01PoseSettingsMap.Add(ECharacterPoseName::Idle_Walking, IdleWalkingSettings);

    // Idle-Crouch
    FCharacterPoseSettings IdleCrouchSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Idle_Pose.A_FP_PCH_Shotgun_01_Idle_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Crouch_Pose.A_TP_CH_Shotgun_01_Crouch_Pose'")
    );
    GCharacterShotgun01PoseSettingsMap.Add(ECharacterPoseName::Idle_Crouch, IdleCrouchSettings);

    // Aim
    FCharacterPoseSettings AimSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Aim_Pose.A_FP_PCH_Shotgun_01_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Aim_Pose.A_TP_CH_Shotgun_01_Aim_Pose'")
    );
    GCharacterShotgun01PoseSettingsMap.Add(ECharacterPoseName::Aim, AimSettings);

    // Aim-Walking
    FCharacterPoseSettings AimWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Aim_Pose.A_FP_PCH_Shotgun_01_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Aim_Pose.A_TP_CH_Shotgun_01_Aim_Pose'")
    );
    GCharacterShotgun01PoseSettingsMap.Add(ECharacterPoseName::Aim_Walking, AimWalkingSettings);

    // Aim-Crouch
    FCharacterPoseSettings AimCrouchSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Aim_Pose.A_FP_PCH_Shotgun_01_Aim_Pose'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Crouch_Aim_Pose.A_TP_CH_Shotgun_01_Crouch_Aim_Pose'")
    );
    GCharacterShotgun01PoseSettingsMap.Add(ECharacterPoseName::Aim_Crouch, AimCrouchSettings);

    // Ready
    FCharacterPoseSettings ReadySettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Idle_Pose.A_TP_CH_Shotgun_01_Idle_Pose'")
    );
    GCharacterShotgun01PoseSettingsMap.Add(ECharacterPoseName::Ready, ReadySettings);

    // Ready-Walking
    FCharacterPoseSettings ReadyWalkingSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Idle_Pose.A_TP_CH_Shotgun_01_Idle_Pose'")
    );
    GCharacterShotgun01PoseSettingsMap.Add(ECharacterPoseName::Ready_Walking, ReadyWalkingSettings);

    // Ready-Crouch
    FCharacterPoseSettings ReadyCrouchSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Crouch_Idle_Pose.A_TP_CH_Shotgun_01_Crouch_Idle_Pose'")
    );
    GCharacterShotgun01PoseSettingsMap.Add(ECharacterPoseName::Ready_Crouch, ReadyCrouchSettings);
}

FCharacterPoseSettings UCharacterShotgun01PoseSettingsLibrary::GetCharacterShotgun01PoseSettingsByName(ECharacterPoseName PoseName)
{
    InitCharacterShotgun01PoseSettingsMap();
    if (GCharacterShotgun01PoseSettingsMap.Contains(PoseName))
    {
        return GCharacterShotgun01PoseSettingsMap[PoseName];
    }
    return FCharacterPoseSettings(); // Return default settings if not found
}

TArray<FCharacterPoseSettings> UCharacterShotgun01PoseSettingsLibrary::GetAllCharacterShotgun01PoseSettings()
{
    InitCharacterShotgun01PoseSettingsMap();
    TArray<FCharacterPoseSettings> AllSettings;
    GCharacterShotgun01PoseSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
