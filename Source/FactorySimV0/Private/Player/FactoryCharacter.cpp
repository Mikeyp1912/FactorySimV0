// Player/FactoryCharacter.cpp

#include "Player/FactoryCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "Player/FactoryPlayerController.h"
// Sets default values
AFactoryCharacter::AFactoryCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 0.f;
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
}

// Called when the game starts or when spawned
void AFactoryCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (ULocalPlayer* LP = PC->GetLocalPlayer())
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
}

void AFactoryCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFactoryCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (IA_MoveForward) EIC->BindAction(IA_MoveForward, ETriggerEvent::Triggered, this, &AFactoryCharacter::MoveForward1D);
		if (IA_MoveRight)   EIC->BindAction(IA_MoveRight, ETriggerEvent::Triggered, this, &AFactoryCharacter::MoveRight1D);
		if (IA_LookYaw)     EIC->BindAction(IA_LookYaw, ETriggerEvent::Triggered, this, &AFactoryCharacter::LookYaw1D);
		if (IA_LookPitch)   EIC->BindAction(IA_LookPitch, ETriggerEvent::Triggered, this, &AFactoryCharacter::LookPitch1D);
		if (IA_Jump)        EIC->BindAction(IA_Jump, ETriggerEvent::Started, this, &AFactoryCharacter::JumpPressed);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("EnhancedInputComponent not found. Did you enable the module and restart?"));
	}
}

void AFactoryCharacter::MoveForward1D(const FInputActionValue& Value)
{
	AddMovementInput(GetActorForwardVector(), Value.Get<float>());
}

void AFactoryCharacter::MoveRight1D(const FInputActionValue& Value)
{
	AddMovementInput(GetActorRightVector(), Value.Get<float>());
}

void AFactoryCharacter::LookYaw1D(const FInputActionValue& Value)
{
	AddControllerYawInput(Value.Get<float>());
}

void AFactoryCharacter::LookPitch1D(const FInputActionValue& Value)
{
	AddControllerPitchInput(Value.Get<float>());
}

void AFactoryCharacter::JumpPressed(const FInputActionValue& Value)
{
	Jump();
}
