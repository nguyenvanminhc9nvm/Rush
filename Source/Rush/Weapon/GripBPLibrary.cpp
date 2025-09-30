#include "GripBPLibrary.h"
#include "Engine/Engine.h"

static TMap<EGripName, FGripEntry> GGripMap;

static void InitGripMap()
{
    if (GGripMap.Num() > 0) return;

    // Hidden - Invisible placeholder mesh
    FGripEntry HiddenEntry;
    HiddenEntry.Name = EGripName::Grip_Hidden;
    HiddenEntry.FragmentMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Assets/Projectiles/SM_Placeholder_Invisible.SM_Placeholder_Invisible"));
    GGripMap.Add(EGripName::Grip_Hidden, HiddenEntry);

    // Grip-01
    FGripEntry Grip01Entry;
    Grip01Entry.Name = EGripName::Grip01;
    Grip01Entry.FragmentMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Models/SM_ATT_Grip_01.SM_ATT_Grip_01"));
    GGripMap.Add(EGripName::Grip01, Grip01Entry);

    // Bipod-01
    FGripEntry Bipod01Entry;
    Bipod01Entry.Name = EGripName::Bipod01;
    Bipod01Entry.FragmentMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Models/SM_ATT_Bipod_01.SM_ATT_Bipod_01"));
    GGripMap.Add(EGripName::Bipod01, Bipod01Entry);

    // Bipod-02
    FGripEntry Bipod02Entry;
    Bipod02Entry.Name = EGripName::Bipod02;
    Bipod02Entry.FragmentMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Models/SM_ATT_Bipod_02.SM_ATT_Bipod_02"));
    GGripMap.Add(EGripName::Bipod02, Bipod02Entry);
}

FGripEntry UGripBPLibrary::GetGripByName(EGripName GripName)
{
    InitGripMap();
    if (GGripMap.Contains(GripName))
    {
        return GGripMap[GripName];
    }
    return FGripEntry();
}

UStaticMesh* UGripBPLibrary::GetGripMeshByName(EGripName GripName)
{
    InitGripMap();
    if (GGripMap.Contains(GripName))
    {
        return GGripMap[GripName].FragmentMesh;
    }
    return nullptr;
}
