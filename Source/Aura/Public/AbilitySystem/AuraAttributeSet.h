// Copyright Flokkuthra Design

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AuraAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UAuraAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing= OnRep_Health, Category = "Vital Attributes")
	FGameplayAttributeData Health;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing= OnRep_MaxHealth, Category = "Vital Attributes")
	FGameplayAttributeData MaxHealth;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing= OnRep_Magick, Category = "Vital Attributes")
	FGameplayAttributeData Magick;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing= OnRep_MaxMagick, Category = "Vital Attributes")
	FGameplayAttributeData MaxMagick;

	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth) const;
	
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const;

	UFUNCTION()
	void OnRep_Magick(const FGameplayAttributeData& OldMagick) const;

	UFUNCTION()
	void OnRep_MaxMagick(const FGameplayAttributeData& OldMaxMagick) const;
	
};
