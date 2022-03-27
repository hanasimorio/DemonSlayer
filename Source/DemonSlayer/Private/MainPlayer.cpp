// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GamePlayStatics.h"
#include "AbilitySystemComponent.h"
#include "Engine.h"


// Sets default values
AMainPlayer::AMainPlayer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 800.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	CharacterMesh = GetMesh();
	WeaponSocket = "WeaponPos";

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 1000.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamara"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	Weapon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon"));
	//Weapon->SetupAttachment(CharacterMesh);

	Weapon->SetMobility(EComponentMobility::Movable);

	Weapon->SetupAttachment(RootComponent);

	bDead = false;

	Health = 100.0f;

	AttributeSet = CreateDefaultSubobject<UGAS_AttributeSet>(TEXT("AttributeSet"));



}





// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();

	//Weapon->AttachTo(CharacterMesh, WeaponSocket, EAttachLocation::SnapToTarget, false);

	Weapon->AttachToComponent(CharacterMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, WeaponSocket);

	if (AbilitySystem)
	{
		int32 inputID(0);
		if (HasAuthority() && AbilityList.Num() > 0)
		{
			for (auto Ability : AbilityList) {
				if (Ability)
				{
					AbilitySystem->GiveAbility(FGameplayAbilitySpec(Ability.GetDefaultObject(), 1, inputID++));
				}
			}
		}
		AbilitySystem->InitAbilityActorInfo(this, this);

	}

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AMainPlayer::OnBeginOverlap);

	if (Player_Power_Widget_Class != nullptr)
	{
		Player_Power_widget = CreateWidget(GetWorld(), Player_Power_Widget_Class);
		Player_Power_widget->AddToViewport();
	}


	if (GEngine != nullptr)
	{
		// CameraManager‚ðƒ[ƒ‹ƒh‚©‚çŽæ“¾‚·‚é
		CameraManager = GEngine->GetFirstLocalPlayerController(GetWorld())->PlayerCameraManager;
		CameraManager->ViewPitchMax = -30.0f;
		CameraManager->ViewPitchMin = -60.0f;
	}

}

void AMainPlayer::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AbilitySystem->RefreshAbilityActorInfo();
}


// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMainPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainPlayer::MoveRight);


}


void AMainPlayer::MoveForward(float Axis)
{

	if (!bDead)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Axis);


	}

}

void AMainPlayer::MoveRight(float Axis)
{
	if (!bDead)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Axis);


	}
}

void AMainPlayer::OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Recharge")) {

		

		OtherActor->Destroy();



	}

}

void AMainPlayer::RestartGame()
{

	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);

}


float AMainPlayer::GetStamina()
{
	return AttributeSet->GetStamina();
}

float AMainPlayer::GetHealthPoint()
{
	return AttributeSet->GetHealthPoint();
}

float AMainPlayer::GetMagicPoint()
{
	return AttributeSet->GetMagicPoint();
}
