// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DelayCompensationComponent.generated.h"

class ACharacter;
class USkeletalMeshComponent;

USTRUCT()
struct FRewindHitBox
{
    GENERATED_BODY()

    UPROPERTY()
    FName HitBoxName;

    UPROPERTY()
    FTransform Transform;

    // HitBox 半径（用于 Capsule） 
    UPROPERTY() 
    float Radius = 0.0f; 
    
    // HitBox 半高（用于 Capsule） 
    UPROPERTY() 
    float HalfHeight = 0.0f;
};

USTRUCT()
struct FRewindFrame {
    GENERATED_BODY() 

    // 服务器记录这一帧时的时间 
    UPROPERTY() 
    float Time = 0.0f; 
     
    // 这一时刻所有历史 HitBox
    UPROPERTY()
    TArray<FRewindHitBox> HitBoxes;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTFPS_API UDelayCompensationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UDelayCompensationComponent();

public:
    // 最大保存多少秒的历史记录
    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation") 
    float MaxRecordTime = 0.25f;

    // 历史帧记录间隔 例如 0.016 秒 ≈ 60 FPS。
    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation")
    float RecordInterval = 0.016f;

    // 最大允许回溯时间:防止高 Ping 玩家无限回溯
    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation") 
    float MaxRewindTime = 0.20f;

private:
    // 历史帧:只存在服务器
    UPROPERTY()
    TArray<FRewindFrame> FrameHistory;
    // 当前正在记录历史的 Character
    TWeakObjectPtr<ACharacter> TrackedCharacter;

    // 距离下一次 RecordFrame 还剩多少时间
    float RecordTimer = 0.0f;

public: 
    //手动记录当前角色的一帧历史状态 
    void RecordFrame(); 
    
    /** * 根据目标时间获取历史帧 * * 会在前后两个历史帧之间进行插值。 */ 
    bool GetFrameAtTime(float TargetTime, FRewindFrame& OutFrame) const;

    // 获取当前历史记录中最早的时间
    float GetOldestRecordTime() const;

    // 获取当前历史记录中最新的时间
    float GetNewestRecordTime() const;

    // 清理过期历史记录
    void ClearOldFrames(float CurrentTime);

private:
    /** * 从 Character 的 SkeletalMesh 中生成当前 HitBox */ 
    bool BuildCurrentHitBoxes(TArray<FRewindHitBox>& OutHitBoxes) const;

    /** * 在两个历史 HitBox 之间进行插值 */
    FRewindHitBox InterpolateHitBox(const FRewindHitBox& A, const FRewindHitBox& B, float Alpha) const;
private:

    /**
     * 用于构建 Lag Compensation HitBox 的参考骨骼
     * Head:
     *     head → 头部 HitBox 中心
     *
     * Body:
     *     neck → 身体上方参考点
     *     spine_01 → 身体下方参考点
     */

    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation|HitBoxes")
    FName HeadBone = TEXT("head");

    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation|HitBoxes")
    float HeadRadius = 23.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation|HitBoxes")
    float HeadHalfHeight = 19.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation|HitBoxes")
    FVector HeadOffset = FVector(11.0f, 4.0f, 0.0f);

    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation|HitBoxes")
    FName BodyTopBone = TEXT("spine_03");

    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation|HitBoxes")
    FName BodyBottomBone = TEXT("pelvis");

    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation|HitBoxes")
    float BodyRadius = 28.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation|HitBoxes")
    float BodyHalfHeight = 65.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Lag Compensation|HitBoxes")
    FVector BodyOffset = FVector::ZeroVector;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
