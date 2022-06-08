// Fill out your copyright notice in the Description page of Project Settings.


#include "TantrumnLocalMPCamera.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "TantrumnGameModeBase.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"

static TAutoConsoleVariable<bool> CVarDrawMidPoint(
	TEXT("Tantrum.Camera.Debug.DrawMidPoint"),
	true,
	TEXT("Draw MidPoint Between Players"),
	ECVF_Default);

ATantrumnLocalMPCamera::ATantrumnLocalMPCamera(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));

	// Make the scene component the root component
	RootComponent = SpringArmComponent;

	// Setup camera defaults
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->FieldOfView = 90.0f;
	CameraComponent->bConstrainAspectRatio = true;
	CameraComponent->AspectRatio = 1.777778f;
	CameraComponent->PostProcessBlendWeight = 1.0f;

	CameraComponent->SetupAttachment(SpringArmComponent);

	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATantrumnLocalMPCamera::BeginPlay()
{
	Super::BeginPlay();
	ensureMsgf(GetWorld(), TEXT("ATantrumnLocalMPCamera::BeginPlay() Missing World!"));
	TantrumnGameModeBase = Cast<ATantrumnGameModeBase>(GetWorld()->GetAuthGameMode());
}

void ATantrumnLocalMPCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float MaxDistanceSq = 0.0f;
	FVector MidPoint = FVector::ZeroVector;
	FVector LastPosition = FVector::ZeroVector;
	int NumPlayers = 0;
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Iterator->Get();
		if (PlayerController && PlayerController->PlayerState)
		{
			FVector PawnPosition = PlayerController->GetPawn()->GetActorLocation();
			if (!LastPosition.IsNearlyZero())
			{
				const float DistanceSq = (PawnPosition - LastPosition).SizeSquared();
				if (DistanceSq > MaxDistanceSq)
				{
					MaxDistanceSq = DistanceSq;
				}
			}
			MidPoint += PawnPosition;
			LastPosition = PawnPosition;
			++NumPlayers;
		}
	}

	MidPoint /= NumPlayers > 0 ? (float)NumPlayers : 1.0f;

	if (CVarDrawMidPoint->GetBool())
	{
		DrawDebugSphere(GetWorld(), MidPoint, 25.0f, 10, FColor::Blue);
	}
	const float MaxDistance = MaxDistanceSq > KINDA_SMALL_NUMBER ? FMath::Min(sqrtf(MaxDistanceSq), MaxPlayerDistance) : 0.0f;
	const float DistanceRatio = MaxDistance > MinPlayerDistance ? (MaxDistance - MinPlayerDistance) / (MaxPlayerDistance - MinPlayerDistance): 0.0f;
	SpringArmComponent->TargetArmLength = FMath::Lerp(MinArmLength, MaxArmLength, DistanceRatio);
}

