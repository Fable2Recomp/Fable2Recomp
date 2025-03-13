Workspace = "workspace/".._ACTION

-- Compilers

-- x86/x64
PlatformMSVC64			= "MSVC 64"
PlatformOSX64			= "OSX 64"
PlatformLinux64_GCC		= "Linux64_GCC"
PlatformLinux64_Clang	= "Linux64_Clang"

isMacBuild = _ACTION == "xcode4"
isLinuxBuild = _ACTION == "gmake2"
isWindowsBuild = not isMacBuild and not isLinuxBuild
supportsARMBuild = _ACTION == "vs2017" or _ACTION == "vs2019" or _ACTION == "vs2022"

workspace("dds++")
	configurations { "Debug", "Release" }
	location (Workspace)
	
	flags
	{
		"multiprocessorcompile", -- /MP
	}
	
	includedirs
	{
		includeDir,
	}
	
	cppdialect("c++11")
		
	if(isMacBuild) then
	
		platforms { PlatformOSX64 }
		toolset("clang")
		architecture("x64")
		buildoptions { "-std=c++11 -Wno-unused-variable" }
		linkoptions { "-stdlib=libc++" }
		
	elseif(isLinuxBuild) then
	
		platforms { PlatformLinux64_GCC, PlatformLinux64_Clang }
		architecture("x64")
		buildoptions { "-std=c++11 -Wno-unused-variable" }
		
		filter { "platforms:"..PlatformLinux64_GCC }
			toolset("gcc")
		
		filter { "platforms:"..PlatformLinux64_Clang }
			toolset("clang")
		
	else
	
		platforms
		{
			PlatformMSVC64
		}
	
		local llvmToolset;
		
		if (_ACTION == "vs2015") then
			llvmToolset = "msc-llvm-vs2014";
		elseif(_ACTION == "vs2017") then
			llvmToolset = "msc-llvm";
		else
			llvmToolset = "msc-clangcl";
		end
		
		startproject(UnitTestProject)
		
		filter { "platforms:"..PlatformMSVC64 }
			toolset("msc")
			architecture("x64")
			
		filter{}
	end
	
	filter { "configurations:Debug" }
		defines { "DEBUG" }
		symbols ("full")
		optimize("debug")
		
	filter { "configurations:Release" }
		defines { "NDEBUG" }
		inlining("auto")
		optimize("speed")

project ('dds++')
	kind("consoleapp")

	files
	{
		"*.cpp",
		"*.h",
	}