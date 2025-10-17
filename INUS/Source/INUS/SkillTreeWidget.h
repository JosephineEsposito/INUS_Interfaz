#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SkillWidget.h"
#include "SkillData.h"
#include "SkillTreeComponent.h"
#include "SkillTreeWidget.generated.h"

UCLASS()
class INUS_API USkillTreeWidget : public UUserWidget
{
  GENERATED_BODY()

public:

  UPROPERTY(BlueprintReadOnly, Category = "Skill Tree")
  FName SelectedSkillID;

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  void PopulateTree(USkillTreeComponent* SkillTreeComp);

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  void OnNodeClicked(FName SkillID, USkillTreeComponent* SkillTreeComp);

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  void ConfirmUnlock(USkillTreeComponent* SkillTreeComp);


  // Health
  UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
  USkillWidget* health_1;
  UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
  USkillWidget* health_2;

  // Speed
  UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
  USkillWidget* speed_1;
  UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
  USkillWidget* speed_2;

  // Damage
  UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
  USkillWidget* damage_1;
  UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
  USkillWidget* damage_2;

protected:

  virtual void NativeConstruct() override;
};
