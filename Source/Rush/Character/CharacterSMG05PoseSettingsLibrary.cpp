#include "CharacterSMG05PoseSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Struct/FCharacterPoseSettings.h"

static TMap<ECharacterSequenceName, FCharacterPoseSettings> GCharacterSMG05PoseSettingsMap;

static void InitCharacterSMG05PoseSettingsMap()
{
    if (GCharacterSMG05PoseSettingsMap.Num() > 0) return;

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

    // Standing-Breathing
    FCharacterPoseSettings StandingBreathingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Idle.A_FP_PCH_Idle'"),
        TEXT("None")
    );
    GCharacterSMG05PoseSettingsMap.Add(ECharacterSequenceName::Standing_Breathing, StandingBreathingSettings);

    // Aiming-Walking
    FCharacterPoseSettings AimingWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Aim_Walk_F.A_FP_PCH_Aim_Walk_F'"),
        TEXT("None")
    );
    GCharacterSMG05PoseSettingsMap.Add(ECharacterSequenceName::Aiming_Walking, AimingWalkingSettings);

    // Aiming-Breathing
    FCharacterPoseSettings AimingBreathingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Aim_Idle.A_FP_PCH_Aim_Idle'"),
        TEXT("None")
    );
    GCharacterSMG05PoseSettingsMap.Add(ECharacterSequenceName::Aiming_Breathing, AimingBreathingSettings);

    // Turning
    FCharacterPoseSettings TurningSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_F.A_FP_PCH_Walk_F'"),
        TEXT("None")
    );
    GCharacterSMG05PoseSettingsMap.Add(ECharacterSequenceName::Turning, TurningSettings);

    // Jog
    FCharacterPoseSettings JogSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_05_Jog_F.A_TP_CH_SMG_05_Jog_F'")
    );
    GCharacterSMG05PoseSettingsMap.Add(ECharacterSequenceName::Jog, JogSettings);

    // Sprint
    FCharacterPoseSettings SprintSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Run_02.A_FP_PCH_Run_02'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_05_Sprint_F.A_TP_CH_SMG_05_Sprint_F'")
    );
    GCharacterSMG05PoseSettingsMap.Add(ECharacterSequenceName::Sprint, SprintSettings);

    // Sprint-Impulse
    FCharacterPoseSettings SprintImpulseSettings = CreatePoseSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_05_Sprint_Impulse_F.A_TP_CH_SMG_05_Sprint_Impulse_F'")
    );
    GCharacterSMG05PoseSettingsMap.Add(ECharacterSequenceName::Sprint_Impulse, SprintImpulseSettings);

    // Sprint-Tactical
    FCharacterPoseSettings SprintTacticalSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_05_Sprint_Tactical_F_Loop.A_FP_PCH_SMG_05_Sprint_Tactical_F_Loop'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_05_Sprint_Tactical_F_Loop.A_FP_PCH_SMG_05_Sprint_Tactical_F_Loop'")
    );
    GCharacterSMG05PoseSettingsMap.Add(ECharacterSequenceName::Sprint_Tactical, SprintTacticalSettings);

    // Crouching-Walking
    FCharacterPoseSettings CrouchingWalkingSettings = CreatePoseSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_Crouch.A_FP_PCH_Walk_Crouch'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_Crouch.A_FP_PCH_Walk_Crouch'")
    );
    GCharacterSMG05PoseSettingsMap.Add(ECharacterSequenceName::Crouching_Walking, CrouchingWalkingSettings);
}

FCharacterPoseSettings UCharacterSMG05PoseSettingsLibrary::GetCharacterSMG05PoseSettingsByName(ECharacterSequenceName PoseName)
{
    InitCharacterSMG05PoseSettingsMap();
    if (GCharacterSMG05PoseSettingsMap.Contains(PoseName))
    {
        return GCharacterSMG05PoseSettingsMap[PoseName];
    }
    return FCharacterPoseSettings(); // Return default settings if not found
}

TArray<FCharacterPoseSettings> UCharacterSMG05PoseSettingsLibrary::GetAllCharacterSMG05PoseSettings()
{
    InitCharacterSMG05PoseSettingsMap();
    TArray<FCharacterPoseSettings> AllSettings;
    GCharacterSMG05PoseSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
