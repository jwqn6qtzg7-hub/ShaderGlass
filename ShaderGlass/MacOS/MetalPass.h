#pragma once

#include "MetalCore.h"
#include "MetalTexture.h"

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

struct float4 { float x, y, z, w; };
union float4x4 {
    float m[4][4];
    float4 cols[4];
};

class MetalPass
{
public:
    MetalPass(MetalCore& mc, ShaderDef& shaderDef,
              const std::map<std::string, TextureSamplerSettings>& texSettings,
              bool preprocess);
    ~MetalPass();

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
    bool requiresFeedback() const;
    int  requiresHistory() const;
    std::vector<ShaderParam*> params();

    int destW() const { return m_destW; }
    int destH() const { return m_destH; }
    int sourceBinding() const { return m_srcBinding; }
    ShaderDef& shaderDef() { return m_shaderDef; }

private:
    void compileShaders(MetalCore& mc);
    void createBuffers(MetalCore& mc);

    ShaderDef& m_shaderDef;
    std::map<std::string, TextureSamplerSettings> m_texSettings;
    bool m_preprocess;

    std::vector<uint8_t> m_uboData;
    std::vector<uint8_t> m_pushData;

    void* m_pipelineState {nullptr};
    void* m_depthState {nullptr};
    void* m_constBuf {nullptr};
    void* m_pushBuf {nullptr};
    void* m_vertBuf {nullptr};
    void* m_mvpBuf {nullptr};
    std::vector<void*> m_samplers;

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
