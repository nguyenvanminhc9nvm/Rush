#pragma once

#include "CoreMinimal.h"
#include "FGripEntry.generated.h"

enum EGripName : uint8;

USTRUCT(BlueprintType)
struct RUSH_API FGripEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grip")
    TEnumAsByte<EGripName> Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grip")
    UStaticMesh* FragmentMesh;   // StaticMesh sẽ load thành UStaticMesh*
};
