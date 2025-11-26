// Player/FactoryPlayerController.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FactoryPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

/**
 * 
 */
UCLASS()
class FACTORYSIMV0_API AFactoryPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void SetupInputComponent() override;
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, Category = "Input") UInputMappingContext* MC_Player;
};
