#pragma once

#include "MetalCore.h"
#include "MetalPass.h"
#include "MetalTexture.h"
#include "PresetDef.h"

#include <vector>
#include <map>
#include <string>
#include <array>
#include <memory>
#include <unordered_map>
#include <unordered_set>

class MetalShaderChain
{
public:
    MetalShaderChain(MetalCore& mc);
    ~MetalShaderChain();

    void setPreset(PresetDef* preset);
    void rebuild(MetalCore& mc);
    void resize(MetalCore& mc, int captureW, int captureH,
                int viewportW, int viewportH);
    // Mark the chain dirty so the next process() rebuilds. Use after
    // the window moves, resizes, or capture dimensions change.
    void invalidate() { m_rebuildNeeded = true; }
    void updateMVP(float sx, float sy, float tx, float ty);

    // Output scale multiplier. The chain's last user-defined pass
    // renders to an offscreen texture sized
    //     viewportW * scale x viewportH * scale
    // which is then blitted (with linear filtering) onto the
    // drawable. Values > 1.0 give a higher-resolution shader
    // effect (clipped to the drawable); < 1.0 give a softer look.
    void  setScale(float s)               { m_scale = (s > 0.0f ? s : 1.0f); }
    float scale() const                   { return m_scale; }

    // When true, every pass's Source sampler ignores the per-pass
    // filter_linear PresetParam and uses linear filtering.
    void setForceLinear(bool force);

    void process(MetalCore& mc,
                 void* inputTexture, void* inputSampler,
                 int frameNo, int logicalFrameNo);

    // Debug: skip the chain and draw `inputTexture` (the cropped
    // BGRA capture, sampled with `inputSampler`) directly to the
    // drawable, sized at the drawable's current dimensions. Uses
    // the same preprocess MetalPass as the chain's internal blit
    // (force-linear). Lets main.mm visually verify that the
    // capture path is working without confounding the chain.
    void renderCaptureToDrawable(MetalCore& mc,
                                 void* inputTexture, void* inputSampler);

    std::vector<ShaderParam*> params();
    bool hasPreset() const { return m_preset != nullptr; }

private:
    // Per-pass metadata derived from ShaderDef::PresetParams.
    struct PassMeta
    {
        std::string alias;     // empty if not aliased
        bool        scaleAbsoluteX = false;
        bool        scaleAbsoluteY = false;
        bool        scaleViewportX = false;
        bool        scaleViewportY = false;
        float       scaleX = 1.0f;
        float       scaleY = 1.0f;
        int         frameCountMod = 0;
        // float_framebuffer: pass writes to / reads from a 16-bit float
        // framebuffer. When true, the destination texture for this pass
        // is allocated as RGBA16F and the pipeline state's color
        // attachment pixel format must match.
        bool        floatFrameBuffer = false;
    };

    void destroyPasses(MetalCore& mc);
    void destroyTargets(MetalCore& mc);
    void destroyExternalTextures();
    void rebuildPasses(MetalCore& mc);
    void calculatePassSizes();

    // Read a numeric PresetParam with the suffix (e.g. "scale_x0"); returns
    // fallback if not set.
    static float presetFloat(const std::map<std::string, std::string>& pp,
                             const char* key, float fallback);

    // Look up a per-pass preset param by its canonical key.
    static std::string passPresetParam(const ShaderDef& sd, const char* base);

    // Build PassMeta from a ShaderDef's PresetParams.
    static PassMeta buildPassMeta(const ShaderDef& sd);

    // Find the TextureDef entry whose preset 'name' (or fallback
    // TextureDef::Name) matches the given key.
    static const TextureDef* findExternalTexture(const PresetDef& preset,
                                                 const std::string& name);

    // Decode a TextureDef into a MetalTexture (BGRA8, no mip).
    bool uploadExternalTexture(MetalCore& mc,
                               const TextureDef& td,
                               MetalTexture& outTex) const;

    MetalCore& m_mc;

    PresetDef* m_preset {nullptr};
    std::map<std::string, TextureSamplerSettings> m_texSettings;

    std::unique_ptr<MetalPass> m_preprocessPass;
    std::unique_ptr<MetalPass> m_blitPass;     // drawable blit, always BGRA8
    MetalTexture               m_preprocessTex;
    MetalTexture               m_finalTex;  // post-scale target

    std::vector<std::unique_ptr<MetalPass>> m_passes;
    std::vector<PassMeta>                   m_passMeta;
    std::vector<MetalTexture>               m_passTexs;
    std::vector<MetalTexture>               m_feedbackTexs;
    std::vector<MetalTexture>               m_historyTexs;

    // External textures from PresetDef::TextureDefs, keyed by preset name.
    std::unordered_map<std::string, MetalTexture> m_externalTexs;

    // 1x1 transparent black fallback for any unresolved sampler.
    MetalTexture m_fallbackTex;

    std::map<std::string, void*> m_resources;
    std::map<std::string, void*> m_samplers;
    std::map<std::string, float4> m_texSizes;

    std::vector<std::array<uint32_t, 4>> m_passSizes;

    bool m_requiresFeedback {false};
    int  m_requiresHistory {0};
    int  m_historyWriteIndex {0};
    int  m_frameCount {0};
    float m_scale {1.0f};
    bool  m_forceLinear {false};

    int m_captureW {0}, m_captureH {0};
    int m_viewportW {0}, m_viewportH {0};
    int m_originalW {0}, m_originalH {0};

    float m_mvpSX {2.0f}, m_mvpSY {2.0f};
    float m_mvpTX {-1.0f}, m_mvpTY {-1.0f};

    bool m_rebuildNeeded {true};
    std::unordered_set<std::string> m_loggedMissing;
    std::unordered_set<std::string> m_loggedUnsupported;

    // One-time log of unsupported features.
    void logUnsupportedOnce(const std::string& key, const std::string& msg);
    // One-time log of missing resource.
    void logMissingOnce(const std::string& name);
};
