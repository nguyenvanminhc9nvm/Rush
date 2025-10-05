#include "Sniper02GripSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Animation/AnimSequence.h"

static TMap<EGripName, FGripSettingsEntry> GSniper02GripSettingsMap;

static void InitSniper02GripSettingsMap()
{
    if (GSniper02GripSettingsMap.Num() > 0) return;

    // Grip-01
    FGripSettingsEntry Grip01Entry;
    Grip01Entry.Name = EGripName::Grip01;
    
    // Idle Poses
    Grip01Entry.IdlePoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_FP_PCH_Sniper_02_Idle_Pose_Grip.A_FP_PCH_Sniper_02_Idle_Pose_Grip"));
    Grip01Entry.IdlePoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Idle_Pose_Grip.A_TP_CH_Sniper_02_Idle_Pose_Grip"));
    
    // Aimed Poses
    Grip01Entry.AimedPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_FP_PCH_Sniper_02_Aim_Pose_Grip.A_FP_PCH_Sniper_02_Aim_Pose_Grip"));
    Grip01Entry.AimedPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Aim_Pose_Grip.A_TP_CH_Sniper_02_Aim_Pose_Grip"));
    
    // Holstered Poses
    Grip01Entry.HolsteredPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_FP_PCH_Sniper_02_Idle_Pose_Grip.A_FP_PCH_Sniper_02_Idle_Pose_Grip"));
    Grip01Entry.HolsteredPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Snipers/A_TP_CH_Sniper_02_Lowered_Pose_Grip.A_TP_CH_Sniper_02_Lowered_Pose_Grip"));
    
    GSniper02GripSettingsMap.Add(EGripName::Grip01, Grip01Entry);

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
    
    GSniper02GripSettingsMap.Add(EGripName::Bipod01, Bipod01Entry);

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
    
    GSniper02GripSettingsMap.Add(EGripName::Bipod02, Bipod02Entry);
}

FGripSettingsEntry USniper02GripSettingsLibrary::GetSniper02GripSettingsByName(EGripName GripName)
{
    InitSniper02GripSettingsMap();
    if (GSniper02GripSettingsMap.Contains(GripName))
    {
        return GSniper02GripSettingsMap[GripName];
    }
    return FGripSettingsEntry();
}

TArray<FGripSettingsEntry> USniper02GripSettingsLibrary::GetAllSniper02GripSettings()
{
    InitSniper02GripSettingsMap();
    TArray<FGripSettingsEntry> AllSettings;
    GSniper02GripSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
