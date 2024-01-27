// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldTools.h"

FName UWorldTools::GetLevelName(TSoftObjectPtr<UWorld> World)
{
	const FString name  =  World.GetAssetName();
	return  FName(*name);
}
