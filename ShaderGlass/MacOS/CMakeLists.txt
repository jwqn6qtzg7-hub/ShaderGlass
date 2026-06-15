# ShaderGlass macOS port using GLFW + Metal

set(APP_NAME "ShaderGlass")

find_package(glfw3 REQUIRED)

# -------------------------------------------------------------------
# ImGui backends (compiled once as an object library)
# -------------------------------------------------------------------
add_library(imgui-backends OBJECT
    ${imgui_SOURCE_DIR}/backends/imgui_impl_glfw.cpp
    ${imgui_SOURCE_DIR}/backends/imgui_impl_metal.mm
)
target_include_directories(imgui-backends PUBLIC
    ${imgui_SOURCE_DIR}
    ${imgui_SOURCE_DIR}/backends
)
target_link_libraries(imgui-backends PUBLIC glfw
    "-framework Metal"
    "-framework QuartzCore"
)

# -------------------------------------------------------------------
# Main executable
# -------------------------------------------------------------------
add_executable(${APP_NAME}
    main.mm
    MetalCore.mm
    MetalPass.mm
    MetalTexture.mm
    MetalShaderChain.mm
    ImageIO.cpp
    Settings.cpp
    UI.mm
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
    ${stb_SOURCE_DIR}
    ${imgui_SOURCE_DIR}
    ${imgui_SOURCE_DIR}/backends
    ${spirv-cross_SOURCE_DIR}
)

target_link_libraries(${APP_NAME} PRIVATE
    glfw
    ShaderGC
    "-framework Metal"
    "-framework MetalKit"
    "-framework QuartzCore"
    "-framework ScreenCaptureKit"
    "-framework CoreMedia"
    "-framework CoreVideo"
    "-framework AppKit"
    "-framework UniformTypeIdentifiers"
    "-framework Foundation"
    "-lobjc"
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
# Enable ARC for Metal port files
set_source_files_properties(main.mm MetalCore.mm MetalPass.mm MetalTexture.mm MetalShaderChain.mm UI.mm
    PROPERTIES COMPILE_FLAGS "-fobjc-arc")
