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

class MetalShaderChain
{
public:
    MetalShaderChain(MetalCore& mc);
    ~MetalShaderChain();

    void setPreset(PresetDef* preset);
    void rebuild(MetalCore& mc);
    void resize(MetalCore& mc, int captureW, int captureH,
                int viewportW, int viewportH);
    void updateMVP(float sx, float sy, float tx, float ty);

    void process(MetalCore& mc,
                 void* inputTexture, void* inputSampler,
                 int frameNo, int logicalFrameNo);

    std::vector<ShaderParam*> params();
    bool hasPreset() const { return m_preset != nullptr; }

private:
    void destroyPasses(MetalCore& mc);
    void destroyTargets(MetalCore& mc);
    void rebuildPasses(MetalCore& mc);
    void calculatePassSizes();

    MetalCore& m_mc;

    PresetDef* m_preset {nullptr};
    std::map<std::string, TextureSamplerSettings> m_texSettings;

    std::unique_ptr<MetalPass> m_preprocessPass;
    MetalTexture               m_preprocessTex;

    std::vector<std::unique_ptr<MetalPass>> m_passes;
    std::vector<MetalTexture>               m_passTexs;
    std::vector<MetalTexture>               m_feedbackTexs;
    std::vector<MetalTexture>               m_historyTexs;

    std::map<std::string, void*> m_resources;
    std::map<std::string, void*> m_samplers;
    std::map<std::string, float4> m_texSizes;

    std::vector<std::array<uint32_t, 4>> m_passSizes;

    bool m_requiresFeedback {false};
    int  m_requiresHistory {0};
    int  m_historyWriteIndex {0};

    int m_captureW {0}, m_captureH {0};
    int m_viewportW {0}, m_viewportH {0};
    int m_originalW {0}, m_originalH {0};

    float m_mvpSX {2.0f}, m_mvpSY {2.0f};
    float m_mvpTX {-1.0f}, m_mvpTY {-1.0f};

    bool m_rebuildNeeded {true};
};
