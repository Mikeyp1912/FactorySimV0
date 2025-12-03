// Component/PlacementComponent.cpp

#include "Components/PlacementComponent.h"
#include "Player/FactoryPlayerController.h"
#include "Player/FactoryCharacter.h"

UPlacementComponent::UPlacementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}



void UPlacementComponent::BeginPlay()
{
	Super::BeginPlay();

	HUD = nullptr;

	if (AFactoryCharacter* Character = Cast<AFactoryCharacter>(GetOwner()))
	{
		if (AFactoryPlayerController* PC = Cast<AFactoryPlayerController>(Character->GetController()))
		{
			HUD = PC->GetGameplayHUD();
		}
	}

	// ...
	
}

void UPlacementComponent::SetPlacementMode(EPlacementMode NewMode)
{
	if (Mode == NewMode) return;

	if (Mode == EPlacementMode::ConveyorPreview)
	{
		// ...
	}

	Mode = NewMode;

	if (HUD)
	{
		switch (Mode)
		{
		case EPlacementMode::Idle:
			HUD->SetModeText(FText::FromString("Mode: Idle"));
			break;
		case EPlacementMode::BuildingPreview:
			HUD->SetModeText(FText::FromString("Mode: Building Placement"));
			break;
		case EPlacementMode::ConveyorPreview:
			HUD->SetModeText(FText::FromString("Mode: Conveyor Placement"));
			break;
		default:
			break;
		}
	}
}
void UPlacementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (Mode == EPlacementMode::Idle) {
		// ...
		return;
	}

	if (Mode == EPlacementMode::BuildingPreview) {
		// ...
		return;
	}
}

