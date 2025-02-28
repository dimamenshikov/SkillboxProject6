#include "HW_06AttributeSet.h"
#include "GameplayEffectExtension.h"

void UHW_06AttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	
Super::PostGameplayEffectExecute(Data);
if (Data.EvaluatedData.Attribute == GetHealthAttribute())
{
SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
}
if (Data.EvaluatedData.Attribute == GetPatronsAttribute())
{
SetPatrons(FMath::Clamp(GetPatrons(), 0.0f, GetMaxPatrons()));
}
}
