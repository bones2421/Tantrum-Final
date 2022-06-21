// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowableActor.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "InteractInterface.h"
#include "TantrumnCharacterBase.h"

// Sets default values
AThrowableActor::AThrowableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	SetReplicateMovement(true);
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	RootComponent = StaticMeshComponent;
}

// Called when the game starts or when spawned
void AThrowableActor::BeginPlay()
{
	Super::BeginPlay();
	if (HasAuthority())
	{
		ProjectileMovementComponent->OnProjectileStop.AddDynamic(this, &AThrowableActor::ProjectileStop);
	}
	
}

void AThrowableActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (HasAuthority())
	{
		ProjectileMovementComponent->OnProjectileStop.RemoveDynamic(this, &AThrowableActor::ProjectileStop);
	}
	Super::EndPlay(EndPlayReason);
}

void AThrowableActor::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	//potentially early out if not authoritive

	if (State == EState::Idle || State == EState::Attached || State == EState::Dropped)
	{
		return;
	}
	
	if(State == EState::Launch)
	{
		IInteractInterface* I = Cast<IInteractInterface>(Other);
		if(I)
		{
			I->Execute_ApplyEffect(Other, EffectType, false);
		}
	}
	
	if (PullActor && State == EState::Pull )
	{
		if (ATantrumnCharacterBase* TantrumnCharacter = Cast<ATantrumnCharacterBase>(PullActor))
		{
			if (Other == PullActor)
			{
				AttachToComponent(TantrumnCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("ObjectAttach"));
				SetOwner(TantrumnCharacter);
				ProjectileMovementComponent->Deactivate();
				State = EState::Attached;
				//set character state to attached
				TantrumnCharacter->OnThrowableAttached(this);
			}
			else
			{
				TantrumnCharacter->ResetThrowableObject();
				State = EState::Dropped;
			}
		}
	}

	ProjectileMovementComponent->HomingTargetComponent = nullptr;
	PullActor = nullptr;
}

//only called on authority
void AThrowableActor::ProjectileStop(const FHitResult& ImpactResult)
{
	if (State == EState::Launch || State == EState::Dropped)
	{
		State = EState::Idle;
	}
}

bool AThrowableActor::Pull(AActor* InActor)
{
	if (State != EState::Idle)
	{
		return false;
	}

	if (SetHomingTarget(InActor))
	{
		ToggleHighlight(false);
		State = EState::Pull;
		PullActor = InActor;
		return true;
	}
	
	return false;
}

void AThrowableActor::Launch(const FVector& InitialVelocity, AActor* Target /* = nullptr */)
{
	if (State == EState::Pull || State == EState::Attached)
	{
		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		
		ProjectileMovementComponent->Activate(true);
		ProjectileMovementComponent->HomingTargetComponent = nullptr;

		State = EState::Launch;

		if (Target)
		{
			if (USceneComponent* SceneComponent = Cast<USceneComponent>(Target->GetComponentByClass(USceneComponent::StaticClass())))
			{
				ProjectileMovementComponent->HomingTargetComponent = TWeakObjectPtr<USceneComponent>(SceneComponent);
				return;
			}
		}

		ProjectileMovementComponent->Velocity = InitialVelocity;
	}
}

void AThrowableActor::Drop()
{
	if (State == EState::Pull || State == EState::Attached)
	{
		if (State == EState::Attached)
		{
			DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		}

		ProjectileMovementComponent->Activate(true);
		ProjectileMovementComponent->HomingTargetComponent = nullptr;
		State = EState::Dropped;
	}
}

void AThrowableActor::ToggleHighlight(bool bIsOn)
{
	StaticMeshComponent->SetRenderCustomDepth(bIsOn);
}

EEffectType AThrowableActor::GetEffectType()
{
	return EffectType;
}

bool AThrowableActor::SetHomingTarget(AActor* Target)
{
	if (Target)
	{
		if (USceneComponent* SceneComponent = Cast<USceneComponent>(Target->GetComponentByClass(USceneComponent::StaticClass())))
		{
			if (USceneComponent* ThrowableSceneComponent = Cast<USceneComponent>(GetComponentByClass(USceneComponent::StaticClass())))
			{
				ProjectileMovementComponent->SetUpdatedComponent(ThrowableSceneComponent);
				ProjectileMovementComponent->Activate(true);
				ProjectileMovementComponent->HomingTargetComponent = TWeakObjectPtr<USceneComponent>(SceneComponent);
				ProjectileMovementComponent->Velocity = FVector(0.0f, 0.0f, 1000.0f);
				return true;
			}
		}
	}

	return false;
}
