#include "SMG04GripSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Animation/AnimSequence.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"

static TMap<EWeaponIconName, FGripSettingsEntry> GSMG04GripSettingsMap;

static void InitSMG04GripSettingsMap()
{
    if (GSMG04GripSettingsMap.Num() > 0) return;

    // Grip-01
    FGripSettingsEntry Grip01Entry;
    Grip01Entry.Name = EWeaponIconName::Grip_01;
    
    // Idle Poses
    Grip01Entry.IdlePoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_04_Idle_Pose_Grip.A_FP_PCH_SMG_04_Idle_Pose_Grip"));
    Grip01Entry.IdlePoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Idle_Pose_Grip.A_TP_CH_SMG_04_Idle_Pose_Grip"));
    
    // Aimed Poses
    Grip01Entry.AimedPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_04_Aim_Pose_Grip.A_FP_PCH_SMG_04_Aim_Pose_Grip"));
    Grip01Entry.AimedPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Aim_Pose_Grip.A_TP_CH_SMG_04_Aim_Pose_Grip"));
    
    // Holstered Poses
    Grip01Entry.HolsteredPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_04_Idle_Pose_Grip.A_FP_PCH_SMG_04_Idle_Pose_Grip"));
    Grip01Entry.HolsteredPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_04_Lowered_Pose_Grip.A_TP_CH_SMG_04_Lowered_Pose_Grip"));
    
    GSMG04GripSettingsMap.Add(EWeaponIconName::Grip_01, Grip01Entry);

    // Bipod-01
    FGripSettingsEntry Bipod01Entry;
    Bipod01Entry.Name = EWeaponIconName::Bipod_01;
    
    // Idle Poses - All set to None
    Bipod01Entry.IdlePoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.IdlePoses.SequenceBaseThirdPerson = nullptr;
    
    // Aimed Poses - All set to None
    Bipod01Entry.AimedPoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.AimedPoses.SequenceBaseThirdPerson = nullptr;
    
    // Holstered Poses - All set to None
    Bipod01Entry.HolsteredPoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.HolsteredPoses.SequenceBaseThirdPerson = nullptr;
    
    GSMG04GripSettingsMap.Add(EWeaponIconName::Bipod_01, Bipod01Entry);

    // Bipod-02
    FGripSettingsEntry Bipod02Entry;
    Bipod02Entry.Name = EWeaponIconName::Bipod_02;
    
    // Idle Poses - All set to None
    Bipod02Entry.IdlePoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.IdlePoses.SequenceBaseThirdPerson = nullptr;
    
    // Aimed Poses - All set to None
    Bipod02Entry.AimedPoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.AimedPoses.SequenceBaseThirdPerson = nullptr;
    
    // Holstered Poses - All set to None
    Bipod02Entry.HolsteredPoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.HolsteredPoses.SequenceBaseThirdPerson = nullptr;
    
    GSMG04GripSettingsMap.Add(EWeaponIconName::Bipod_02, Bipod02Entry);
}

FGripSettingsEntry USMG04GripSettingsLibrary::GetSMG04GripSettingsByName(EWeaponIconName GripName)
{
    InitSMG04GripSettingsMap();
    if (GSMG04GripSettingsMap.Contains(GripName))
    {
        return GSMG04GripSettingsMap[GripName];
    }
    return FGripSettingsEntry();
}

TArray<FGripSettingsEntry> USMG04GripSettingsLibrary::GetAllSMG04GripSettings()
{
    InitSMG04GripSettingsMap();
    TArray<FGripSettingsEntry> AllSettings;
    GSMG04GripSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
