// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ChasingNPCController.generated.h"

/**
 * 
 */
UCLASS()
class LEARNCPPMOBILE_API AChasingNPCController : public AAIController
{
	GENERATED_BODY()

public:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

protected:
    // 用于缓存主角引用
    UPROPERTY()
        APawn* PlayerPawn;

    // 接受追击目标的距离
    UPROPERTY(EditDefaultsOnly, Category = "AI")
        float AcceptanceRadius = 50.0f;
};
