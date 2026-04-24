// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/UIManagerComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"
#include "Player/FPSPlayerController.h"

UUIManagerComponent::UUIManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

UUserWidget* UUIManagerComponent::GetOrCreateWidgetInstance(const FGameplayTag& WidgetTag)
{
	if (UUserWidget** Found = WidgetInstanceMap.Find(WidgetTag))
		return *Found;

	if (TSubclassOf<UUserWidget>* ClassPtr = WidgetClassMap.Find(WidgetTag)){
		if (*ClassPtr){
			APlayerController* PC = Cast<APlayerController>(GetOwner());
			if (!PC) return nullptr;

			UUserWidget* NewWidget = CreateWidget<UUserWidget>(PC, *ClassPtr);
			WidgetInstanceMap.Add(WidgetTag, NewWidget);
			return NewWidget;
		}
	}
	return nullptr;
}

void UUIManagerComponent::UpdateInventory_Implementation(EWeaponSlot WeaponType, UTexture2D* WeaponThumbnail)
{
	// 触发蓝图绑定事件
	OnInventoryUpdate.Broadcast(WeaponType, WeaponThumbnail);
}

void UUIManagerComponent::UpdateAmmoUI_Implementation(int32 MagazineCapacity, int32 RemainingAmmo)
{
	OnAmmoUIUpdate.Broadcast(MagazineCapacity, RemainingAmmo);
}

void UUIManagerComponent::DisplayAmmoUI_Implementation(bool bDisplay)
{
	OnDisplayAmmoUI.Broadcast(bDisplay);
}

void UUIManagerComponent::ShowHitMarker_Implementation()
{
	OnHitMarker.Broadcast();
}

void UUIManagerComponent::UpdateKillsUI_Implementation(int32 Kills)
{
	OnKillsUpdated.Broadcast(Kills);
}

void UUIManagerComponent::ShowHideWidget(const FGameplayTag& WidgetTag, bool bShow)
{
	if (UUserWidget* Widget = GetOrCreateWidgetInstance(WidgetTag))
	{
		if (bShow) {
			if (!Widget->IsInViewport())
				Widget->AddToViewport();
		}else {
			if (Widget->IsInViewport())
				Widget->RemoveFromParent();
		}
	}
}
