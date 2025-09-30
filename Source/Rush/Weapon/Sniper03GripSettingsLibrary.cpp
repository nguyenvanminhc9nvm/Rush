#include "Sniper03GripSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Animation/AnimSequence.h"

static TMap<EGripName, FGripSettingsEntry> GSniper03GripSettingsMap;

static void InitSniper03GripSettingsMap()
{
    if (GSniper03GripSettingsMap.Num() > 0) return;

    // Grip-01
    FGripSettingsEntry Grip01Entry;
    Grip01Entry.Name = EGripName::Grip01;
    
    // Idle Poses
    Grip01Entry.IdlePoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_FP_PCH_Sniper_03_Idle_Pose_Grip.A_FP_PCH_Sniper_03_Idle_Pose_Grip"));
    Grip01Entry.IdlePoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_03_Idle_Pose_Grip.A_TP_CH_Sniper_03_Idle_Pose_Grip"));
    
    // Aimed Poses
    Grip01Entry.AimedPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_FP_PCH_Sniper_03_Aim_Pose_Grip.A_FP_PCH_Sniper_03_Aim_Pose_Grip"));
    Grip01Entry.AimedPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_03_Aim_Pose_Grip.A_TP_CH_Sniper_03_Aim_Pose_Grip"));
    
    // Holstered Poses
    Grip01Entry.HolsteredPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_FP_PCH_Sniper_03_Idle_Pose_Grip.A_FP_PCH_Sniper_03_Idle_Pose_Grip"));
    Grip01Entry.HolsteredPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_03_Lowered_Pose_Grip.A_TP_CH_Sniper_03_Lowered_Pose_Grip"));
    
    GSniper03GripSettingsMap.Add(EGripName::Grip01, Grip01Entry);

    // Bipod-01
    FGripSettingsEntry Bipod01Entry;
    Bipod01Entry.Name = EGripName::Bipod01;
    
    // Idle Poses - All set to None
    Bipod01Entry.IdlePoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.IdlePoses.SequenceBaseThirdPerson = nullptr;
    
    // Aimed Poses - All set to None
    Bipod01Entry.AimedPoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.AimedPoses.SequenceBaseThirdPerson = nullptr;
    
    // Holstered Poses - All set to None
    Bipod01Entry.HolsteredPoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.HolsteredPoses.SequenceBaseThirdPerson = nullptr;
    
    GSniper03GripSettingsMap.Add(EGripName::Bipod01, Bipod01Entry);

    // Bipod-02
    FGripSettingsEntry Bipod02Entry;
    Bipod02Entry.Name = EGripName::Bipod02;
    
    // Idle Poses - All set to None
    Bipod02Entry.IdlePoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.IdlePoses.SequenceBaseThirdPerson = nullptr;
    
    // Aimed Poses - All set to None
    Bipod02Entry.AimedPoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.AimedPoses.SequenceBaseThirdPerson = nullptr;
    
    // Holstered Poses - All set to None
    Bipod02Entry.HolsteredPoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.HolsteredPoses.SequenceBaseThirdPerson = nullptr;
    
    GSniper03GripSettingsMap.Add(EGripName::Bipod02, Bipod02Entry);
}

FGripSettingsEntry USniper03GripSettingsLibrary::GetSniper03GripSettingsByName(EGripName GripName)
{
    InitSniper03GripSettingsMap();
    if (GSniper03GripSettingsMap.Contains(GripName))
    {
        return GSniper03GripSettingsMap[GripName];
    }
    return FGripSettingsEntry();
}
