#include "RushMenuWidget.h"

#include "Rush/Weapon/Enum/EFragmentLaserName.h"
#include "Rush/Weapon/Enum/EGripName.h"
#include "Rush/Weapon/Enum/EMuzzleName.h"
#include "Rush/Weapon/Enum/EScopeName.h"
#include "Rush/Weapon/Enum/EWeaponSkinName.h"

URushMenuWidget::URushMenuWidget(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
}

void URushMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Initialize default weapon preset with any values you want
	DefaultWeaponPreset.RowHandleSkins = EWeaponSkinName::DefaultAssaultRifle01;
	DefaultWeaponPreset.RowHandleMeshScope = EScopeName::Scope01;
	DefaultWeaponPreset.RowHandleMeshLaser = EFragmentLaserName::LaserSight;
	DefaultWeaponPreset.RowHandleMeshMuzzle = EMuzzleName::Silencer01;
	DefaultWeaponPreset.RowHandleMeshGrip = EGripName::Grip01;
}
