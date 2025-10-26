#include "SMG03GripSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Animation/AnimSequence.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"

static TMap<EWeaponIconName, FGripSettingsEntry> GSMG03GripSettingsMap;

static void InitSMG03GripSettingsMap()
{
    if (GSMG03GripSettingsMap.Num() > 0) return;

    // Grip-01
    FGripSettingsEntry Grip01Entry;
    Grip01Entry.Name = EWeaponIconName::Grip_01;
    
    // Idle Poses
    Grip01Entry.IdlePoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_03_Idle_Pose_Grip.A_FP_PCH_SMG_03_Idle_Pose_Grip"));
    Grip01Entry.IdlePoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_03_Idle_Pose_Grip.A_TP_CH_SMG_03_Idle_Pose_Grip"));
    
    // Aimed Poses
    Grip01Entry.AimedPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_03_Aim_Pose_Grip.A_FP_PCH_SMG_03_Aim_Pose_Grip"));
    Grip01Entry.AimedPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_03_Aim_Pose_Grip.A_TP_CH_SMG_03_Aim_Pose_Grip"));
    
    // Holstered Poses
    Grip01Entry.HolsteredPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_FP_PCH_SMG_03_Idle_Pose_Grip.A_FP_PCH_SMG_03_Idle_Pose_Grip"));
    Grip01Entry.HolsteredPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/SMGs/A_TP_CH_SMG_03_Lowered_Pose_Grip.A_TP_CH_SMG_03_Lowered_Pose_Grip"));
    
    GSMG03GripSettingsMap.Add(EWeaponIconName::Grip_01, Grip01Entry);

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
    
    GSMG03GripSettingsMap.Add(EWeaponIconName::Bipod_01, Bipod01Entry);

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
    
    GSMG03GripSettingsMap.Add(EWeaponIconName::Bipod_02, Bipod02Entry);
}

FGripSettingsEntry USMG03GripSettingsLibrary::GetSMG03GripSettingsByName(EWeaponIconName GripName)
{
    InitSMG03GripSettingsMap();
    if (GSMG03GripSettingsMap.Contains(GripName))
    {
        return GSMG03GripSettingsMap[GripName];
    }
    return FGripSettingsEntry();
}

TArray<FGripSettingsEntry> USMG03GripSettingsLibrary::GetAllSMG03GripSettings()
{
    InitSMG03GripSettingsMap();
    TArray<FGripSettingsEntry> AllSettings;
    GSMG03GripSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
