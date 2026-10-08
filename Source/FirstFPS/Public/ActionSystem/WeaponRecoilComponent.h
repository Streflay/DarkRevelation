// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponRecoilComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UWeaponRecoilComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponRecoilComponent();

	// 后坐力 Pattern
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Recoil")
	TArray<FVector2D> RecoilPattern;

	UPROPERTY(EditDefaultsOnly, Category = "Recoil")
	float RecoilRecoverySpeed = 5.f;

	//平滑速度
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Recoil")
	float RecoilSmoothSpeed = 15.0f;

	int32 CurrentShotIndex = 0;

	FVector2D CurrentRecoil = FVector2D::ZeroVector;
	FVector2D TargetRecoil = FVector2D::ZeroVector;

	// 每次开枪调用
	UFUNCTION()
	void ApplyRecoil();

	UFUNCTION()
	void ResetRecoil();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
