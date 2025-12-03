// Player/FactoryPlayerController.cpp


#include "Player/FactoryPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "UI/FactoryGameplayHUDWidget.h"
#include "Player/FactoryCharacter.h"

void AFactoryPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (ULocalPlayer* LP = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (MC_Player)
			{
				Subsystem->AddMappingContext(MC_Player, 0);
			}
		}
	}
}

void AFactoryPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (!GameplayHUDInstance && GameplayHUDClass)
	{
		GameplayHUDInstance = CreateWidget<UFactoryGameplayHUDWidget>(this, GameplayHUDClass);
		if (GameplayHUDInstance)
		{
			GameplayHUDInstance->AddToViewport(0);
			GameplayHUDInstance->SetModeText(FText::FromString("Mode: Idle"));
		}
	}
}

void AFactoryPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Bind input actions here if needed
	}
}