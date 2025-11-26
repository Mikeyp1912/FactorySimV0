// Player/FactoryCharacter.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FactoryCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

class UInputMappingContext;
class UInputAction;

UCLASS()
class FACTORYSIMV0_API AFactoryCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AFactoryCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	UPROPERTY(EditDefaultsOnly, Category = "Input") UInputMappingContext* MC_Player;

	// General Movement Input Mapping
	UPROPERTY(EditDefaultsOnly, Category = "Input") UInputAction* IA_MoveForward;
	UPROPERTY(EditDefaultsOnly, Category = "Input") UInputAction* IA_MoveRight;
	UPROPERTY(EditDefaultsOnly, Category = "Input") UInputAction* IA_LookYaw;
	UPROPERTY(EditDefaultsOnly, Category = "Input") UInputAction* IA_LookPitch;
	UPROPERTY(EditDefaultsOnly, Category = "Input") UInputAction* IA_Jump;

public:	
	virtual void Tick(float DeltaTime) override;

	void MoveForward1D(const struct FInputActionValue& Value);
	void MoveRight1D(const struct FInputActionValue& Value);
	void LookYaw1D(const struct FInputActionValue& Value);
	void LookPitch1D(const struct FInputActionValue& Value);
	void JumpPressed(const struct FInputActionValue& Value);
};
