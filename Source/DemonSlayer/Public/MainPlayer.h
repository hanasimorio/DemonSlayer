// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GAS_AttributeSet.h"

#include "Camera/CameraComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "Blueprint/UserWidget.h"

#include "MainPlayer.generated.h"
UCLASS()
class DEMONSLAYER_API AMainPlayer : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainPlayer();

	UPROPERTY(EditAnywhere)
		USkeletalMeshComponent* CharacterMesh;

	UPROPERTY(EditDefaultsOnly)
		FName WeaponSocket;

		
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		APlayerCameraManager* CameraManager;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Weapon;


	void MoveForward(float Axis);
	void MoveRight(float Axis);

	bool bDead;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float Health;

	UPROPERTY(EditAnywhere)
		float Power_Treshold;

	UFUNCTION()
		void OnBeginOverlap(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, Category = "UI HUD")
		TSubclassOf<UUserWidget>Player_Power_Widget_Class;
	UUserWidget* Player_Power_widget;

	void RestartGame();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities, meta = (AllowPrivateAccess = "true"))
		class UAbilitySystemComponent* AbilitySystem;
	UAbilitySystemComponent* GetAbilitySystemComponent() const
	{
		return AbilitySystem;
	};
	/** ability list */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Abilities)
		TArray<TSubclassOf<class UGameplayAbility>> AbilityList;

	/** AttributeSet **/
	UPROPERTY()
		UGAS_AttributeSet* AttributeSet;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Attribute")
		virtual float GetStamina();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Attribute")
		virtual float GetHealthPoint();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Attribute")
		virtual float GetMagicPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PossessedBy(AController* NewController) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
