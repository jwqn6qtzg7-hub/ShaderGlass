#include "VulkanPass.h"
#include "GLSL.h"

#include <cstring>
#include <iostream>
#include <sstream>

VulkanPass::VulkanPass(ShaderDef& sd, const std::map<std::string, TextureSamplerSettings>& ts, bool pp)
    : m_shaderDef(sd), m_texSettings(ts), m_preprocess(pp)
{
    std::ostringstream log; bool warn = false;
    m_vSPIRV = GLSL::GenerateSPIRV(sd.VertexSource, false, log, warn);
    m_fSPIRV = GLSL::GenerateSPIRV(sd.FragmentSource, true, log, warn);

    size_t cs = sd.ParamsSize(0), ps = sd.ParamsSize(-1);
    m_hasConst = (cs > 0); m_hasPush = (ps > 0);
    if(m_hasConst) m_uboData.resize(cs);
    if(m_hasPush) m_pushData.resize(ps);
    for(auto& p : sd.Params) setParam(p.name, &p.defaultValue);

    memset(&m_mvp, 0, sizeof(m_mvp));
    m_mvp.m[0][0] = 2.0f; m_mvp.m[1][1] = 2.0f;
    m_mvp.m[3][0] = -1.0f; m_mvp.m[3][1] = -1.0f; m_mvp.m[3][3] = 1.0f;

    if(m_preprocess)
    {
        memcpy(&m_cursorMVP, &m_mvp, sizeof(m_cursorMVP));
        for(auto& s : sd.Samplers)
            if(s.name == "Source") { m_srcBinding = s.binding; break; }
    }
}

void VulkanPass::init(VulkanCore& vk, VkRenderPass rp, uint32_t sp)
{
    VkShaderModuleCreateInfo sm {};
    sm.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    sm.codeSize = m_vSPIRV.size() * 4; sm.pCode = m_vSPIRV.data();
    vkCreateShaderModule(vk.device, &sm, nullptr, &m_vMod);
    sm.codeSize = m_fSPIRV.size() * 4; sm.pCode = m_fSPIRV.data();
    vkCreateShaderModule(vk.device, &sm, nullptr, &m_fMod);

    createDescSetLayout(vk);
    createPipeline(vk, rp, sp);
    createBuffers(vk);
    createSamplers(vk);

    std::vector<VkDescriptorPoolSize> ps;
    if(m_hasConst) ps.push_back({VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1});
    if(m_hasPush)  ps.push_back({VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1});
    size_t sc = m_shaderDef.Samplers.size();
    if(sc) ps.push_back({VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, (uint32_t)sc});

    VkDescriptorPoolCreateInfo dp {};
    dp.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    dp.maxSets = 1; dp.poolSizeCount = (uint32_t)ps.size(); dp.pPoolSizes = ps.data();
    vkCreateDescriptorPool(vk.device, &dp, nullptr, &m_dp);

    VkDescriptorSetAllocateInfo da {};
    da.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
    da.descriptorPool = m_dp; da.descriptorSetCount = 1; da.pSetLayouts = &m_dsl;
    vkAllocateDescriptorSets(vk.device, &da, &m_ds);
}

void VulkanPass::createDescSetLayout(VulkanCore& vk)
{
    std::vector<VkDescriptorSetLayoutBinding> b;
    if(m_hasConst) b.push_back({0, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1,
                                 VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, nullptr});
    if(m_hasPush)  b.push_back({1, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1,
                                 VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT, nullptr});
    for(auto& s : m_shaderDef.Samplers)
        b.push_back({(uint32_t)s.binding, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1,
                      VK_SHADER_STAGE_FRAGMENT_BIT, nullptr});

    VkDescriptorSetLayoutCreateInfo ci {};
    ci.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    ci.bindingCount = (uint32_t)b.size(); ci.pBindings = b.data();
    vkCreateDescriptorSetLayout(vk.device, &ci, nullptr, &m_dsl);
}

void VulkanPass::createPipeline(VulkanCore& vk, VkRenderPass rp, uint32_t sp)
{
    VkPipelineLayoutCreateInfo pl {};
    pl.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    pl.setLayoutCount = 1; pl.pSetLayouts = &m_dsl;
    vkCreatePipelineLayout(vk.device, &pl, nullptr, &m_pipeLayout);

    VkPipelineShaderStageCreateInfo ss[2] {};
    ss[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    ss[0].stage = VK_SHADER_STAGE_VERTEX_BIT; ss[0].module = m_vMod; ss[0].pName = "main";
    ss[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    ss[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT; ss[1].module = m_fMod; ss[1].pName = "main";

    VkVertexInputBindingDescription vb {0, (uint32_t)VS, VK_VERTEX_INPUT_RATE_VERTEX};
    VkVertexInputAttributeDescription va[2] {
        {0, 0, VK_FORMAT_R32G32B32A32_SFLOAT, 0},
        {1, 0, VK_FORMAT_R32G32_SFLOAT, 16},
    };
    VkPipelineVertexInputStateCreateInfo vi {};
    vi.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    vi.vertexBindingDescriptionCount = 1; vi.pVertexBindingDescriptions = &vb;
    vi.vertexAttributeDescriptionCount = 2; vi.pVertexAttributeDescriptions = va;

    VkPipelineInputAssemblyStateCreateInfo ia {};
    ia.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    ia.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP;

    VkDynamicState dyn[] = {VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
    VkPipelineDynamicStateCreateInfo ds {};
    ds.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    ds.dynamicStateCount = 2; ds.pDynamicStates = dyn;

    VkPipelineViewportStateCreateInfo vs {};
    vs.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    vs.viewportCount = 1; vs.scissorCount = 1;

    VkPipelineRasterizationStateCreateInfo rs {};
    rs.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    rs.polygonMode = VK_POLYGON_MODE_FILL; rs.cullMode = VK_CULL_MODE_NONE;
    rs.frontFace = VK_FRONT_FACE_CLOCKWISE; rs.lineWidth = 1.0f;

    VkPipelineMultisampleStateCreateInfo ms {};
    ms.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    ms.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;

    VkPipelineColorBlendAttachmentState cb {};
    cb.colorWriteMask = 0xf;
    if(m_preprocess)
    {
        cb.blendEnable = VK_TRUE;
        cb.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
        cb.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        cb.colorBlendOp = VK_BLEND_OP_ADD;
        cb.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        cb.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
        cb.alphaBlendOp = VK_BLEND_OP_ADD;
    }

    VkPipelineColorBlendStateCreateInfo cbs {};
    cbs.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    cbs.attachmentCount = 1; cbs.pAttachments = &cb;

    VkGraphicsPipelineCreateInfo pi {};
    pi.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    pi.stageCount = 2; pi.pStages = ss;
    pi.pVertexInputState = &vi; pi.pInputAssemblyState = &ia;
    pi.pViewportState = &vs; pi.pRasterizationState = &rs;
    pi.pMultisampleState = &ms; pi.pColorBlendState = &cbs;
    pi.pDynamicState = &ds;
    pi.layout = m_pipeLayout; pi.renderPass = rp; pi.subpass = sp;
    vkCreateGraphicsPipelines(vk.device, VK_NULL_HANDLE, 1, &pi, nullptr, &m_pipe);
}

void VulkanPass::createBuffers(VulkanCore& vk)
{
    VkDeviceSize sz = sizeof(VD);
    vk.createBuffer(sz, VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
                    VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                    m_vertBuf, m_vertMem);
    void* p; vkMapMemory(vk.device, m_vertMem, 0, sz, 0, &p); memcpy(p, VD, sz); vkUnmapMemory(vk.device, m_vertMem);

    if(m_hasConst)
        vk.createBuffer((m_uboData.size() + 15) & ~15, VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT,
                        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                        m_constBuf, m_constMem);
    if(m_hasPush)
        vk.createBuffer((m_pushData.size() + 15) & ~15, VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT,
                        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                        m_pushBuf, m_pushMem);
}

void VulkanPass::createSamplers(VulkanCore& vk)
{
    m_samplers.resize(m_shaderDef.Samplers.size());
    for(size_t i = 0; i < m_shaderDef.Samplers.size(); i++)
    {
        const auto& s = m_shaderDef.Samplers[i];
        VkSamplerCreateInfo si {};
        si.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
        si.magFilter = VK_FILTER_NEAREST; si.minFilter = VK_FILTER_NEAREST;
        si.mipmapMode = VK_SAMPLER_MIPMAP_MODE_NEAREST;
        si.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
        si.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
        si.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
        si.minLod = 0.0f; si.maxLod = VK_LOD_CLAMP_NONE;
        si.borderColor = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;

        auto ti = m_texSettings.find(s.name);
        if(ti != m_texSettings.end())
        {
            if(ti->second.linear) { si.magFilter = VK_FILTER_LINEAR; si.minFilter = VK_FILTER_LINEAR; }
            if(ti->second.repeat) { si.addressModeU = VK_SAMPLER_ADDRESS_MODE_REPEAT; si.addressModeV = VK_SAMPLER_ADDRESS_MODE_REPEAT; si.addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT; }
            if(ti->second.clamp)  { si.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE; si.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE; si.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE; }
            if(ti->second.mirror) { si.addressModeU = VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT; si.addressModeV = VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT; si.addressModeW = VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT; }
        }
        vkCreateSampler(vk.device, &si, nullptr, &m_samplers[i]);
    }
}

void VulkanPass::updateDescSet(VulkanCore& vk, VkImageView srcView, VkSampler srcSamp,
                                const std::map<std::string, VkImageView>& res,
                                const std::map<std::string, VkSampler>& samps)
{
    std::vector<VkWriteDescriptorSet> w;
    std::vector<VkDescriptorBufferInfo> bi;
    std::vector<VkDescriptorImageInfo> ii;

    if(m_hasConst) {
        bi.push_back({m_constBuf, 0, VK_WHOLE_SIZE});
        w.push_back({VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, nullptr, m_ds, 0, 0, 1,
                     VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, nullptr, nullptr, nullptr});
    }
    if(m_hasPush) {
        bi.push_back({m_pushBuf, 0, VK_WHOLE_SIZE});
        w.push_back({VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, nullptr, m_ds, 1, 0, 1,
                     VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, nullptr, nullptr, nullptr});
    }

    for(size_t i = 0; i < m_shaderDef.Samplers.size(); i++)
    {
        const auto& sd = m_shaderDef.Samplers[i];
        VkImageView v = VK_NULL_HANDLE; VkSampler sp = m_samplers[i];
        if(sd.name == "Source" && srcView) { v = srcView; if(srcSamp) sp = srcSamp; }
        else {
            auto it = res.find(sd.name);
            if(it == res.end() && sd.name.starts_with("OriginalHistory")) it = res.find("Original");
            if(it != res.end()) { v = it->second; auto si = samps.find(sd.name); if(si != samps.end()) sp = si->second; }
        }
        ii.push_back({sp, v, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL});
        w.push_back({VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, nullptr, m_ds, (uint32_t)sd.binding, 0, 1,
                     VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, nullptr, nullptr, nullptr});
    }

    size_t bx = 0, ix = 0;
    for(auto& ww : w) {
        if(ww.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) ww.pBufferInfo = &bi[bx++];
        else ww.pImageInfo = &ii[ix++];
    }
    vkUpdateDescriptorSets(vk.device, (uint32_t)w.size(), w.data(), 0, nullptr);
}

void VulkanPass::render(VulkanCore& vk, VkCommandBuffer cmd,
                         VkImageView srcView, VkSampler srcSamp,
                         const std::map<std::string, VkImageView>& res,
                         const std::map<std::string, VkSampler>& samps,
                         int fc, int bx, int by, int dw, int dh)
{
    setParam("MVP", &m_mvp);
    setParam("FrameCount", &fc);

    if(m_hasConst) { void* p; vkMapMemory(vk.device, m_constMem, 0, VK_WHOLE_SIZE, 0, &p); memcpy(p, m_uboData.data(), m_uboData.size()); vkUnmapMemory(vk.device, m_constMem); }
    if(m_hasPush)  { void* p; vkMapMemory(vk.device, m_pushMem, 0, VK_WHOLE_SIZE, 0, &p); memcpy(p, m_pushData.data(), m_pushData.size()); vkUnmapMemory(vk.device, m_pushMem); }

    vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, m_pipe);
    VkViewport vp {(float)bx, (float)by, (float)dw, (float)dh, 0.0f, 1.0f};
    vkCmdSetViewport(cmd, 0, 1, &vp);
    VkRect2D sc {{bx, by}, {(uint32_t)dw, (uint32_t)dh}};
    vkCmdSetScissor(cmd, 0, 1, &sc);
    VkDeviceSize off = 0;
    vkCmdBindVertexBuffers(cmd, 0, 1, &m_vertBuf, &off);

    updateDescSet(vk, srcView, srcSamp, res, samps);
    vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, m_pipeLayout, 0, 1, &m_ds, 0, nullptr);
    vkCmdDraw(cmd, VC, 1, m_preprocess ? 0 : 4, 0);
}

void VulkanPass::setParam(const std::string& name, const void* v)
{
    for(auto& p : m_shaderDef.Params)
    {
        if(p.name == name)
        {
            uint8_t* buf = (p.buffer == -1) ? m_pushData.data() : m_uboData.data();
            if(buf)
            {
                size_t maxSz = (p.buffer == -1) ? m_pushData.size() : m_uboData.size();
                if((size_t)(p.offset + p.size) <= maxSz)
                {
                    if(p.size == 4) p.currentValue = *(const float*)v;
                    memcpy(buf + p.offset, v, p.size);
                }
            }
        }
    }
}

void VulkanPass::fillParams(int buffer, void* data)
{
    auto& src = (buffer == -1) ? m_pushData : m_uboData;
    if(!src.empty()) memcpy(data, src.data(), src.size());
}

std::vector<ShaderParam*> VulkanPass::params()
{
    std::vector<ShaderParam*> r;
    for(auto& p : m_shaderDef.Params) r.push_back(&p);
    return r;
}

void VulkanPass::resize(int sw, int sh, int dw, int dh,
                         const std::map<std::string, float4>& texSizes,
                         const std::vector<std::array<uint32_t, 4>>& passSizes)
{
    m_destW = dw; m_destH = dh;
    float s[4] = {(float)sw, (float)sh, 1.0f/sw, 1.0f/sh};
    float d[4] = {(float)dw, (float)dh, 1.0f/dw, 1.0f/dh};
    setParam("SourceSize", s); setParam("OutputSize", d);
    for(auto& t : texSizes) setParam(t.first + "Size", (void*)&t.second);
    for(size_t i = 0; i < passSizes.size(); i++)
        if(passSizes[i][2] && passSizes[i][3])
        {
            float f[4] = {(float)passSizes[i][2], (float)passSizes[i][3], 1.0f/passSizes[i][2], 1.0f/passSizes[i][3]};
            setParam("PassOutputSize" + std::to_string(i), f);
        }
}

void VulkanPass::updateMVP(float sx, float sy, float tx, float ty)
{
    m_mvp.m[0][0] = sx; m_mvp.m[1][1] = sy; m_mvp.m[3][0] = tx; m_mvp.m[3][1] = ty;
}

bool VulkanPass::requiresFeedback() const
{
    for(auto& t : m_shaderDef.Samplers)
        if(t.name.ends_with("Feedback") || t.name.starts_with("PassFeedback")) return true;
    return false;
}

int VulkanPass::requiresHistory() const
{
    int mh = 0;
    for(auto& t : m_shaderDef.Samplers)
        if(t.name.starts_with("OriginalHistory"))
            try { int n = std::stoi(t.name.substr(15)); if(n > 0 && n < 100) mh = std::max(mh, n); } catch(...) {}
    return mh;
}
