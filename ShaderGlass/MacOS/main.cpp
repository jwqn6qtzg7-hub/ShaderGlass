/*
 * ShaderGlass macOS Port
 * Copyright (C) 2021-2025 mausimus (mausimus.net)
 * https://github.com/mausimus/ShaderGlass
 * GNU General Public License v3.0
 */

#include "VulkanCore.h"

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <array>
#include <stdexcept>

// Use ShaderGC's GLSL compiler for runtime shader compilation
#include "GLSL.h"

static const uint32_t WIDTH  = 800;
static const uint32_t HEIGHT = 600;

static VkShaderModule createShaderModule(VkDevice device, const std::vector<uint32_t>& spirv)
{
    VkShaderModuleCreateInfo ci {};
    ci.sType    = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    ci.codeSize = spirv.size() * sizeof(uint32_t);
    ci.pCode    = spirv.data();
    VkShaderModule module;
    if(vkCreateShaderModule(device, &ci, nullptr, &module) != VK_SUCCESS)
        throw std::runtime_error("Failed to create shader module");
    return module;
}

static void createPipeline(VkDevice device, VkRenderPass renderPass, VkExtent2D extent,
                           VkPipelineLayout& layout, VkPipeline& pipeline,
                           VkShaderModule vertModule, VkShaderModule fragModule)
{
    // Pipeline layout (empty for now - no descriptors)
    VkPipelineLayoutCreateInfo plCI {};
    plCI.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    if(vkCreatePipelineLayout(device, &plCI, nullptr, &layout) != VK_SUCCESS)
        throw std::runtime_error("Failed to create pipeline layout");

    VkPipelineShaderStageCreateInfo vertStage {};
    vertStage.sType  = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    vertStage.stage  = VK_SHADER_STAGE_VERTEX_BIT;
    vertStage.module = vertModule;
    vertStage.pName  = "main";

    VkPipelineShaderStageCreateInfo fragStage {};
    fragStage.sType  = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    fragStage.stage  = VK_SHADER_STAGE_FRAGMENT_BIT;
    fragStage.module = fragModule;
    fragStage.pName  = "main";

    VkPipelineShaderStageCreateInfo stages[] = {vertStage, fragStage};

    // Dynamic state: viewport + scissor
    VkDynamicState dynamicStates[] = {VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
    VkPipelineDynamicStateCreateInfo dynamicState {};
    dynamicState.sType             = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    dynamicState.dynamicStateCount = 2;
    dynamicState.pDynamicStates    = dynamicStates;

    // Vertex input (no vertex buffer - we use gl_VertexIndex)
    VkPipelineVertexInputStateCreateInfo vertexInput {};
    vertexInput.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;

    VkPipelineInputAssemblyStateCreateInfo inputAssembly {};
    inputAssembly.sType    = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    inputAssembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

    VkViewport viewport {};
    viewport.x        = 0.0f;
    viewport.y        = 0.0f;
    viewport.width    = (float)extent.width;
    viewport.height   = (float)extent.height;
    viewport.minDepth = 0.0f;
    viewport.maxDepth = 1.0f;
    VkRect2D scissor {{0, 0}, extent};

    VkPipelineViewportStateCreateInfo viewportState {};
    viewportState.sType         = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    viewportState.viewportCount = 1;
    viewportState.pViewports    = &viewport;
    viewportState.scissorCount  = 1;
    viewportState.pScissors     = &scissor;

    VkPipelineRasterizationStateCreateInfo rasterizer {};
    rasterizer.sType       = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    rasterizer.polygonMode = VK_POLYGON_MODE_FILL;
    rasterizer.cullMode    = VK_CULL_MODE_NONE;
    rasterizer.frontFace   = VK_FRONT_FACE_CLOCKWISE;
    rasterizer.lineWidth   = 1.0f;

    VkPipelineMultisampleStateCreateInfo multisampling {};
    multisampling.sType                = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    multisampling.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    VkPipelineColorBlendAttachmentState colorBlend {};
    colorBlend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
                                VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;

    VkPipelineColorBlendStateCreateInfo colorBlending {};
    colorBlending.sType           = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    colorBlending.attachmentCount = 1;
    colorBlending.pAttachments    = &colorBlend;

    VkGraphicsPipelineCreateInfo pipelineCI {};
    pipelineCI.sType               = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    pipelineCI.stageCount          = 2;
    pipelineCI.pStages             = stages;
    pipelineCI.pVertexInputState   = &vertexInput;
    pipelineCI.pInputAssemblyState = &inputAssembly;
    pipelineCI.pViewportState      = &viewportState;
    pipelineCI.pRasterizationState = &rasterizer;
    pipelineCI.pMultisampleState   = &multisampling;
    pipelineCI.pColorBlendState    = &colorBlending;
    pipelineCI.pDynamicState       = &dynamicState;
    pipelineCI.layout              = layout;
    pipelineCI.renderPass          = renderPass;
    pipelineCI.subpass             = 0;

    if(vkCreateGraphicsPipelines(device, VK_NULL_HANDLE, 1, &pipelineCI, nullptr, &pipeline) != VK_SUCCESS)
        throw std::runtime_error("Failed to create graphics pipeline");
}

int main()
{
    try
    {
        // Initialize GLFW
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
        GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "ShaderGlass", nullptr, nullptr);
        if(!window)
        {
            glfwTerminate();
            return EXIT_FAILURE;
        }

        // Initialize Vulkan
        VulkanCore vk;
        vk.init(window);

        // Compile test shaders using ShaderGC's GLSL compiler
        const char* vertSource = R"(
#version 450
vec2 positions[3] = vec2[](
    vec2(-1.0, -1.0), vec2(3.0, -1.0), vec2(-1.0, 3.0)
);
void main() {
    gl_Position = vec4(positions[gl_VertexIndex], 0.0, 1.0);
}
)";
        const char* fragSource = R"(
#version 450
layout(location = 0) out vec4 outColor;
void main() {
    outColor = vec4(1.0, 0.0, 0.0, 1.0);
}
)";

        std::ostringstream log;
        bool               warn = false;
        auto vertSPIRV = GLSL::GenerateSPIRV(vertSource, false, log, warn);
        auto fragSPIRV = GLSL::GenerateSPIRV(fragSource, true, log, warn);

        // Create shader modules
        auto vertModule = createShaderModule(vk.device, vertSPIRV);
        auto fragModule = createShaderModule(vk.device, fragSPIRV);

        // Create pipeline
        VkPipelineLayout pipelineLayout;
        VkPipeline       pipeline;
        createPipeline(vk.device, vk.mainRenderPass, vk.swapChainExtent,
                       pipelineLayout, pipeline, vertModule, fragModule);

        // Clean up shader modules (pipeline holds the reference)
        vkDestroyShaderModule(vk.device, vertModule, nullptr);
        vkDestroyShaderModule(vk.device, fragModule, nullptr);

        std::cout << "[ShaderGlass] Rendering started. Press Escape to quit." << std::endl;

        // Main loop
        while(!glfwWindowShouldClose(window))
        {
            glfwPollEvents();
            if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
                glfwSetWindowShouldClose(window, GLFW_TRUE);

            vk.beginFrame();

            VkClearValue clearValue = {{{0.0f, 0.0f, 0.0f, 1.0f}}};
            VkRenderPassBeginInfo rpBI {};
            rpBI.sType             = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
            rpBI.renderPass        = vk.mainRenderPass;
            rpBI.framebuffer       = vk.framebuffers[vk.imageIndex];
            rpBI.renderArea.extent = vk.swapChainExtent;
            rpBI.clearValueCount   = 1;
            rpBI.pClearValues      = &clearValue;

            auto cmd = vk.commandBuffers[vk.currentFrame];
            vkCmdBeginRenderPass(cmd, &rpBI, VK_SUBPASS_CONTENTS_INLINE);
            vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);

            VkViewport viewport {};
            viewport.x        = 0;
            viewport.y        = 0;
            viewport.width    = (float)vk.swapChainExtent.width;
            viewport.height   = (float)vk.swapChainExtent.height;
            viewport.minDepth = 0.0f;
            viewport.maxDepth = 1.0f;
            vkCmdSetViewport(cmd, 0, 1, &viewport);

            VkRect2D scissor {{0, 0}, vk.swapChainExtent};
            vkCmdSetScissor(cmd, 0, 1, &scissor);

            vkCmdDraw(cmd, 3, 1, 0, 0);
            vkCmdEndRenderPass(cmd);

            vk.endFrame();
        }

        vkDeviceWaitIdle(vk.device);

        // Cleanup
        vkDestroyPipeline(vk.device, pipeline, nullptr);
        vkDestroyPipelineLayout(vk.device, pipelineLayout, nullptr);
        vk.cleanup();

        glfwDestroyWindow(window);
        glfwTerminate();

        return EXIT_SUCCESS;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Fatal error: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}
