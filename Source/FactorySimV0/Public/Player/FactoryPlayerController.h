// Player/FactoryPlayerController.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UI/FactoryGameplayHUDWidget.h"
#include "FactoryPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
class UFactoryGameplayHUDWidget;

/**
 * 
 */
UCLASS()
class FACTORYSIMV0_API AFactoryPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = "Input") UInputMappingContext* MC_Player;

	UPROPERTY(EditDefaultsOnly, Category = "UI") TSubclassOf<UFactoryGameplayHUDWidget> GameplayHUDClass;

	UFactoryGameplayHUDWidget* GetGameplayHUD() const { return GameplayHUDInstance; }

protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void SetupInputComponent() override;
	virtual void BeginPlay() override;

	UPROPERTY()
	UFactoryGameplayHUDWidget* GameplayHUDInstance = nullptr;

};
