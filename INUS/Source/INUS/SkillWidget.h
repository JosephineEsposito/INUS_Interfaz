// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SkillData.h"
#include "SkillWidget.generated.h"

class UButton;
class UTextBlock;
class UImage;

/**
 * 
 */
UCLASS()
class INUS_API USkillWidget : public UUserWidget
{
	GENERATED_BODY()

public: 

  UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
  UButton* button;

  UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
  UTextBlock* text;

  UPROPERTY(meta = (BindWidget))
  UImage* icon;

  UPROPERTY(BlueprintReadWrite, Category = "Skill Tree")
  FSkillData data;

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  void OnEnable();

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  void OnUpdate();

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  void OnDisable();

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  int32 GetCost();

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  void Init(FSkillData _data);
};
