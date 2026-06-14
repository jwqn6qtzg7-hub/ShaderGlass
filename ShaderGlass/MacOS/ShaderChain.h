#pragma once

#include "VulkanCore.h"
#include "VulkanPass.h"
#include "VulkanTexture.h"
#include "PresetDef.h"

#include <vector>
#include <map>
#include <string>
#include <array>
#include <memory>

// Manages the full multi-pass shader pipeline:
//   preprocess → pass[0] → pass[1] → ... → pass[N-1] → swapchain
//
// Each pass renders to an intermediate VulkanTexture, which becomes the
// Source for the next pass. Feedback and history textures are managed for
// temporal shader effects.

class ShaderChain
{
public:
    ShaderChain(VulkanCore& vk);
    ~ShaderChain();

    // Set the shader preset definition (shaders + textures)
    void setPreset(PresetDef* preset);

    // Rebuild all passes and intermediate textures. Call after setPreset()
    // or when the window/capture dimensions change.
    void rebuild(VulkanCore& vk);

    // Resize the chain for new capture and viewport dimensions.
    // Must be called before process() when dimensions change.
    void resize(VulkanCore& vk, int captureW, int captureH, int viewportW, int viewportH);

    // Update preprocess MVP (crop, scale, pan). sx/sy are scale, tx/ty translate.
    void updateMVP(float sx, float sy, float tx, float ty);

    // Process one frame: runs preprocess pass, then the shader chain,
    // rendering the last pass directly to the swapchain.
    // cmd must be inside the swapchain render pass (already begun).
    void process(VulkanCore& vk, VkCommandBuffer cmd,
                 VkImageView inputView, VkSampler inputSampler,
                 int frameNo, int logicalFrameNo);

    // Query
    std::vector<ShaderParam*> params();
    bool hasPreset() const { return m_preset != nullptr; }

private:
    void destroyPasses(VulkanCore& vk);
    void destroyTargets(VulkanCore& vk);
    void rebuildPasses(VulkanCore& vk);
    void calculatePassSizes();

    // Insert an image layout barrier between passes
    void transitionForRead(VulkanCore& vk, VkCommandBuffer cmd, VkImage image);

    VulkanCore& m_vk;

    // Current preset
    PresetDef* m_preset {nullptr};
    std::map<std::string, TextureSamplerSettings> m_texSettings;

    // Preprocess pass (always present)
    std::unique_ptr<VulkanPass>   m_preprocessPass;
    VulkanTexture                 m_preprocessTex;
    VkRenderPass                  m_preprocessRP {VK_NULL_HANDLE};

    // Shader passes (from preset)
    std::vector<std::unique_ptr<VulkanPass>> m_passes;
    std::vector<VulkanTexture>               m_passTexs;
    std::vector<VkRenderPass>                m_passRPs;

    // Resource maps
    std::map<std::string, VkImageView> m_resources;
    std::map<std::string, VkSampler>   m_samplers;
    std::map<std::string, float4>      m_texSizes;

    // Pass output sizes (width, height, 1/w, 1/h)
    std::vector<std::array<uint32_t, 4>> m_passSizes;

    // Feedback textures (read-only copies of previous frame's pass outputs)
    std::vector<VulkanTexture> m_feedbackTexs;
    bool m_requiresFeedback {false};

    // History textures (previous frames of Original input)
    std::vector<VulkanTexture> m_historyTexs;
    int m_requiresHistory {0};
    int m_historyWriteIndex {0};

    // Dimensions
    int m_captureW {0}, m_captureH {0};
    int m_viewportW {0}, m_viewportH {0};
    int m_originalW {0}, m_originalH {0};

    // MVP
    float m_mvpSX {2.0f}, m_mvpSY {2.0f};
    float m_mvpTX {-1.0f}, m_mvpTY {-1.0f};

    bool m_rebuildNeeded {true};
};
