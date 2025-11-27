// Player/FactoryGameMode.cpp

#include "Player/FactoryGameMode.h"
#include "Player/FactoryCharacter.h"
#include "Player/FactoryPlayerController.h"

AFactoryGameMode::AFactoryGameMode()
{
    DefaultPawnClass = AFactoryCharacter::StaticClass();
    PlayerControllerClass = AFactoryPlayerController::StaticClass();
}

void AFactoryGameMode::BeginPlay()
{
	Super::BeginPlay();
}