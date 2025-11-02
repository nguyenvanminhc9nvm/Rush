#include "CharacterShotgun01SequenceSettingsLibrary.h"
#include "Engine/Engine.h"

static TMap<ECharacterPoseName, FCharacterSequenceSettings> GCharacterShotgun01SequenceSettingsMap;

static void InitCharacterShotgun01SequenceSettingsMap()
{
    if (GCharacterShotgun01SequenceSettingsMap.Num() > 0) return;

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
    GCharacterShotgun01SequenceSettingsMap.Add(ECharacterPoseName::Standing_Breathing, StandingBreathingSettings);

    // Aiming-Walking
    FCharacterSequenceSettings AimingWalkingSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Aim_Walk_F.A_FP_PCH_Aim_Walk_F'"),
        TEXT("None")
    );
    GCharacterShotgun01SequenceSettingsMap.Add(ECharacterPoseName::Aiming_Walking, AimingWalkingSettings);

    // Aiming-Breathing
    FCharacterSequenceSettings AimingBreathingSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Aim_Idle.A_FP_PCH_Aim_Idle'"),
        TEXT("None")
    );
    GCharacterShotgun01SequenceSettingsMap.Add(ECharacterPoseName::Aiming_Breathing, AimingBreathingSettings);

    // Turning
    FCharacterSequenceSettings TurningSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_F.A_FP_PCH_Walk_F'"),
        TEXT("None")
    );
    GCharacterShotgun01SequenceSettingsMap.Add(ECharacterPoseName::Turning, TurningSettings);

    // Jog
    FCharacterSequenceSettings JogSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Run.A_FP_PCH_Shotgun_01_Run'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Jog_F.A_TP_CH_Shotgun_01_Jog_F'")
    );
    GCharacterShotgun01SequenceSettingsMap.Add(ECharacterPoseName::Jog, JogSettings);

    // Sprint
    FCharacterSequenceSettings SprintSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Run.A_FP_PCH_Shotgun_01_Run'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Sprint_F.A_TP_CH_Shotgun_01_Sprint_F'")
    );
    GCharacterShotgun01SequenceSettingsMap.Add(ECharacterPoseName::Sprint, SprintSettings);

    // Sprint-Impulse
    FCharacterSequenceSettings SprintImpulseSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Run.A_FP_PCH_Shotgun_01_Run'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_TP_CH_Shotgun_01_Sprint_Impulse_F.A_TP_CH_Shotgun_01_Sprint_Impulse_F'")
    );
    GCharacterShotgun01SequenceSettingsMap.Add(ECharacterPoseName::Sprint_Impulse, SprintImpulseSettings);

    // Sprint-Tactical
    FCharacterSequenceSettings SprintTacticalSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Sprint_Tactical_F_Loop.A_FP_PCH_Shotgun_01_Sprint_Tactical_F_Loop'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/Shotguns/A_FP_PCH_Shotgun_01_Sprint_Tactical_F_Loop.A_FP_PCH_Shotgun_01_Sprint_Tactical_F_Loop'")
    );
    GCharacterShotgun01SequenceSettingsMap.Add(ECharacterPoseName::Sprint_Tactical, SprintTacticalSettings);

    // Crouching-Walking
    FCharacterSequenceSettings CrouchingWalkingSettings = CreateSequenceSettings(
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_Crouch.A_FP_PCH_Walk_Crouch'"),
        TEXT("/Script/Engine.AnimSequence'/Game/Assets/Character/Animation/_Common/A_FP_PCH_Walk_Crouch.A_FP_PCH_Walk_Crouch'")
    );
    GCharacterShotgun01SequenceSettingsMap.Add(ECharacterPoseName::Crouching_Walking, CrouchingWalkingSettings);
}

FCharacterSequenceSettings UCharacterShotgun01SequenceSettingsLibrary::GetCharacterShotgun01SequenceSettingsByName(ECharacterPoseName SequenceName)
{
    InitCharacterShotgun01SequenceSettingsMap();
    if (GCharacterShotgun01SequenceSettingsMap.Contains(SequenceName))
    {
        return GCharacterShotgun01SequenceSettingsMap[SequenceName];
    }
    return FCharacterSequenceSettings(); // Return default settings if not found
}
