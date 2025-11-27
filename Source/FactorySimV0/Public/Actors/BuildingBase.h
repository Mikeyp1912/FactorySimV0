// Actors/BuildingBase.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildingBase.generated.h"

class UStaticMeshComponent;

UCLASS()
class FACTORYSIMV0_API ABuildingBase : public AActor
{
	GENERATED_BODY()
	
public:	
	ABuildingBase();
	virtual void BeginPlay() override;

protected:
	UPROPERTY(VisibleAnywhere) 
	UStaticMeshComponent* Mesh;
};
