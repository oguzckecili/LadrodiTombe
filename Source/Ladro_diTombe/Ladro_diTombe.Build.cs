// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Ladro_diTombe : ModuleRules
{
	public Ladro_diTombe(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
