#pragma once

#include "CoreMinimal.h"
#include "EScopeName.generated.h"

UENUM(BlueprintType)
enum EScopeName: uint8
{
	Scope_Hidden UMETA(DisplayName = "Hidden"),
	Scope01 UMETA(DisplayName = "Scope-01"),
	Scope02 UMETA(DisplayName = "Scope-02"),
	Scope03 UMETA(DisplayName = "Scope-03"),
	Scope04 UMETA(DisplayName = "Scope-04"),
	Scope05 UMETA(DisplayName = "Scope-05"),
	Scope06 UMETA(DisplayName = "Scope-06"),
	Scope07 UMETA(DisplayName = "Scope-07"),
	Scope08 UMETA(DisplayName = "Scope-08")
};
