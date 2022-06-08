// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumnPlayerController.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TantrumnCharacterBase.h"
#include "TantrumnGameModeBase.h"
#include "TantrumnGameInstance.h"
#include "TantrumnGameStateBase.h"
#include "TantrumnPlayerState.h"

static TAutoConsoleVariable<bool> CVarDisplayLaunchInputDelta(
	TEXT("Tantrum.Character.Debug.DisplayLaunchInputDelta"),
	false,
	TEXT("Display Launch Input Delta"),
	ECVF_Default);

void ATantrumnPlayerController::BeginPlay()
{
	Super::BeginPlay();
	TantrumnGameState = GetWorld()->GetGameState<ATantrumnGameStateBase>();
	//ensureMsgf(TantrumnGameState, TEXT("ATantrumnPlayerController::BeginPlay Invalid TantrumnGameState"));
}
//called from gamemode, so only on authority will we get these calls
void ATantrumnPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	UE_LOG(LogTemp, Warning, TEXT("OnPossess: %s"), *GetName());
}

void ATantrumnPlayerController::OnUnPossess()
{
	Super::OnUnPossess();
	UE_LOG(LogTemp, Warning, TEXT("OnUnPossess: %s"), *GetName());
}

void ATantrumnPlayerController::ClientDisplayCountdown_Implementation(float GameCountdownDuration)
{
	if (UTantrumnGameInstance* TantrumnGameInstance = GetWorld()->GetGameInstance<UTantrumnGameInstance>())
	{
		TantrumnGameInstance->DisplayCountdown(GameCountdownDuration, this);
	}
}

void ATantrumnPlayerController::ClientRestartGame_Implementation()
{
	if (ATantrumnPlayerState* TantrumnPlayerState = GetPlayerState<ATantrumnPlayerState>())
	{
		if (UTantrumnGameInstance* TantrumnGameInstance = GetWorld()->GetGameInstance<UTantrumnGameInstance>())
		{
			TantrumnGameInstance->RestartGame(this);
		}
	}
}

void ATantrumnPlayerController::ClientReachedEnd_Implementation()
{
	//this needs to be named better, it's just displaying the end screen
	//this will be seperate, as it will come after the montage...
	//client gets hud authority needs to replicate the montage

	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter()))
	{
		TantrumnCharacterBase->ServerPlayCelebrateMontage();
		TantrumnCharacterBase->GetCharacterMovement()->DisableMovement();
	}

	if (UTantrumnGameInstance* TantrumnGameInstance = GetWorld()->GetGameInstance<UTantrumnGameInstance>())
	{
		//call the level complete event for the widget...
	}

	FInputModeUIOnly InputMode;
	SetInputMode(InputMode);
	SetShowMouseCursor(true);
}

void ATantrumnPlayerController::ServerRestartLevel_Implementation()
{
	//GetWorld()->ServerTravel(TEXT("?restart"));
	ATantrumnGameModeBase* TantrumnGameMode = GetWorld()->GetAuthGameMode<ATantrumnGameModeBase>();
	if (ensureMsgf(TantrumnGameMode, TEXT("ATantrumnPlayerController::ServerRestartLevel_Implementation Invalid GameMode")))
	{
		TantrumnGameMode->RestartGame();
		
	}
	/*RestartPlayer()
	GetWorld()->GetCurrentLevel()->GetName()
	GetWorld()->ServerTravel(TEXT("?restart"));*/
}

void ATantrumnPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();

	if (IsLocalController())
	{
		if (HUDClass)
		{
			HUDWidget = CreateWidget(this, HUDClass);
			if (HUDWidget)
			{
				//HUDWidget->AddToViewport();
				HUDWidget->AddToPlayerScreen();
			}
		}
	}
	
}

void ATantrumnPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (InputComponent)
	{
		InputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ATantrumnPlayerController::RequestJump);
		InputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Released, this, &ATantrumnPlayerController::RequestStopJump);
		
		InputComponent->BindAction(TEXT("Crouch"), EInputEvent::IE_Pressed, this, &ATantrumnPlayerController::RequestCrouchStart);
		InputComponent->BindAction(TEXT("Crouch"), EInputEvent::IE_Released, this, &ATantrumnPlayerController::RequestCrouchEnd);
		InputComponent->BindAction(TEXT("Sprint"), EInputEvent::IE_Pressed, this, &ATantrumnPlayerController::RequestSprintStart);
		InputComponent->BindAction(TEXT("Sprint"), EInputEvent::IE_Released, this, &ATantrumnPlayerController::RequestSprintEnd);
		
		InputComponent->BindAction(TEXT("PullObject"), EInputEvent::IE_Pressed, this, &ATantrumnPlayerController::RequestPullObject);
		InputComponent->BindAction(TEXT("PullObject"), EInputEvent::IE_Released, this, &ATantrumnPlayerController::RequestStopPullObject);

		InputComponent->BindAxis(TEXT("MoveForward"), this, &ATantrumnPlayerController::RequestMoveForward);
		InputComponent->BindAxis(TEXT("MoveRight"), this, &ATantrumnPlayerController::RequestMoveRight);
		InputComponent->BindAxis(TEXT("LookUp"), this, &ATantrumnPlayerController::RequestLookUp);
		InputComponent->BindAxis(TEXT("LookRight"), this, &ATantrumnPlayerController::RequestLookRight);
		InputComponent->BindAxis(TEXT("ThrowObject"), this, &ATantrumnPlayerController::RequestThrowObject);
		
	}
}

bool ATantrumnPlayerController::CanProcessRequest() const
{
	if (TantrumnGameState && TantrumnGameState->IsPlaying())
	{
		if (ATantrumnPlayerState* TantrumnPlayerState = GetPlayerState<ATantrumnPlayerState>())
		{
			return (TantrumnPlayerState->GetCurrentState() == EPlayerGameState::Playing);
		}
	}

	return false;
}

void ATantrumnPlayerController::RequestMoveForward(float AxisValue)
{
	if (!CanProcessRequest())
	{
		return;
	}

	if (AxisValue != 0.f)
	{
		FRotator const ControlSpaceRot = GetControlRotation();
		// transform to world space and add it
		GetPawn()->AddMovementInput(FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::X), AxisValue);
	}
}

void ATantrumnPlayerController::RequestMoveRight(float AxisValue)
{
	if (!CanProcessRequest())
	{
		return;
	}

	if (AxisValue != 0.f)
	{
		FRotator const ControlSpaceRot = GetControlRotation();
		// transform to world space and add it
		GetPawn()->AddMovementInput(FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::Y), AxisValue);
	}
}

void ATantrumnPlayerController::RequestLookUp(float AxisValue)
{
	AddPitchInput(AxisValue * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ATantrumnPlayerController::RequestLookRight(float AxisValue)
{
	AddYawInput(AxisValue * BaseLookRightRate * GetWorld()->GetDeltaSeconds());
}

void ATantrumnPlayerController::RequestThrowObject(float AxisValue)
{
	if (!CanProcessRequest())
	{
		return;
	}

	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter()))
	{
		if (TantrumnCharacterBase->CanThrowObject())
		{
			float currentDelta = AxisValue - LastAxis;
			
			//debug
			if (CVarDisplayLaunchInputDelta->GetBool())
			{
				if (fabs(currentDelta) > 0.0f)
				{
					UE_LOG(LogTemp, Warning, TEXT("Axis: %f LastAxis: %f currentDelta: %f"), AxisValue, LastAxis, currentDelta);
				}
			}
			LastAxis = AxisValue;
			const bool IsFlick = fabs(currentDelta) > FlickThreshold;
			if (IsFlick)
			{
				if(currentDelta > 0)
				{
					TantrumnCharacterBase->RequestThrowObject();
				}			
				else
				{
					TantrumnCharacterBase->RequestUseObject();
				}
			}
		}
		else
		{
			LastAxis = 0.0f;
		}
	}
}

void ATantrumnPlayerController::RequestPullObject()
{
	if (!CanProcessRequest())
	{
		return;
	}
	
	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter()))
	{
		TantrumnCharacterBase->RequestPullObject();
	}
}

void ATantrumnPlayerController::RequestStopPullObject()
{
	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter()))
	{
		TantrumnCharacterBase->RequestStopPullObject();
	}
}

void ATantrumnPlayerController::RequestJump()
{
	if (!CanProcessRequest())
	{
		return;
	}

	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter()))
	{
		TantrumnCharacterBase->Jump();

		//SoundCue Triggers
		if (JumpSound && TantrumnCharacterBase->GetCharacterMovement()->IsMovingOnGround())
		{
			FVector CharacterLocation = TantrumnCharacterBase->GetActorLocation();
			UGameplayStatics::PlaySoundAtLocation(this, JumpSound, CharacterLocation);
		}
	}
}

void ATantrumnPlayerController::RequestStopJump()
{
	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter()))
	{
		TantrumnCharacterBase->StopJumping();
	}
}

void ATantrumnPlayerController::RequestCrouchStart()
{
	if (!CanProcessRequest())
	{
		return;
	}

	ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter());
	if(!TantrumnCharacterBase || !TantrumnCharacterBase->GetCharacterMovement()->IsMovingOnGround()) 
	{
		return;
	}

	TantrumnCharacterBase->Crouch();
}

void ATantrumnPlayerController::RequestCrouchEnd()
{
	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter()))
	{
		TantrumnCharacterBase->UnCrouch();
	}
}

void ATantrumnPlayerController::RequestSprintStart()
{
	if (!CanProcessRequest())
	{
		return;
	}

	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter()))
	{
		TantrumnCharacterBase->RequestSprintStart();
	}
}

void ATantrumnPlayerController::RequestSprintEnd()
{
	if (ATantrumnCharacterBase* TantrumnCharacterBase = Cast<ATantrumnCharacterBase>(GetCharacter()))
	{
		TantrumnCharacterBase->RequestSprintEnd();
	}
}