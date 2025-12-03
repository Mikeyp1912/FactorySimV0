// Component/PlacementComponent.h

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UI/FactoryGameplayHUDWidget.h"
#include "PlacementComponent.generated.h"

UENUM(BlueprintType)
enum class EPlacementMode : uint8
{
	Idle,
	BuildingPreview,
	ConveyorPreview,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FACTORYSIMV0_API UPlacementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPlacementComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placement")
	float GridSize = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placement")
	float RotationStepDegrees = 15.0f;

	float CurrentRotationDegrees = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placement")
	float HeightOffset = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placement")
	float PlacementClearance = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placement|Limits", meta = (ClampMin = "0.0"))
	float MaxPlacementDistance = 1000.0f;


	UFUNCTION(BlueprintCallable, Category = "Placement")
	void SetPlacementMode(EPlacementMode NewMode);

	UFUNCTION(BlueprintPure, Category = "Placement")
	EPlacementMode GetPlacementMode() const { return Mode; }

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, 
		ELevelTick TickType, 
		FActorComponentTickFunction* ThisTickFunction) override;

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Placement")
	EPlacementMode Mode = EPlacementMode::Idle;
		
private:
	UPROPERTY()
	UFactoryGameplayHUDWidget* HUD;
};
