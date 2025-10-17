#include "SkillWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"

void USkillWidget::OnEnable()
{
  button->SetRenderOpacity(1.0f);
}

void USkillWidget::OnUpdate()
{
  if (!data.bUnlocked)
  {
    OnEnable();
  }
  else
  {
    button->SetIsEnabled(false);
  }
}

void USkillWidget::OnDisable()
{
  button->SetRenderOpacity(0.5f);
}

int32 USkillWidget::GetCost()
{
  return data.Cost;
}

void USkillWidget::Init(FSkillData _data)
{
  data = _data;
  text->SetText(_data.DisplayName);

  OnUpdate();
}