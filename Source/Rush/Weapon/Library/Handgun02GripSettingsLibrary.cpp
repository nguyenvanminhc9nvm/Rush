#include "Handgun02GripSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Animation/AnimSequence.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"

static TMap<EWeaponIconName, FGripSettingsEntry> GHandgun02GripSettingsMap;

static void InitHandgun02GripSettingsMap()
{
    if (GHandgun02GripSettingsMap.Num() > 0) return;

    // Grip-01
    FGripSettingsEntry Grip01Entry;
    Grip01Entry.Name = EWeaponIconName::Grip_01;
    
    // Idle Poses
    Grip01Entry.IdlePoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Idle_Pose_Grip.A_FP_PCH_Handgun_Idle_Pose_Grip"));
    Grip01Entry.IdlePoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_TP_CH_Handgun_Idle_Pose_Grip.A_TP_CH_Handgun_Idle_Pose_Grip"));
    
    // Aimed Poses
    Grip01Entry.AimedPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Aim_Pose_Grip.A_FP_PCH_Handgun_Aim_Pose_Grip"));
    Grip01Entry.AimedPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_TP_CH_Handgun_Aim_Pose_Grip.A_TP_CH_Handgun_Aim_Pose_Grip"));
    
    // Holstered Poses
    Grip01Entry.HolsteredPoses.SequenceBaseFirstPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_FP_PCH_Handgun_Idle_Pose_Grip.A_FP_PCH_Handgun_Idle_Pose_Grip"));
    Grip01Entry.HolsteredPoses.SequenceBaseThirdPerson = LoadObject<UAnimSequence>(nullptr, TEXT("/Game/Assets/Character/Animation/Handguns/A_TP_CH_Handgun_Lowered_Pose_Grip.A_TP_CH_Handgun_Lowered_Pose_Grip"));
    
    GHandgun02GripSettingsMap.Add(EWeaponIconName::Grip_01, Grip01Entry);

    // Bipod-01
    FGripSettingsEntry Bipod01Entry;
    Bipod01Entry.Name = EWeaponIconName::Bipod_01;
    
    // All poses set to None (nullptr)
    Bipod01Entry.IdlePoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.IdlePoses.SequenceBaseThirdPerson = nullptr;
    Bipod01Entry.AimedPoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.AimedPoses.SequenceBaseThirdPerson = nullptr;
    Bipod01Entry.HolsteredPoses.SequenceBaseFirstPerson = nullptr;
    Bipod01Entry.HolsteredPoses.SequenceBaseThirdPerson = nullptr;
    
    GHandgun02GripSettingsMap.Add(EWeaponIconName::Bipod_01, Bipod01Entry);

    // Bipod-02
    FGripSettingsEntry Bipod02Entry;
    Bipod02Entry.Name = EWeaponIconName::Bipod_02;
    
    // All poses set to None (nullptr)
    Bipod02Entry.IdlePoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.IdlePoses.SequenceBaseThirdPerson = nullptr;
    Bipod02Entry.AimedPoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.AimedPoses.SequenceBaseThirdPerson = nullptr;
    Bipod02Entry.HolsteredPoses.SequenceBaseFirstPerson = nullptr;
    Bipod02Entry.HolsteredPoses.SequenceBaseThirdPerson = nullptr;
    
    GHandgun02GripSettingsMap.Add(EWeaponIconName::Bipod_02, Bipod02Entry);
}

FGripSettingsEntry UHandgun02GripSettingsLibrary::GetHandgun02GripSettingsByName(EWeaponIconName GripName)
{
    InitHandgun02GripSettingsMap();
    if (GHandgun02GripSettingsMap.Contains(GripName))
    {
        return GHandgun02GripSettingsMap[GripName];
    }
    return FGripSettingsEntry();
}

TArray<FGripSettingsEntry> UHandgun02GripSettingsLibrary::GetAllHandgun02GripSettings()
{
    InitHandgun02GripSettingsMap();
    TArray<FGripSettingsEntry> AllSettings;
    GHandgun02GripSettingsMap.GenerateValueArray(AllSettings);
    return AllSettings;
}
