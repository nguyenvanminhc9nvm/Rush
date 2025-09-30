#include "AR01GripSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Animation/AnimSequence.h"

static TMap<EGripName, FGripSettingsEntry> GGripSettingsMap;

static void InitGripSettingsMap()
{
    if (GGripSettingsMap.Num() > 0) return;

    // Grip-01
    FGripSettingsEntry Grip01Entry;
    Grip01Entry.Name = EGripName::Grip01;
    
    // Idle Poses
    Grip01Entry.IdlePoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/ARs/A_FP_PCH_AR_01_Idle_Pose_Grip.A_FP_PCH_AR_01_Idle_Pose_Grip"));
    Grip01Entry.IdlePoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Idle_Pose_Grip.A_TP_CH_AR_01_Idle_Pose_Grip"));
    
    // Aimed Poses
    Grip01Entry.AimedPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/ARs/A_FP_PCH_AR_01_Aim_Pose_Grip.A_FP_PCH_AR_01_Aim_Pose_Grip"));
    Grip01Entry.AimedPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Aim_Pose_Grip.A_TP_CH_AR_01_Aim_Pose_Grip"));
    
    // Holstered Poses
    Grip01Entry.HolsteredPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/ARs/A_FP_PCH_AR_01_Idle_Pose_Grip.A_FP_PCH_AR_01_Idle_Pose_Grip"));
    Grip01Entry.HolsteredPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/ARs/A_TP_CH_AR_01_Lowered_Pose_Grip.A_TP_CH_AR_01_Lowered_Pose_Grip"));
    
    GGripSettingsMap.Add(EGripName::Grip01, Grip01Entry);

    // Bipod-01
    FGripSettingsEntry Bipod01Entry;
    Bipod01Entry.Name = EGripName::Bipod01;
    
    // All poses set to None (nullptr)
    Bipod01Entry.IdlePoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.IdlePoses.SequenceBaseThirdPerson = nullptr;
    Bipod01Entry.AimedPoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.AimedPoses.SequenceBaseThirdPerson = nullptr;
    Bipod01Entry.HolsteredPoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.HolsteredPoses.SequenceBaseThirdPerson = nullptr;
    
    GGripSettingsMap.Add(EGripName::Bipod01, Bipod01Entry);

    // Bipod-02
    FGripSettingsEntry Bipod02Entry;
    Bipod02Entry.Name = EGripName::Bipod02;
    
    // All poses set to None (nullptr)
    Bipod02Entry.IdlePoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.IdlePoses.SequenceBaseThirdPerson = nullptr;
    Bipod02Entry.AimedPoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.AimedPoses.SequenceBaseThirdPerson = nullptr;
    Bipod02Entry.HolsteredPoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.HolsteredPoses.SequenceBaseThirdPerson = nullptr;
    
    GGripSettingsMap.Add(EGripName::Bipod02, Bipod02Entry);
}

FGripSettingsEntry UAR01GripSettingsLibrary::GetGripSettingsByName(EGripName GripName)
{
    InitGripSettingsMap();
    if (GGripSettingsMap.Contains(GripName))
    {
        return GGripSettingsMap[GripName];
    }
    return FGripSettingsEntry();
}
