#pragma once
#include "Engine/DataTable.h"
#include "Sound/SoundCue.h"
#include "FUnlockedLevel.generated.h"

UENUM(BlueprintType)
enum class EUnlockEvents : uint8
{
	VE_NormalEnding					UMETA(DisplayName="Normal Ending"),
	VE_PlateEnding					UMETA(DisplayName="Plate Ending: Not so tasty..."),
	VE_ToasterEnding 				UMETA(DisplayName="Toaster Ending: Toasty!"),
	VE_BreakfastEnding 				UMETA(DisplayName="Breakfast Ending: Tasty!"),
	VE_RelationshipEnding			UMETA(DisplayName="Relationship Ending: How lovely."),
	VE_SinkEnding					UMETA(DisplayName="Sink Ending: Let that sink in!"),
	VE_FridgeEnding					UMETA(DisplayName="Fridge Ending: Cold as ice!"),
	VE_OvenEnding					UMETA(DisplayName="Oven Ending: Hot as hell!"),
	VE_MicrowaveEnding				UMETA(DisplayName="Microwave Ending: Ding!"),
	VE_DishwasherEnding				UMETA(DisplayName="Dishwasher Ending: Clean as a whistle!"),
	VE_CupboardEnding				UMETA(DisplayName="Cupboard Ending: Out of sight, out of mind!"),
	VE_CounterEnding				UMETA(DisplayName="Counter Ending:"),
	VE_CuttingBoardEnding			UMETA(DisplayName="Cutting Board Ending: Chop chop!"),
	VE_BowlingEnding				UMETA(DisplayName="Bowling Ending: Strike!"),
	VE_KatapultEnding				UMETA(DisplayName="Katapult Ending: Yeet!"),
	VE_RocketEnding					UMETA(DisplayName="Rocket Ending: Blast off!"),
	VE_JesusEnding					UMETA(DisplayName="Jesus Ending: Holy moly!"),
	VE_InSpaceEnding				UMETA(DisplayName="In Space Ending"),
	VE_BananaBreadEnding			UMETA(DisplayName="Banana Bread Ending"),
	VE_GTAEnding					UMETA(DisplayName="Bin Wasted Ending"),
	VE_RelationShipEnding			UMETA(DisplayName="RelationShip Ending"),
	VE_StandingEnding				UMETA(DisplayName="Standing Ending"),
	VE_BackroomEnding				UMETA(DisplayName="Backroom Ending"),
	VE_KrukEnding					UMETA(DisplayName="Kruk Ending"),
};



USTRUCT(BlueprintType) struct FUnlockedLevel : public FTableRowBase
{
	GENERATED_BODY()
public:
	FUnlockedLevel(): EndingKey()
	{}
	
	//Added a unlocked by key that will be send by events
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUnlockEvents EndingKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EndingText;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UWorld>> LevelsToUnlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<USoundCue> SoundCueToPlay;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> MemeImage;
};