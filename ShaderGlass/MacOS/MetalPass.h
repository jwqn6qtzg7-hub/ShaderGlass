#pragma once

#include "MetalCore.h"
#include "MetalTexture.h"

#include "ShaderDef.h"

#include <map>
#include <string>
#include <vector>
#include <array>

struct float4 { float x, y, z, w; };
union float4x4 {
    float m[4][4];
    float4 cols[4];
};

class MetalPass
{
public:
    MetalPass(MetalCore& mc, ShaderDef& shaderDef, bool preprocess);
    ~MetalPass();

    // Source texture/sampler is bound to the sampler named "Source" (or
    // m_srcBinding if the shader renamed it). The chain code passes the
    // source texture; the pass supplies its own source sampler derived
    // from its PresetParams (filter_linear / wrap_mode / mipmap).
    void render(MetalCore& mc,
                void* sourceTexture, void* sourceSampler,
                const std::map<std::string, void*>& resources,
                const std::map<std::string, void*>& resourceSamplers,
                int frameCount, int boxX, int boxY, int destW, int destH,
                void* rpDesc);

    void resize(int srcW, int srcH, int dstW, int dstH,
                const std::map<std::string, float4>& texSizes,
                const std::vector<std::array<uint32_t, 4>>& passSizes);
    void updateMVP(float sx, float sy, float tx, float ty);
    void setParam(const std::string& name, const void* v);
    void fillParams(int buffer, void* data);
    size_t bufferSize(int buffer) { return (size_t)m_shaderDef.ParamsSize(buffer); }

    // True if the pass references any feedback texture: PassFeedbackN
    // or any sampler name ending in "Feedback".
    bool requiresFeedback() const;

    // Number of OriginalHistoryN samplers referenced with N>0.
    // (OriginalHistory0 maps to Original; never counted.)
    int  requiresHistory() const;

    std::vector<ShaderParam*> params();

    int destW() const { return m_destW; }
    int destH() const { return m_destH; }
    int sourceBinding() const { return m_srcBinding; }

    // The sampler to bind to this pass's "Source" slot, derived from
    // the pass's PresetParams (filter_linear / wrap_mode / mipmap_input).
    void* sourceSampler() const { return m_sourceSampler; }

    // Per-slot sampler settings for any sampler in this pass whose name
    // matches an entry in the chain's per-name settings map. Used by
    // chain code to install a sampler with the right wrap/filter.
    TextureSamplerSettings samplerSettingsFor(const std::string& name) const;

    // Accessor used by the chain for aliasing pass output to additional
    // resource names.
    const ShaderDef& shaderDef() const { return m_shaderDef; }
    ShaderDef&       shaderDef()       { return m_shaderDef; }

    // Global filter override. When set, the source sampler ignores
    // the per-pass filter_linear PresetParam and uses linear
    // filtering. false (the default) preserves the per-pass
    // behavior the shader author requested.
    void setForceLinear(bool force) { m_forceLinear = force; }
    bool forceLinear() const       { return m_forceLinear; }

private:
    void compileShaders(MetalCore& mc);
    void createBuffers(MetalCore& mc);
    void buildSourceSampler(MetalCore& mc);

    // Look up a PresetParam from m_shaderDef.PresetParams with the given key,
    // returning an empty string if not present.
    std::string presetParam(const char* key) const;

    ShaderDef m_shaderDef;
    bool m_preprocess;

    std::vector<uint8_t> m_uboData;
    std::vector<uint8_t> m_pushData;

    void* m_pipelineState {nullptr};
    void* m_constBuf {nullptr};
    void* m_pushBuf {nullptr};
    void* m_vertBuf {nullptr};

    // Sampler used for this pass's "Source" slot. Owned by the pass;
    // rebuilt from PresetParams when buildSourceSampler() is called.
    void* m_sourceSampler {nullptr};

    int  m_srcBinding {-1};
    bool m_hasConst {false}, m_hasPush {false};
    bool m_forceLinear {false};
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
