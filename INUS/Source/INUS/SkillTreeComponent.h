#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SkillData.h"
#include "SkillTreeComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INUS_API USkillTreeComponent : public UActorComponent
{
  GENERATED_BODY()

public:
  USkillTreeComponent();

protected:
  virtual void BeginPlay() override;

public:

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill Tree")
  TMap<FName, FSkillData> Skills;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill Tree")
  int32 CurrentSkillPoints = 5;

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  bool CanUnlockSkill(FName SkillID, FString& OutReason) const;

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  bool UnlockSkill(FName SkillID, FString& OutReason);

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  TArray<FSkillData> GetAllSkills() const;

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  bool GetSkill(FName SkillID, FSkillData& OutSkill) const;

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  void AddSkillPoints(int32 Amount);

  UFUNCTION(BlueprintCallable, Category = "Skill Tree")
  void InitializeSkills();
};
