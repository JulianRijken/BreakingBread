// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WorldTools.generated.h"

/**
 * 
 */
UCLASS()
class BREAKINGBREAD_API UWorldTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
	UFUNCTION(BlueprintCallable, Category = "WorldTools")
	static FName GetLevelName(TSoftObjectPtr<UWorld> World);
};
