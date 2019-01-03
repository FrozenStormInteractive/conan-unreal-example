// Copyright (c) 2018 ArsenStudio

using UnrealBuildTool;
using System.Collections.Generic;
using Conan;

public class ConanExampleTarget : TargetRules
{
	public ConanExampleTarget(TargetInfo Target) : base(Target)
	{
        ConanBuildInfo.Setup();
        this.LinkAllConanLibraries();

		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "ConanExample" } );
	}
}
