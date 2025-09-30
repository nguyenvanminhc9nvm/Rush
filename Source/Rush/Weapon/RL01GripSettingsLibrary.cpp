#include "RL01GripSettingsLibrary.h"
#include "Engine/Engine.h"
#include "Animation/AnimSequence.h"

static TMap<EGripName, FGripSettingsEntry> GRL01GripSettingsMap;

static void InitRL01GripSettingsMap()
{
    if (GRL01GripSettingsMap.Num() > 0) return;

    // Grip-01
    FGripSettingsEntry Grip01Entry;
    Grip01Entry.Name = EGripName::Grip01;
    
    // Idle Poses - All set to None
    Grip01Entry.IdlePoses.SequenceBaseFirstPerson = nullptr;
    Grip01Entry.IdlePoses.SequenceBaseThirdPerson = nullptr;
    
    // Aimed Poses - All set to None
    Grip01Entry.AimedPoses.SequenceBaseFirstPerson = nullptr;
    Grip01Entry.AimedPoses.SequenceBaseThirdPerson = nullptr;
    
    // Holstered Poses - All set to None
    Grip01Entry.HolsteredPoses.SequenceBaseFirstPerson = nullptr;
    Grip01Entry.HolsteredPoses.SequenceBaseThirdPerson = nullptr;
    
    GRL01GripSettingsMap.Add(EGripName::Grip01, Grip01Entry);

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
    
    GRL01GripSettingsMap.Add(EGripName::Bipod01, Bipod01Entry);

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
    
    GRL01GripSettingsMap.Add(EGripName::Bipod02, Bipod02Entry);
}

FGripSettingsEntry URL01GripSettingsLibrary::GetRL01GripSettingsByName(EGripName GripName)
{
    InitRL01GripSettingsMap();
    if (GRL01GripSettingsMap.Contains(GripName))
    {
        return GRL01GripSettingsMap[GripName];
    }
    return FGripSettingsEntry();
}
