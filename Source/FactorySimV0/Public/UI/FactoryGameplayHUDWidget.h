// UI/FactoryGameplayHUDWidget.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FactoryGameplayHUDWidget.generated.h"

class UTextBlock;
class UWidget;
/**
 * 
 */
UCLASS()
class FACTORYSIMV0_API UFactoryGameplayHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetModeText(const FText& InText);

protected:
	UPROPERTY(meta = (BindWidgetOptional))
	UTextBlock* ModeText = nullptr;

};