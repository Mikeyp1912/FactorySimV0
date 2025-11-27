// Systems/GridService.h

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GridService.generated.h"

//class ABuildingBase;

/**
 * Logical world grid tracking which cells are occupied by buildings.
 * This lets us prevent overlaps without using physics and makes saving easy.
 */
UCLASS()
class FACTORYSIMV0_API UGridService : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
	float GridSize = 100.0f;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	FIntVector WorldToCell(const FVector& WorldLocation) const;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	FVector CellToWorld(const FIntVector& Cell) const;

	static UGridService* Get(const UObject* WorldContext);


};
