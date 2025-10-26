#include "GripBPLibrary.h"
#include "Engine/Engine.h"
#include "Rush/Weapon/Enum/EWeaponIconName.h"

static TMap<EWeaponIconName, FGripEntry> GGripMap;

static void InitGripMap()
{
    if (GGripMap.Num() > 0) return;

    // Hidden - Invisible placeholder mesh
    FGripEntry HiddenEntry;
    HiddenEntry.Name = EWeaponIconName::NoneHidden;
    HiddenEntry.FragmentMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Assets/Projectiles/SM_Placeholder_Invisible.SM_Placeholder_Invisible"));
    GGripMap.Add(EWeaponIconName::NoneHidden, HiddenEntry);

    // Grip-01
    FGripEntry Grip01Entry;
    Grip01Entry.Name = EWeaponIconName::Grip_01;
    Grip01Entry.FragmentMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Models/SM_ATT_Grip_01.SM_ATT_Grip_01"));
    GGripMap.Add(EWeaponIconName::Grip_01, Grip01Entry);

    // Bipod-01
    FGripEntry Bipod01Entry;
    Bipod01Entry.Name = EWeaponIconName::Bipod_01;
    Bipod01Entry.FragmentMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Models/SM_ATT_Bipod_01.SM_ATT_Bipod_01"));
    GGripMap.Add(EWeaponIconName::Bipod_01, Bipod01Entry);

    // Bipod-02
    FGripEntry Bipod02Entry;
    Bipod02Entry.Name = EWeaponIconName::Bipod_02;
    Bipod02Entry.FragmentMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Assets/Weapon/_Common/Attachments/Models/SM_ATT_Bipod_02.SM_ATT_Bipod_02"));
    GGripMap.Add(EWeaponIconName::Bipod_02, Bipod02Entry);
}

FGripEntry UGripBPLibrary::GetGripByName(EWeaponIconName GripName)
{
    InitGripMap();
    if (GGripMap.Contains(GripName))
    {
        return GGripMap[GripName];
    }
    return FGripEntry();
}

UStaticMesh* UGripBPLibrary::GetGripMeshByName(EWeaponIconName GripName)
{
    InitGripMap();
    if (GGripMap.Contains(GripName))
    {
        return GGripMap[GripName].FragmentMesh;
    }
    return nullptr;
}
