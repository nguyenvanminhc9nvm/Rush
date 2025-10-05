#include "LogUtils.h"
#include "Engine/Engine.h"

void ULogUtils::Log(const FString& Message, ELogLevel InLogLevel, const FString& Category, bool bPrintToScreen, float ScreenDuration)
{
	FString FormattedMessage = FString::Printf(TEXT("-------------------------------------->[%s] %s<-----------------------------------"), *Category, *Message);
	
	// Log to console based on log level
	switch (InLogLevel)
	{
		case ELogLevel::Info:
			UE_LOG(LogTemp, Log, TEXT("%s"), *FormattedMessage);
			break;
		case ELogLevel::Warning:
			UE_LOG(LogTemp, Warning, TEXT("%s"), *FormattedMessage);
			break;
		case ELogLevel::Error:
			UE_LOG(LogTemp, Error, TEXT("%s"), *FormattedMessage);
			break;
		case ELogLevel::Debug:
			UE_LOG(LogTemp, VeryVerbose, TEXT("%s"), *FormattedMessage);
			break;
	}
	
	// Print to screen if requested
	if (bPrintToScreen && GEngine)
	{
		FColor DisplayColor = FColor::White;
		switch (InLogLevel)
		{
			case ELogLevel::Info:
				DisplayColor = FColor::Green;
				break;
			case ELogLevel::Warning:
				DisplayColor = FColor::Yellow;
				break;
			case ELogLevel::Error:
				DisplayColor = FColor::Red;
				break;
			case ELogLevel::Debug:
				DisplayColor = FColor::Cyan;
				break;
		}
		
		GEngine->AddOnScreenDebugMessage(-1, ScreenDuration, DisplayColor, FormattedMessage);
	}
}
