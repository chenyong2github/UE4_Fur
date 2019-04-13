// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModule.h"
#include "Misc/Paths.h"
#include "ShaderCore.h"

void FMyGameModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("StartupModule"));

	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);

}

void FMyGameModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("ShutdownModule"));
}
