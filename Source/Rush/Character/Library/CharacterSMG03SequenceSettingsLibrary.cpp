#include "CharacterSMG03SequenceSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterPoseName, FCharacterSequenceSettings> GCharacterSMG03SequenceSettingsMap;

static void InitCharacterSMG03SequenceSettingsMap()
{
    if (GCharacterSMG03SequenceSettingsMap.Num() > 0) return;

    // Helper function to create sequence settings
    auto CreateSequenceSettings = [](const FString& FirstPersonPath, const FString& ThirdPersonPath) -> FCharacterSequenceSettings
    {
        FCharacterSequenceSettings Settings;
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
    FCharacterSequenceSettings StandingBreathingSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Idle.A_FP_PCH_Idle'"),
        TEXT("None")
    );
    GCharacterSMG03SequenceSettingsMap.Add(ECharacterPoseName::Standing_Breathing, StandingBreathingSettings);

    // Aiming-Walking
    FCharacterSequenceSettings AimingWalkingSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Aim_Walk_F.A_FP_PCH_Aim_Walk_F'"),
        TEXT("None")
    );
    GCharacterSMG03SequenceSettingsMap.Add(ECharacterPoseName::Aiming_Walking, AimingWalkingSettings);

    // Aiming-Breathing
    FCharacterSequenceSettings AimingBreathingSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Aim_Idle.A_FP_PCH_Aim_Idle'"),
        TEXT("None")
    );
    GCharacterSMG03SequenceSettingsMap.Add(ECharacterPoseName::Aiming_Breathing, AimingBreathingSettings);

    // Turning
    FCharacterSequenceSettings TurningSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_F.A_FP_PCH_Walk_F'"),
        TEXT("None")
    );
    GCharacterSMG03SequenceSettingsMap.Add(ECharacterPoseName::Turning, TurningSettings);

    // Jog
    FCharacterSequenceSettings JogSettings = CreateSequenceSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_03_Jog_F.A_TP_CH_SMG_03_Jog_F'")
    );
    GCharacterSMG03SequenceSettingsMap.Add(ECharacterPoseName::Jog, JogSettings);

    // Sprint
    FCharacterSequenceSettings SprintSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Run_02.A_FP_PCH_Run_02'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_03_Sprint_F.A_TP_CH_SMG_03_Sprint_F'")
    );
    GCharacterSMG03SequenceSettingsMap.Add(ECharacterPoseName::Sprint, SprintSettings);

    // Sprint-Impulse
    FCharacterSequenceSettings SprintImpulseSettings = CreateSequenceSettings(
        TEXT("None"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_03_Sprint_Impulse_F.A_TP_CH_SMG_03_Sprint_Impulse_F'")
    );
    GCharacterSMG03SequenceSettingsMap.Add(ECharacterPoseName::Sprint_Impulse, SprintImpulseSettings);

    // Sprint-Tactical
    FCharacterSequenceSettings SprintTacticalSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_03_Sprint_Tactical_F_Loop.A_FP_PCH_SMG_03_Sprint_Tactical_F_Loop'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_03_Sprint_Tactical_F_Loop.A_FP_PCH_SMG_03_Sprint_Tactical_F_Loop'")
    );
    GCharacterSMG03SequenceSettingsMap.Add(ECharacterPoseName::Sprint_Tactical, SprintTacticalSettings);

    // Crouching-Walking
    FCharacterSequenceSettings CrouchingWalkingSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_Crouch.A_FP_PCH_Walk_Crouch'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_Crouch.A_FP_PCH_Walk_Crouch'")
    );
    GCharacterSMG03SequenceSettingsMap.Add(ECharacterPoseName::Crouching_Walking, CrouchingWalkingSettings);
}

FCharacterSequenceSettings UCharacterSMG03SequenceSettingsLibrary::GetCharacterSMG03SequenceSettingsByName(ECharacterPoseName SequenceName)
{
    InitCharacterSMG03SequenceSettingsMap();
    if (GCharacterSMG03SequenceSettingsMap.Contains(SequenceName))
    {
        return GCharacterSMG03SequenceSettingsMap[SequenceName];
    }
    return FCharacterSequenceSettings(); // Return default settings if not found
}
