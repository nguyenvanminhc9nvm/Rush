#include "CharacterHandgun02SequenceSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterPoseName, FCharacterSequenceSettings> GCharacterHandgun02SequenceSettingsMap;

static void InitCharacterHandgun02SequenceSettingsMap()
{
    if (GCharacterHandgun02SequenceSettingsMap.Num() > 0) return;

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
    GCharacterHandgun02SequenceSettingsMap.Add(ECharacterPoseName::Standing_Breathing, StandingBreathingSettings);

    // Aiming-Walking
    FCharacterSequenceSettings AimingWalkingSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Aim_Walk_F.A_FP_PCH_Aim_Walk_F'"),
        TEXT("None")
    );
    GCharacterHandgun02SequenceSettingsMap.Add(ECharacterPoseName::Aiming_Walking, AimingWalkingSettings);

    // Aiming-Breathing
    FCharacterSequenceSettings AimingBreathingSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Aim_Idle.A_FP_PCH_Aim_Idle'"),
        TEXT("None")
    );
    GCharacterHandgun02SequenceSettingsMap.Add(ECharacterPoseName::Aiming_Breathing, AimingBreathingSettings);

    // Turning
    FCharacterSequenceSettings TurningSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_F.A_FP_PCH_Walk_F'"),
        TEXT("None")
    );
    GCharacterHandgun02SequenceSettingsMap.Add(ECharacterPoseName::Turning, TurningSettings);

    // Jog
    FCharacterSequenceSettings JogSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Run_01.A_FP_PCH_Handgun_Run_01'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Handguns/A_TP_CH_Handgun_Jog_F.A_TP_CH_Handgun_Jog_F'")
    );
    GCharacterHandgun02SequenceSettingsMap.Add(ECharacterPoseName::Jog, JogSettings);

    // Sprint
    FCharacterSequenceSettings SprintSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Run_01.A_FP_PCH_Handgun_Run_01'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Handguns/A_TP_CH_Handgun_Sprint_F.A_TP_CH_Handgun_Sprint_F'")
    );
    GCharacterHandgun02SequenceSettingsMap.Add(ECharacterPoseName::Sprint, SprintSettings);

    // Sprint-Impulse
    FCharacterSequenceSettings SprintImpulseSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Run_01.A_FP_PCH_Handgun_Run_01'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Handguns/A_TP_CH_Handgun_Sprint_Impulse_F.A_TP_CH_Handgun_Sprint_Impulse_F'")
    );
    GCharacterHandgun02SequenceSettingsMap.Add(ECharacterPoseName::Sprint_Impulse, SprintImpulseSettings);

    // Sprint-Tactical
    FCharacterSequenceSettings SprintTacticalSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Sprint_Tactical_F_Loop.A_FP_PCH_Handgun_Sprint_Tactical_F_Loop'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Sprint_Tactical_F_Loop.A_FP_PCH_Handgun_Sprint_Tactical_F_Loop'")
    );
    GCharacterHandgun02SequenceSettingsMap.Add(ECharacterPoseName::Sprint_Tactical, SprintTacticalSettings);

    // Crouching-Walking
    FCharacterSequenceSettings CrouchingWalkingSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_Crouch.A_FP_PCH_Walk_Crouch'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_Crouch.A_FP_PCH_Walk_Crouch'")
    );
    GCharacterHandgun02SequenceSettingsMap.Add(ECharacterPoseName::Crouching_Walking, CrouchingWalkingSettings);
}

FCharacterSequenceSettings UCharacterHandgun02SequenceSettingsLibrary::GetCharacterHandgun02SequenceSettingsByName(ECharacterPoseName SequenceName)
{
    InitCharacterHandgun02SequenceSettingsMap();
    if (GCharacterHandgun02SequenceSettingsMap.Contains(SequenceName))
    {
        return GCharacterHandgun02SequenceSettingsMap[SequenceName];
    }
    return FCharacterSequenceSettings(); // Return default settings if not found
}
