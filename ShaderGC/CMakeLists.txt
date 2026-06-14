# ShaderGC - static library for shader compilation (GLSL → SPIR-V → HLSL → DXBC)
# On macOS/Vulkan, skips the HLSL→DXBC step; shaders stay as SPIR-V

add_library(ShaderGC STATIC
    # Core
    ShaderGC.cpp
    ShaderCache.cpp
    sha256.cpp
    pch.cpp

    # GLSL → SPIR-V (cross-platform)
    GLSL.cpp

    # SPIR-V cross-compilation / reflection
    SPIRV.cpp
)

# HLSL → DXBC is Windows-only
if(WIN32)
    target_sources(ShaderGC PRIVATE HLSL.cpp)
endif()

target_include_directories(ShaderGC PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include/glslang
)

# Additional include dirs for FetchContent-built glslang and SPIRV-Cross
target_include_directories(ShaderGC PRIVATE
    ${glslang_SOURCE_DIR}
    ${spirv-cross_SOURCE_DIR}
)

target_link_libraries(ShaderGC PUBLIC
    glslang
    glslang-default-resource-limits
    spirv-cross-core
    spirv-cross-hlsl
    spirv-cross-glsl
    spirv-cross-reflect
)

# C++20 standard
target_compile_features(ShaderGC PUBLIC cxx_std_20)

# Mac compatibility header for non-MSVC builds
if(APPLE)
    target_compile_options(ShaderGC PRIVATE
        -include "${CMAKE_CURRENT_SOURCE_DIR}/MacCompat.h"
    )
endif()

target_compile_definitions(ShaderGC PUBLIC
    $<$<BOOL:${APPLE}>:MACOS_PORT>
    $<$<BOOL:${APPLE}>:VULKAN_PORT>
)
