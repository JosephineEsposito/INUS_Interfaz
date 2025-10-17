#include "SkillTreeComponent.h"
#include "GameFramework/Actor.h"

USkillTreeComponent::USkillTreeComponent()
{
  PrimaryComponentTick.bCanEverTick = false;
}

void USkillTreeComponent::BeginPlay()
{
  Super::BeginPlay();

  InitializeSkills();
}

bool USkillTreeComponent::CanUnlockSkill(FName SkillID, FString& OutReason) const
{
  const FSkillData* Skill = Skills.Find(SkillID);
  if (!Skill)
  {
    OutReason = "Skill not found";
    return false;
  }

  if (Skill->bUnlocked)
  {
    OutReason = "Skill already unlocked.";
    return false;
  }

  if (CurrentSkillPoints < Skill->Cost)
  {
    OutReason = "Not enough points.";
    return false;
  }

  for (const FName& Req : Skill->Prerequisites)
  {
    const FSkillData* Pre = Skills.Find(Req);
    if (!Pre || !Pre->bUnlocked)
    {
      OutReason = FString::Printf(TEXT("Missing prerequisite: %s"), *Req.ToString());
      return false;
    }
  }

  OutReason = "OK";
  return true;
}

bool USkillTreeComponent::UnlockSkill(FName SkillID, FString& OutReason)
{
  FSkillData* Skill = Skills.Find(SkillID);
  if (!Skill)
  {
    OutReason = "Skill not found.";
    return false;
  }

  FString Reason;
  if (!CanUnlockSkill(SkillID, Reason))
  {
    OutReason = Reason;
    return false;
  }

  Skill->bUnlocked = true;
  CurrentSkillPoints -= Skill->Cost;

  OutReason = "Skill unlocked!";
  return true;
}

TArray<FSkillData> USkillTreeComponent::GetAllSkills() const
{
  TArray<FSkillData> Out;
  Skills.GenerateValueArray(Out);
  return Out;
}

bool USkillTreeComponent::GetSkill(FName SkillID, FSkillData& OutSkill) const
{
  if (const FSkillData* Found = Skills.Find(SkillID))
  {
    OutSkill = *Found;
    return true;
  }
  return false;
}

void USkillTreeComponent::AddSkillPoints(int32 Amount)
{
  CurrentSkillPoints += Amount;
}

void USkillTreeComponent::InitializeSkills()
{
  Skills.Empty();

  // === SPEED ===
  FSkillData Speed1(
    "Speed1",
    FText::FromString("Light Feet"),
    FText::FromString("Increments speed."),
    1
  );
  Speed1.Branch = "Movement";
  Speed1.bUnlocked = true;

  FSkillData Speed2(
    "Speed2",
    FText::FromString("Wind Dash"),
    FText::FromString("Greatly increments speed."),
    2
  );
  Speed2.Prerequisites = { "Speed1" };
  Speed2.Branch = "Movement";

  // === HEALTH ===
  FSkillData Health1(
    "Health1",
    FText::FromString("Strong Body"),
    FText::FromString("Slight health increase."),
    1
  );
  Health1.Branch = "Health";
  Health1.bUnlocked = true;

  FSkillData Health2(
    "Health2",
    FText::FromString("Steel Skin"),
    FText::FromString("Great health increase"),
    2
  );
  Health2.Prerequisites = { "Health1" };
  Health2.Branch = "Health";

  // === DAMAGE ===
  FSkillData Damage1(
    "Damage1",
    FText::FromString("Precise hit"),
    FText::FromString("Slight damage increase"),
    1
  );
  Damage1.Branch = "Damage";
  Damage1.bUnlocked = true;

  FSkillData Damage2(
    "Damage2",
    FText::FromString("Silent Assassin"),
    FText::FromString("Great damage increase"),
    2
  );
  Damage2.Prerequisites = { "Damage1" };
  Damage2.Branch = "Damage";

  Skills.Add(Health1.SkillID, Health1);
  Skills.Add(Health2.SkillID, Health2);
  Skills.Add(Speed1.SkillID, Speed1);
  Skills.Add(Speed2.SkillID, Speed2);
  Skills.Add(Damage1.SkillID, Damage1);
  Skills.Add(Damage2.SkillID, Damage2);

}

