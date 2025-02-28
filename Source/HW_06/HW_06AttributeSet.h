// © Skillbox, 2024

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "HW_06AttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class HW_06_API UHW_06AttributeSet : public UAttributeSet
{
	GENERATED_BODY()

	public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameplayAttributeData Health;
    ATTRIBUTE_ACCESSORS(UHW_06AttributeSet, Health)
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameplayAttributeData MaxHealth;
    ATTRIBUTE_ACCESSORS(UHW_06AttributeSet, MaxHealth)
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameplayAttributeData Patrons;
    ATTRIBUTE_ACCESSORS(UHW_06AttributeSet, Patrons)
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    FGameplayAttributeData MaxPatrons;
    ATTRIBUTE_ACCESSORS(UHW_06AttributeSet, MaxPatrons)
    

    virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

};
