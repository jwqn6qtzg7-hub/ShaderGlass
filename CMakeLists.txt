cmake_minimum_required(VERSION 3.21)
project(ShaderGlass LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

include(FetchContent)

# -------------------------------------------------------------------
# SPIRV-Cross
# -------------------------------------------------------------------
FetchContent_Declare(
    spirv-cross
    GIT_REPOSITORY https://github.com/KhronosGroup/SPIRV-Cross.git
    GIT_TAG        vulkan-sdk-1.4.309.0
    GIT_SHALLOW    TRUE
)
set(SPIRV_CROSS_ENABLE_CPP OFF)
set(SPIRV_CROSS_ENABLE_HLSL ON)
set(SPIRV_CROSS_ENABLE_GLSL ON)
set(SPIRV_CROSS_ENABLE_REFLECT ON)
set(SPIRV_CROSS_CLI OFF)
FetchContent_MakeAvailable(spirv-cross)

# -------------------------------------------------------------------
# glslang
# -------------------------------------------------------------------
FetchContent_Declare(
    glslang
    GIT_REPOSITORY https://github.com/KhronosGroup/glslang.git
    GIT_TAG        vulkan-sdk-1.4.309.0
    GIT_SHALLOW    TRUE
)
set(ENABLE_GLSLANG_INSTALL OFF)
set(ENABLE_SPVREMAPPER OFF)
set(ENABLE_GLSLANG_BINARIES OFF)
set(ENABLE_OPT OFF)
set(BUILD_TESTING OFF)
set(BUILD_EXTERNAL OFF)
FetchContent_MakeAvailable(glslang)

# -------------------------------------------------------------------
# Sub-projects
# -------------------------------------------------------------------
add_subdirectory(ShaderGC)

if(APPLE)
    add_subdirectory(ShaderGlass/MacOS)
endif()
