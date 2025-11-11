workspace "FH_MAI1_CashewEngine"
    architecture "x64"
    configurations { "Debug", "Release", "Dist" }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Cashew"
    location "Cashew"
    kind "SharedLib"
    language "C++"
    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    files { "%{prj.name}/src/**.h", "%{prj.name}/src/**.cpp" }

    includedirs { "%{prj.name}/vendor/spdlog/include" }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines {
            "CASHEW_PLATFORM_WINDOWS",
            "CASHEW_BUILD_DLL",
        }

        postbuildcommands {
            ("{COPYFILE} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/CheeseHeist")
        }

        buildoptions { "/utf-8" }

    filter "configurations:Debug"
        defines { "CASHEW_DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "CASHEW_RELEASE" }
        optimize "On"

    filter "configurations:Dist"
        defines { "CASHEW_DIST" }
        optimize "On"

project "CheeseHeist"
    location "CheeseHeist"
    kind "ConsoleApp"
    language "C++"
    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    files { "%{prj.name}/src/**.h", "%{prj.name}/src/**.cpp" }

    includedirs { "Cashew/vendor/spdlog/include", "Cashew/src" }

    links { "Cashew" }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        defines {
            "CASHEW_PLATFORM_WINDOWS",
        }
        
        buildoptions { "/utf-8" }

    filter "configurations:Debug"
        defines { "CASHEW_DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "CASHEW_RELEASE" }
        optimize "On"

    filter "configurations:Dist"
        defines { "CASHEW_DIST" }
        optimize "On"