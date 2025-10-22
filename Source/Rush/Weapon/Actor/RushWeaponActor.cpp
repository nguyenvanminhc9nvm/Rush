#include "RushWeaponActor.h"

ARushWeaponActor::ARushWeaponActor(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;
}
