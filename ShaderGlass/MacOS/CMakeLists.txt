# ShaderGlass macOS port using GLFW + Vulkan (MoltenVK)

set(APP_NAME "ShaderGlass")

# Find required packages
find_package(glfw3 REQUIRED)
find_package(Vulkan REQUIRED)

# -------------------------------------------------------------------
# Main executable
# -------------------------------------------------------------------
add_executable(${APP_NAME}
    main.cpp
    VulkanCore.cpp
    VulkanPass.cpp
)

target_include_directories(${APP_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(${APP_NAME} PRIVATE
    glfw
    Vulkan::Vulkan
    ShaderGC
)

target_compile_features(${APP_NAME} PRIVATE cxx_std_20)

# macOS bundle
set_target_properties(${APP_NAME} PROPERTIES
    MACOSX_BUNDLE TRUE
    MACOSX_BUNDLE_BUNDLE_NAME "ShaderGlass"
    MACOSX_BUNDLE_BUNDLE_VERSION "2.0.0"
    MACOSX_BUNDLE_SHORT_VERSION_STRING "2.0"
    MACOSX_BUNDLE_GUI_IDENTIFIER "net.mausimus.ShaderGlass"
    XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY ""
)

# Mac compatibility header
target_compile_options(${APP_NAME} PRIVATE
    "-include" "${CMAKE_SOURCE_DIR}/ShaderGC/MacCompat.h"
)
