// UI/FactoryGameplayHUDWidget.cpp


#include "UI/FactoryGameplayHUDWidget.h"
#include "Components/TextBlock.h"

void UFactoryGameplayHUDWidget::SetModeText(const FText& InText)
{
	if (ModeText)
	{
		ModeText->SetText(InText);
	}
}