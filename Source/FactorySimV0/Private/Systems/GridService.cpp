// Systems/GridService.cpp


#include "Systems/GridService.h"

FIntVector UGridService::WorldToCell(const FVector& WorldLocation) const
{
	return FIntVector(
		FMath::FloorToInt(WorldLocation.X / GridSize),
		FMath::FloorToInt(WorldLocation.Y / GridSize),
		FMath::FloorToInt(WorldLocation.Z / GridSize)
	);
}

FVector UGridService::CellToWorld(const FIntVector& Cell) const
{
	return FVector(Cell.X * GridSize, Cell.Y * GridSize, Cell.Z * GridSize);
}