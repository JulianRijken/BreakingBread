#pragma once
#include "Engine/DataTable.h"
#include "FUnlockedLevel.generated.h"

UENUM(BlueprintType)
enum class EUnlockEvents : uint8
{
	VE_BroodInRooster      UMETA(DisplayName="Broos in Rooster"),
	VE_Test2      UMETA(DisplayName="Test2"),
};



USTRUCT(BlueprintType) struct FUnlockedLevel : public FTableRowBase
{
	GENERATED_BODY()
public:
	FUnlockedLevel() : Level(nullptr), UnlockedByKey(EUnlockEvents::VE_BroodInRooster) 
	{	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UWorld> Level;
	
	//Added a unlocked by key that will be send by events
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUnlockEvents UnlockedByKey;
};
