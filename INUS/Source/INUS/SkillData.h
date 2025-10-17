#pragma once

#include "CoreMinimal.h"
#include "SkillData.generated.h"

USTRUCT(BlueprintType)
struct FSkillData
{
  GENERATED_BODY()

public:

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
  FName SkillID;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
  FText DisplayName;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
  FText Description;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
  int32 Cost = 1;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
  TArray<FName> Prerequisites;

  UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Skill")
  bool bUnlocked = false;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
  FName Branch;

  FSkillData() {}

  FSkillData(FName InID, FText InName, FText InDescription, int32 InCost)
    : SkillID(InID)
    , DisplayName(InName)
    , Description(InDescription)
    , Cost(InCost)
    , bUnlocked(false)
  {
  }
};
