cmake_minimum_required(VERSION 3.20)

project(Aero64Recompiled LANGUAGES C CXX)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Configure paths
set(ENGINE_DIR ${CMAKE_SOURCE_DIR}/engine)
set(RECOMP_DIR ${CMAKE_SOURCE_DIR}/recomp)
set(RUNTIME_DIR ${CMAKE_SOURCE_DIR}/runtime)
set(GAME_DIR ${CMAKE_SOURCE_DIR}/game)

# Engine Settings
set(RT64_STATIC TRUE)
set(RT64_SDL_WINDOW_VULKAN TRUE)
add_compile_definitions(HLSL_CPU)

# Configure Freetype for RmlUi on Windows
if (WIN32)
    set(FREETYPE_INCLUDE_DIRS "${ENGINE_DIR}/lib/freetype-windows-binaries/include" CACHE PATH "" FORCE)
    set(FREETYPE_LIBRARY "${ENGINE_DIR}/lib/freetype-windows-binaries/release static/vs2015-2022/win64/freetype.lib" CACHE FILEPATH "" FORCE)
    set(Freetype_FOUND TRUE CACHE BOOL "" FORCE)
endif()

# Add Engine Subdirectory (This will build RT64, RmlUi, etc.)
# Note: We need to point to engine's dependencies
add_subdirectory(${ENGINE_DIR}/lib/rt64 ${CMAKE_BINARY_DIR}/rt64)
set(BUILD_SHARED_LIBS OFF)
SET(LUNASVG_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(${ENGINE_DIR}/lib/lunasvg ${CMAKE_BINARY_DIR}/lunasvg)
SET(RMLUI_SVG_PLUGIN ON CACHE BOOL "" FORCE)
SET(RMLUI_TESTS_ENABLED OFF CACHE BOOL "" FORCE)
add_subdirectory(${ENGINE_DIR}/lib/RmlUi ${CMAKE_BINARY_DIR}/RmlUi)
add_subdirectory(${ENGINE_DIR}/lib/N64ModernRuntime ${CMAKE_BINARY_DIR}/N64ModernRuntime)

# RecompiledFuncs Library
add_library(RecompiledFuncs STATIC)
if(MSVC)
    target_compile_options(RecompiledFuncs PRIVATE /W0 /wd4101 /wd4102) # Disable all warnings for generated code
else()
    target_compile_options(RecompiledFuncs PRIVATE
        -fno-strict-aliasing
        -Wno-unused-variable
        -Wno-implicit-function-declaration
    )
endif()

target_include_directories(RecompiledFuncs PRIVATE
    ${ENGINE_DIR}/include
    ${ENGINE_DIR}/lib/N64ModernRuntime/ultramodern/include
    ${ENGINE_DIR}/lib/N64ModernRuntime/librecomp/include
    ${ENGINE_DIR}/lib/N64ModernRuntime/N64Recomp/include
)

file(GLOB RECOMP_SOURCES ${RECOMP_DIR}/*.c)
target_sources(RecompiledFuncs PRIVATE ${RECOMP_SOURCES})

# Patches Library
add_library(PatchesLib STATIC)
if(MSVC)
    target_compile_options(PatchesLib PRIVATE /W0)
else()
    target_compile_options(PatchesLib PRIVATE -fno-strict-aliasing -Wno-unused-variable)
endif()

target_include_directories(PatchesLib PRIVATE
    ${ENGINE_DIR}/include
    ${ENGINE_DIR}/lib/N64ModernRuntime/ultramodern/include
    ${ENGINE_DIR}/lib/N64ModernRuntime/librecomp/include
    ${ENGINE_DIR}/lib/N64ModernRuntime/N64Recomp/include
)

target_sources(PatchesLib PRIVATE ${RUNTIME_DIR}/dummy_patches.c)

# Main Executable
add_executable(Aero64Recompiled
    ${RUNTIME_DIR}/main.cpp
    # Add other runtime/game sources as we create them
)

target_include_directories(Aero64Recompiled PRIVATE
    ${ENGINE_DIR}/include
    ${ENGINE_DIR}/lib/N64ModernRuntime/N64Recomp/include
    ${ENGINE_DIR}/lib/N64ModernRuntime/librecomp/include
    ${ENGINE_DIR}/lib/N64ModernRuntime/ultramodern/include
    ${ENGINE_DIR}/lib/concurrentqueue
    ${ENGINE_DIR}/lib/GamepadMotionHelpers
    ${ENGINE_DIR}/lib/RmlUi/Include
    ${ENGINE_DIR}/lib/rt64/src
    ${RECOMP_DIR}
)

if (WIN32)
    include(FetchContent)
    set(SDL2_VERSION "2.30.3")
    FetchContent_Declare(sdl2 URL https://github.com/libsdl-org/SDL/releases/download/release-${SDL2_VERSION}/SDL2-devel-${SDL2_VERSION}-VC.zip)
    FetchContent_MakeAvailable(sdl2)
    target_include_directories(Aero64Recompiled PRIVATE ${sdl2_SOURCE_DIR}/include)
    target_link_directories(Aero64Recompiled PRIVATE ${sdl2_SOURCE_DIR}/lib/x64)
    target_link_libraries(Aero64Recompiled PRIVATE SDL2 Winmm.lib)
    
    # Copy DLLs
    add_custom_command(TARGET Aero64Recompiled POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${sdl2_SOURCE_DIR}/lib/x64/SDL2.dll"
            "${ENGINE_DIR}/lib/rt64/src/contrib/dxc/bin/x64/dxil.dll"
            "${ENGINE_DIR}/lib/rt64/src/contrib/dxc/bin/x64/dxcompiler.dll"
            $<TARGET_FILE_DIR:Aero64Recompiled>)
endif()

target_link_libraries(Aero64Recompiled PRIVATE
    PatchesLib
    RecompiledFuncs
    librecomp
    ultramodern
    rt64
    RmlUi::Core
    lunasvg
)
