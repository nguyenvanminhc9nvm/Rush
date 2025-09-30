#include "WeaponIconData.h"

#include "Rush/Weapon/Enum/EWeaponName.h"

UWeaponIconData::UWeaponIconData()
{
	BaseImage = nullptr;
	MagazineImage = nullptr;
	IronsightsImage = nullptr;
	MuzzleImage = nullptr;
	ScopeImage = nullptr;
	GripImage = nullptr;
	WeaponName = EWeaponName::Assault_Rifle_01;
}
