#include "SkillTreeWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void USkillTreeWidget::NativeConstruct()
{
  Super::NativeConstruct();
}

void USkillTreeWidget::PopulateTree(USkillTreeComponent* SkillTreeComp)
{
  if (!SkillTreeComp) return;

  TArray<FSkillData> AllSkills = SkillTreeComp->GetAllSkills();

  // log
  for (const FSkillData& Skill : AllSkills)
  {
    UE_LOG(LogTemp, Log, TEXT("Skill: %s, Unlocked: %d"), *Skill.DisplayName.ToString(), Skill.bUnlocked);
  }

  health_1->Init(AllSkills[0]);
  health_2->Init(AllSkills[1]);
  speed_1->Init(AllSkills[2]);
  speed_2->Init(AllSkills[3]);
  damage_1->Init(AllSkills[4]);
  damage_2->Init(AllSkills[5]);
}

void USkillTreeWidget::OnNodeClicked(FName SkillID, USkillTreeComponent* SkillTreeComp)
{
  if (!SkillTreeComp) return;

  FString Reason;
  if (!SkillTreeComp->CanUnlockSkill(SkillID, Reason))
  {
    UE_LOG(LogTemp, Warning, TEXT("Cannot select %s: %s"), *SkillID.ToString(), *Reason);
    return;
  }

  SelectedSkillID = SkillID;
  UE_LOG(LogTemp, Log, TEXT("Node selected: %s"), *SkillID.ToString());
}

void USkillTreeWidget::ConfirmUnlock(USkillTreeComponent* SkillTreeComp)
{
  if (!SkillTreeComp || SelectedSkillID.IsNone()) return;

  FString Reason;
  if (SkillTreeComp->UnlockSkill(SelectedSkillID, Reason))
  {
    UE_LOG(LogTemp, Log, TEXT("Skill unlocked: %s"), *SelectedSkillID.ToString());
    SelectedSkillID = NAME_None;
    PopulateTree(SkillTreeComp);
  }
  else
  {
    UE_LOG(LogTemp, Warning, TEXT("Unable to unlock %s: %s"), *SelectedSkillID.ToString(), *Reason);
  }
}
