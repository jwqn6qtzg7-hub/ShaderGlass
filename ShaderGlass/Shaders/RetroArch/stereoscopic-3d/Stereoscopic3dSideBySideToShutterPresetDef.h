/*
ShaderGlass preset stereoscopic-3d / side-by-side-to-shutter imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/stereoscopic-3d/side-by-side-to-shutter.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class Stereoscopic3dSideBySideToShutterPresetDef : public PresetDef
{
public:
	Stereoscopic3dSideBySideToShutterPresetDef() : PresetDef{}
	{
		Name = "side-by-side-to-shutter";
		Category = "stereoscopic-3d";
	}

	virtual void Build() {
         	ShaderDefs.push_back(Stereoscopic3dShadersSbsToShutterShaderDef()
.Param("scale_type", "source"));
	}
};
}
