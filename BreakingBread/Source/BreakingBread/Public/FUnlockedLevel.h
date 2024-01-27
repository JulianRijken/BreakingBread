﻿#pragma once
#include "Engine/DataTable.h"
#include "FUnlockedLevel.generated.h"

UENUM(BlueprintType)
enum class EUnlockEvents : uint8
{
	VE_NormalEnding UMETA(DisplayName="Normal Ending"),
	VE_Test2       UMETA(DisplayName="Test2"),
};



USTRUCT(BlueprintType) struct FUnlockedLevel : public FTableRowBase
{
	GENERATED_BODY()
public:
	FUnlockedLevel() : Level(nullptr), UnlockedByKey() 
	{	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UWorld> Level;
	
	//Added a unlocked by key that will be send by events
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUnlockEvents UnlockedByKey;
};
