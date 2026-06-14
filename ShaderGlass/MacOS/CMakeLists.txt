# ShaderGlass macOS port using GLFW + Vulkan (MoltenVK)

set(APP_NAME "ShaderGlass")

# Find required packages
find_package(glfw3 REQUIRED)
find_package(Vulkan REQUIRED)

# -------------------------------------------------------------------
# ImGui backends (compiled once as an object library)
# -------------------------------------------------------------------
add_library(imgui-backends OBJECT
    ${imgui_SOURCE_DIR}/backends/imgui_impl_glfw.cpp
    ${imgui_SOURCE_DIR}/backends/imgui_impl_vulkan.cpp
)
target_include_directories(imgui-backends PUBLIC
    ${imgui_SOURCE_DIR}
    ${imgui_SOURCE_DIR}/backends
)
target_link_libraries(imgui-backends PUBLIC glfw Vulkan::Vulkan)

# -------------------------------------------------------------------
# Main executable
# -------------------------------------------------------------------
add_executable(${APP_NAME}
    main.cpp
    VulkanCore.cpp
    VulkanPass.cpp
    VulkanTexture.cpp
    ShaderChain.cpp
    UI.cpp
    Capture.mm
    # ImGui core
    ${imgui_SOURCE_DIR}/imgui.cpp
    ${imgui_SOURCE_DIR}/imgui_draw.cpp
    ${imgui_SOURCE_DIR}/imgui_tables.cpp
    ${imgui_SOURCE_DIR}/imgui_widgets.cpp
    $<TARGET_OBJECTS:imgui-backends>
)

target_include_directories(${APP_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/ShaderGlass
    ${CMAKE_SOURCE_DIR}/ShaderGC
    ${imgui_SOURCE_DIR}
    ${imgui_SOURCE_DIR}/backends
)

target_link_libraries(${APP_NAME} PRIVATE
    glfw
    Vulkan::Vulkan
    ShaderGC
    "-framework ScreenCaptureKit"
    "-framework CoreMedia"
    "-framework CoreVideo"
    "-lobjc"
    "-framework Foundation"
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
