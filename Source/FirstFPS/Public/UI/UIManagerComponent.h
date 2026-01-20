// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "Weapon/WeaponInventoryComponent.h"
#include "Engine/Texture2D.h"
#include "UIManagerComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryUpdate, EWeaponSlot, WeaponType, UTexture2D*, WeaponThumbnail);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAmmoUIUpdate,int32, MagazineCapacity,int32, RemainingAmmo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisplayAmmoUI, bool, bDisplay);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHitMarker);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UUIManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUIManagerComponent();
	
	UFUNCTION(BlueprintCallable, Category = "UI")
	void ShowHideWidget(const FGameplayTag& WidgetTag, bool bShow);

	/** 根据 Tag 获取 Widget 实例（若不存在则创建） */
	UFUNCTION(BlueprintCallable, Category = "UI")
	UUserWidget* GetOrCreateWidgetInstance(const FGameplayTag& WidgetTag);

public:
	/** 更新背包/武器槽 UI，由 C++ 调用，蓝图实现具体显示逻辑 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "UI")
	void UpdateInventory(EWeaponSlot WeaponType, UTexture2D* WeaponThumbnail);
	void UpdateInventory_Implementation(EWeaponSlot WeaponType, UTexture2D* WeaponThumbnail);

	UPROPERTY(BlueprintAssignable, Category = "UI")
	FOnInventoryUpdate OnInventoryUpdate;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "UI")
	void UpdateAmmoUI(int32 MagazineCapacity, int32 RemainingAmmo);
	void UpdateAmmoUI_Implementation(int32 MagazineCapacity, int32 RemainingAmmo);

	UPROPERTY(BlueprintAssignable, Category = "UI")
	FOnAmmoUIUpdate OnAmmoUIUpdate;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "UI")
	void DisplayAmmoUI(bool bDisplay);
	void DisplayAmmoUI_Implementation(bool bDisplay);

	/** 蓝图事件，可在 UMG 里绑定 */
	UPROPERTY(BlueprintAssignable, Category = "UI")
	FOnDisplayAmmoUI OnDisplayAmmoUI;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "UI")
	void ShowHitMarker();
	void ShowHitMarker_Implementation();

	/** 蓝图事件，可在 UMG 中绑定 HitMarker 动画 */
	UPROPERTY(BlueprintAssignable, Category = "UI")
	FOnHitMarker OnHitMarker;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TMap<FGameplayTag, TSubclassOf<UUserWidget>> WidgetClassMap;

private:
	UPROPERTY()
	TMap<FGameplayTag, UUserWidget*> WidgetInstanceMap;		
};
