#pragma once

#include "VulkanCore.h"

#include "ShaderDef.h"

#include <map>
#include <string>
#include <vector>
#include <array>

struct TextureSamplerSettings
{
    bool linear = false;
    bool clamp  = false;
    bool repeat = false;
    bool mirror = false;
};

// Forward declarations matching Shader.h types
struct float4 { float x, y, z, w; };
union float4x4 {
    float m[4][4];
    float4 cols[4];
};

// Vulkan equivalent of ShaderPass + Shader combined
class VulkanPass
{
public:
    VulkanPass(ShaderDef& shaderDef, const std::map<std::string, TextureSamplerSettings>& texSettings, bool preprocess);
    ~VulkanPass() = default;

    void init(VulkanCore& vk, VkRenderPass renderPass, uint32_t subpass);
    void render(VulkanCore& vk, VkCommandBuffer cmd,
                VkImageView sourceView, VkSampler sourceSampler,
                const std::map<std::string, VkImageView>& resources,
                const std::map<std::string, VkSampler>&   resourceSamplers,
                int frameCount, int boxX, int boxY,
                int destW, int destH);
    void resize(int srcW, int srcH, int dstW, int dstH,
                const std::map<std::string, float4>& texSizes,
                const std::vector<std::array<uint32_t, 4>>& passSizes);
    void updateMVP(float sx, float sy, float tx, float ty);
    void setParam(const std::string& name, const void* v);
    void fillParams(int buffer, void* data);
    size_t bufferSize(int buffer) { return (size_t)m_shaderDef.ParamsSize(buffer); }
    bool requiresFeedback() const;
    int  requiresHistory() const;
    std::vector<ShaderParam*> params();

    int destW() const { return m_destW; }
    int destH() const { return m_destH; }
    int sourceBinding() const { return m_srcBinding; }
    ShaderDef& shaderDef() { return m_shaderDef; }

private:
    void createDescSetLayout(VulkanCore& vk);
    void createPipeline(VulkanCore& vk, VkRenderPass rp, uint32_t sp);
    void createBuffers(VulkanCore& vk);
    void createSamplers(VulkanCore& vk);
    void updateDescSet(VulkanCore& vk, VkImageView srcView, VkSampler srcSamp,
                       const std::map<std::string, VkImageView>& res,
                       const std::map<std::string, VkSampler>& samps);

    ShaderDef& m_shaderDef;
    std::map<std::string, TextureSamplerSettings> m_texSettings;
    bool m_preprocess;

    std::vector<uint8_t> m_uboData;
    std::vector<uint8_t> m_pushData;

    std::vector<uint32_t> m_vSPIRV;
    std::vector<uint32_t> m_fSPIRV;

    VkShaderModule m_vMod {VK_NULL_HANDLE};
    VkShaderModule m_fMod {VK_NULL_HANDLE};
    VkPipelineLayout m_pipeLayout {VK_NULL_HANDLE};
    VkDescriptorSetLayout m_dsl {VK_NULL_HANDLE};
    VkPipeline m_pipe {VK_NULL_HANDLE};

    VkBuffer m_constBuf {VK_NULL_HANDLE}, m_pushBuf {VK_NULL_HANDLE}, m_vertBuf {VK_NULL_HANDLE};
    VkDeviceMemory m_constMem {VK_NULL_HANDLE}, m_pushMem {VK_NULL_HANDLE}, m_vertMem {VK_NULL_HANDLE};

    std::vector<VkSampler> m_samplers;
    VkDescriptorPool m_dp {VK_NULL_HANDLE};
    VkDescriptorSet  m_ds {VK_NULL_HANDLE};

    int  m_srcBinding {-1};
    bool m_hasConst {false}, m_hasPush {false};
    float4x4 m_mvp {};
    float4x4 m_cursorMVP {};
    int m_destW {0}, m_destH {0};

    static constexpr int VC = 4;
    static constexpr int VS = 24;
    static constexpr float VD[48] = {
        -1,-1,0,1,0,1,  -1,1,0,1,0,0,  1,-1,0,1,1,1,  1,1,0,1,1,0,
         0, 0,0,1,0,1,   0,1,0,1,0,0,  1, 0,0,1,1,1,  1,1,0,1,1,0,
    };
};
