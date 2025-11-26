// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FactoryGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYSIMV0_API AFactoryGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFactoryGameMode();
	
protected:
	virtual void BeginPlay() override;
	
};
