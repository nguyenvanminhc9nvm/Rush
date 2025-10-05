#include "Handgun04GripSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Animation/AnimSequence.h"

static TMap<EGripName, FGripSettingsEntry> GHandgun04GripSettingsMap;

static void InitHandgun04GripSettingsMap()
{
    if (GHandgun04GripSettingsMap.Num() > 0) return;

    // Grip-01
    FGripSettingsEntry Grip01Entry;
    Grip01Entry.Name = EGripName::Grip01;
    
    // Idle Poses
    Grip01Entry.IdlePoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Idle_Pose_Grip.A_FP_PCH_Handgun_Idle_Pose_Grip"));
    Grip01Entry.IdlePoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_TP_CH_Handgun_Idle_Pose_Grip.A_TP_CH_Handgun_Idle_Pose_Grip"));
    
    // Aimed Poses
    Grip01Entry.AimedPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Aim_Pose_Grip.A_FP_PCH_Handgun_Aim_Pose_Grip"));
    Grip01Entry.AimedPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_TP_CH_Handgun_Aim_Pose_Grip.A_TP_CH_Handgun_Aim_Pose_Grip"));
    
    // Holstered Poses
    Grip01Entry.HolsteredPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Idle_Pose_Grip.A_FP_PCH_Handgun_Idle_Pose_Grip"));
    Grip01Entry.HolsteredPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_TP_CH_Handgun_Lowered_Pose_Grip.A_TP_CH_Handgun_Lowered_Pose_Grip"));
    
    GHandgun04GripSettingsMap.Add(EGripName::Grip01, Grip01Entry);

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
    
    GHandgun04GripSettingsMap.Add(EGripName::Bipod01, Bipod01Entry);

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
    
    GHandgun04GripSettingsMap.Add(EGripName::Bipod02, Bipod02Entry);
}

FGripSettingsEntry UHandgun04GripSettingsLibrary::GetHandgun04GripSettingsByName(EGripName GripName)
{
    InitHandgun04GripSettingsMap();
    if (GHandgun04GripSettingsMap.Contains(GripName))
    {
        return GHandgun04GripSettingsMap[GripName];
    }
    return FGripSettingsEntry();
}

TArray<FGripSettingsEntry> UHandgun04GripSettingsLibrary::GetAllHandgun04GripSettings()
{
    InitHandgun04GripSettingsMap();
    TArray<FGripSettingsEntry> AllSettings;
    GHandgun04GripSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
