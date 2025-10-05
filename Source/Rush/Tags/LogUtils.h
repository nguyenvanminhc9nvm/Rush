#pragma once

#include "CoreMinimal.h"
#include "LogUtils.generated.h"

UENUM(BlueprintType)
enum class ELogLevel : uint8
{
	Info		UMETA(DisplayName = "Info"),
	Warning		UMETA(DisplayName = "Warning"),
	Error		UMETA(DisplayName = "Error"),
	Debug		UMETA(DisplayName = "Debug")
};

UCLASS()
class RUSH_API ULogUtils : public UObject
{
	GENERATED_BODY()

public:
	// Single logging function with enum and screen display option
	UFUNCTION(BlueprintCallable, Category = "Log Utils")
	static void Log(const FString& Message, ELogLevel InLogLevel = ELogLevel::Info, const FString& Category = TEXT("LogUtils"), bool bPrintToScreen = false, float ScreenDuration = 3.0f);
};
