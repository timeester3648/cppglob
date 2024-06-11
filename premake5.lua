include "../../premake/common_premake_defines.lua"

project "cppglob"
	kind "StaticLib"
	language "C++"
	cppdialect "C++latest"
	cdialect "C17"
	targetname "%{prj.name}"
	inlining "Auto"

	files {
		"./include/**.hpp",
		"./src/**.cpp"
	}

	defines {
		"CPPGLOB_BUILDING"
	}

	includedirs {
		"%{IncludeDir.boost}",
		"%{IncludeDir.cppglob}"
	}

	filter "toolset:msc"
		disablewarnings { "4244" }