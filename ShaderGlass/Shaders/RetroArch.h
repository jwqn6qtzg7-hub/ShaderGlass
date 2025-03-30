#pragma once

#include "RetroArch\anamorphic\shaders\AnamorphicShadersAnamorphicShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\aa-shader-4.0-level2\AntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\aa-shader-4.0-level2\AntiAliasingShadersAaShader40Level2AaShader40Level2Pass2ShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\AntiAliasingShadersAaShader40ShaderDef.h"
#include "RetroArch\sharpen\shaders\SharpenShadersAdaptiveSharpenShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\AntiAliasingShadersAdvancedAaShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersBicubicXShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersBicubicYShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\AntiAliasingShadersFxaaShaderDef.h"
#include "RetroArch\stock\StockStockShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\AntiAliasingShadersReverseAaShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersBicubicShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\smaa\AntiAliasingShadersSmaaSmaaPass0ShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\smaa\AntiAliasingShadersSmaaSmaaPass1ShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\smaa\AntiAliasingShadersSmaaSmaaPass2ShaderDef.h"
#include "RetroArch\sharpen\shaders\SharpenShadersFastSharpenShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgColortools_and_ntsc_passShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgFxaaShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgShift_and_bleedShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgIn_glow_xShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgIn_glow_yShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgHalo_pre_gammaShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgHaloShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgAvglum_passShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgReflection_blur_preShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgReflection_blurShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgBloom_pass_1ShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgBloom_pass_2ShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgBloom_pass_3ShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgBloom_pass_4ShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgAmbi_temporal_passShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgHelper_passShaderDef.h"
#include "RetroArch\bezel\koko-aio\shaders-ng\BezelKokoAioShadersNgFinal_passShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\extras\BezelMega_BezelShadersGuestExtrasHsmDrezNoneShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseCacheInfoGlassParamsShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseTextAdvGlassShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\extras\BezelMega_BezelShadersGuestExtrasHsmFetchDrezOutputShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\dedither\BezelMega_BezelShadersDeditherDeditherGammaPrep1BeforeShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\sgenpt-mix\BezelMega_BezelShadersHyllianSgenptMixSgenptMixPass1ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\sgenpt-mix\BezelMega_BezelShadersHyllianSgenptMixSgenptMixPass2ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\sgenpt-mix\BezelMega_BezelShadersHyllianSgenptMixSgenptMixPass3ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\sgenpt-mix\BezelMega_BezelShadersHyllianSgenptMixSgenptMixPass4ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\sgenpt-mix\BezelMega_BezelShadersHyllianSgenptMixSgenptMixPass5ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\dedither\BezelMega_BezelShadersDeditherDeditherGammaPrep2AfterShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\ps1dither\BezelMega_BezelShadersPs1ditherHsmPS1UnditherBoxBlurShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\fxaa\BezelMega_BezelShadersFxaaFxaaShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\extras\BezelMega_BezelShadersGuestExtrasHsmGSharp_resamplerShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\extras\BezelMega_BezelShadersGuestExtrasHsmSharpsmootherShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseStockShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\scalefx\BezelMega_BezelShadersScalefxHsmScalefxPass0ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\scalefx\BezelMega_BezelShadersScalefxHsmScalefxPass1ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\scalefx\BezelMega_BezelShadersScalefxHsmScalefxPass2ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\scalefx\BezelMega_BezelShadersScalefxHsmScalefxPass3ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\scalefx\BezelMega_BezelShadersScalefxHsmScalefxPass4ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseIntroShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\gtu\BezelMega_BezelShadersGtuHsmGtuPass1ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\gtu\BezelMega_BezelShadersGtuHsmGtuPass2ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmAfterglow0ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmPreShadersAfterglowShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\dogway\BezelMega_BezelShadersDogwayHsmGradeShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCustomFastSharpenShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmAvgLumShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmInterlaceAndLinearizeShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\easymode\BezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_horizShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\easymode\BezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_vertShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\easymode\BezelMega_BezelShadersEasymodeHsmCrtEasymodeThresholdShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\easymode\BezelMega_BezelShadersEasymodeHsmCrtEasymodeHalationShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBasePostCrtPrepGlassShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseLinearizeCrtShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseBlurOutsideScreenHorizShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseBlurOutsideScreenVertShaderDef.h"
#include "RetroArch\blurs\shaders\royale\BlursShadersRoyaleBlur9x9ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseReflectionGlassShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseDelinearizeShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\ntsc\BezelMega_BezelShadersGuestNtscHsmNtscPass1ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\ntsc\BezelMega_BezelShadersGuestNtscHsmNtscPass2ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\ntsc\BezelMega_BezelShadersGuestNtscHsmNtscPass3ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCustomFastSharpenNtscShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass1ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmGaussian_horizontalShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmGaussian_verticalShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmBloom_horizontalShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmBloom_verticalShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmDeconvergenceShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCrtGuestAdvancedShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\lcd-cgwg\BezelMega_BezelShadersLcdCgwgHsmLcdGridV2ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmInterlaceShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\megatron\BezelMega_BezelShadersMegatronCrtSonyMegatronSourcePassShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\megatron\BezelMega_BezelShadersMegatronCrtSonyMegatronHdrPassShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\megatron\BezelMega_BezelShadersMegatronCrtSonyMegatronShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseLinearizeCrtHdrShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseReflectionGlassHdrShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseOutputHdrShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseCacheInfoNoReflectParamsShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseTextAdvNoReflectShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2NoReflectShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBasePostCrtPrepNoReflectShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseBezelImagesUnderCrtShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseBezelImagesOverCrtShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseCombinePassesNoReflectShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCrtGuestAdvancedNoReflectShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmDeconvergenceNoReflectShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\megatron\BezelMega_BezelShadersMegatronCrtSonyMegatronNoReflectShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseCombinePassesNoReflectHdrShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseOutputSdrShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseCacheInfoAllParamsShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseTextAdvShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBasePostCrtPrepImageLayersShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseReflectionShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseCombinePassesShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseCombinePassesHdrShaderDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomBloomPass0ShaderDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomBloomPass1ShaderDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomBloomPass2ShaderDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomBloomPass3ShaderDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomBloomPass4ShaderDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomLensFlarePass0ShaderDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomLensFlarePass1ShaderDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomLensFlarePass2ShaderDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomLightingCombineShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\crt-super-xbr\BezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass0ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\crt-super-xbr\BezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass1ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\crt-super-xbr\BezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass2ShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\crt-super-xbr\BezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicXShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\crt-super-xbr\BezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicYShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBasePostCrtPrepMinimumNoReflectShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniPotatoShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseTextStdGlassShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseLinearizeShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseTextStdShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseTextStdNoReflectShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\lcd-cgwg\BezelMega_BezelShadersLcdCgwgHsmLcdGridV2NoReflectShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBaseCacheInfoPotatoParamsShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2PotatoShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBasePostCrtPrepPotatoShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmCrtGuestAdvancedPotatoShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\BezelMega_BezelShadersGuestHsmDeconvergencePotatoShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\lcd-cgwg\BezelMega_BezelShadersLcdCgwgHsmLcdGridV2PotatoShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\megatron\BezelMega_BezelShadersMegatronCrtSonyMegatronPotatoShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\base\BezelMega_BezelShadersBasePostCrtPrepPotatoMegatronShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\crt-super-xbr\BezelMega_BezelShadersHyllianCrtSuperXbrLinearizeShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\crt-super-xbr\BezelMega_BezelShadersHyllianCrtSuperXbrCrtHyllianSincCurvatureShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\crt-super-xbr\BezelMega_BezelShadersHyllianCrtSuperXbrThresholdShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\crt-super-xbr\BezelMega_BezelShadersHyllianCrtSuperXbrBlur_horizShaderDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\hyllian\crt-super-xbr\BezelMega_BezelShadersHyllianCrtSuperXbrBlur_vertShaderDef.h"
#include "RetroArch\bezel\uborder\shaders\BezelUborderShadersUborderBezelReflectionsShaderDef.h"
#include "RetroArch\bezel\uborder\shaders\support_shaders\koko-ambi-standalone\BezelUborderShadersSupport_shadersKokoAmbiStandalone0_kokoAmbiStockShaderDef.h"
#include "RetroArch\bezel\uborder\shaders\support_shaders\koko-ambi-standalone\BezelUborderShadersSupport_shadersKokoAmbiStandalone1_kokoAmbiAvglumShaderDef.h"
#include "RetroArch\bezel\uborder\shaders\support_shaders\koko-ambi-standalone\BezelUborderShadersSupport_shadersKokoAmbiStandalone2_kokoAmbiTemporalShaderDef.h"
#include "RetroArch\bezel\uborder\shaders\support_shaders\BezelUborderShadersSupport_shadersOriginalShaderDef.h"
#include "RetroArch\bezel\uborder\shaders\content_shaders\BezelUborderShadersContent_shadersCrtNobodyShaderDef.h"
#include "RetroArch\bezel\uborder\shaders\BezelUborderShadersUborderShaderDef.h"
#include "RetroArch\bezel\uborder\shaders\content_bezel_shaders\BezelUborderShadersContent_bezel_shadersCrtNobodyBezelReflectionsShaderDef.h"
#include "RetroArch\bezel\uborder\shaders\content_koko_ambi\BezelUborderShadersContent_koko_ambiCrtNobodyShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseLinearizeShaderDef.h"
#include "RetroArch\blurs\shaders\dual_filter\BlursShadersDual_filterDownsampleShaderDef.h"
#include "RetroArch\blurs\shaders\dual_filter\BlursShadersDual_filterUpsampleShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseDelinearizeShaderDef.h"
#include "RetroArch\blurs\shaders\dual_filter\BlursShadersDual_filterDownsample_bloomShaderDef.h"
#include "RetroArch\blurs\shaders\dual_filter\BlursShadersDual_filterNaive_resampleShaderDef.h"
#include "RetroArch\blurs\shaders\dual_filter\BlursShadersDual_filterMoving_avgShaderDef.h"
#include "RetroArch\blurs\shaders\dual_filter\BlursShadersDual_filterBloom_blendShaderDef.h"
#include "RetroArch\blurs\shaders\dual_filter\BlursShadersDual_filterBloom_blend_fastShaderDef.h"
#include "RetroArch\blurs\shaders\dual_filter\BlursShadersDual_filterBloom_blend_fastestShaderDef.h"
#include "RetroArch\blurs\shaders\gaussian_blur_filtering\BlursShadersGaussian_blur_filteringGaussianSharpShaderDef.h"
#include "RetroArch\blurs\shaders\gaussian_blur_filtering\BlursShadersGaussian_blur_filteringGaussianShaderDef.h"
#include "RetroArch\blurs\shaders\gaussian_blur_filtering\BlursShadersGaussian_blur_filteringGaussian_horizontalSharpShaderDef.h"
#include "RetroArch\blurs\shaders\gaussian_blur_filtering\BlursShadersGaussian_blur_filteringGaussian_verticalSharpShaderDef.h"
#include "RetroArch\blurs\shaders\gaussian_blur_filtering\BlursShadersGaussian_blur_filteringGaussian_horizontalShaderDef.h"
#include "RetroArch\blurs\shaders\gaussian_blur_filtering\BlursShadersGaussian_blur_filteringGaussian_verticalShaderDef.h"
#include "RetroArch\blurs\shaders\gauss_4tap\BlursShadersGauss_4tapGauss_2tap_hShaderDef.h"
#include "RetroArch\blurs\shaders\gauss_4tap\BlursShadersGauss_4tapGauss_2tap_vShaderDef.h"
#include "RetroArch\blurs\shaders\BlursShadersGizmoBlurShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseKawase0ShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseKawase1ShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseKawase2ShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseKawase3ShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseKawase4ShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseKawase5ShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseKawase6ShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseKawase7ShaderDef.h"
#include "RetroArch\blurs\shaders\kawase\BlursShadersKawaseScreen_combineShaderDef.h"
#include "RetroArch\blurs\shaders\BlursShadersSharpsmootherShaderDef.h"
#include "RetroArch\blurs\shaders\BlursShadersSmartBlurShaderDef.h"
#include "RetroArch\motionblur\shaders\MotionblurShadersFeedbackShaderDef.h"
#include "RetroArch\border\shaders\BorderShadersAmbientGlowShaderDef.h"
#include "RetroArch\border\shaders\autocrop-koko\BorderShadersAutocropKokoAutocrop0_precutShaderDef.h"
#include "RetroArch\border\shaders\autocrop-koko\BorderShadersAutocropKokoAutocrop1_computeShaderDef.h"
#include "RetroArch\border\shaders\autocrop-koko\BorderShadersAutocropKokoAutocrop2_displayShaderDef.h"
#include "RetroArch\border\shaders\average_fill\BorderShadersAverage_fillCrop_and_sample_topShaderDef.h"
#include "RetroArch\border\shaders\average_fill\BorderShadersAverage_fillCrop_and_sample_bottomShaderDef.h"
#include "RetroArch\border\shaders\average_fill\BorderShadersAverage_fillCrop_and_sample_leftShaderDef.h"
#include "RetroArch\border\shaders\average_fill\BorderShadersAverage_fillCrop_and_sample_rightShaderDef.h"
#include "RetroArch\border\shaders\average_fill\BorderShadersAverage_fillComposeShaderDef.h"
#include "RetroArch\border\shaders\BorderShadersBigblurShaderDef.h"
#include "RetroArch\border\shaders\blur_fill\BorderShadersBlur_fillRender_sampling_areasShaderDef.h"
#include "RetroArch\border\shaders\blur_fill\BorderShadersBlur_fillComposeShaderDef.h"
#include "RetroArch\border\shaders\BorderShadersEffectBorderIqShaderDef.h"
#include "RetroArch\border\shaders\BorderShadersImgborderGbpShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtEasymodeShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtGeomShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleScanlinesVerticalInterlacingShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxShaderDef.h"
#include "RetroArch\blurs\shaders\royale\BlursShadersRoyaleBlur9fastVerticalShaderDef.h"
#include "RetroArch\blurs\shaders\royale\BlursShadersRoyaleBlur9fastHorizontalShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeVerticalShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeHorizontalShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleBrightpassShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleBloomHorizontalReconstituteShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorGbaColorShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersTvoutTweaksShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersImageAdjustmentShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersInterlacingShaderDef.h"
#include "RetroArch\auto-box\AutoBoxBoxCenterShaderDef.h"
#include "RetroArch\border\shaders\BorderShadersImgborderShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtConsumerShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersDotShaderDef.h"
#include "RetroArch\handheld\shaders\lcd-cgwg\HandheldShadersLcdCgwgLcdGridV2ShaderDef.h"
#include "RetroArch\border\shaders\BorderShadersLightgunBorderShaderDef.h"
#include "RetroArch\border\shaders\BorderShadersImgborderSgbShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorGbcColorShaderDef.h"
#include "RetroArch\border\shaders\BorderShadersImgborderSgbaShaderDef.h"
#include "RetroArch\cel\shaders\CelShadersAdvcartoonShaderDef.h"
#include "RetroArch\cel\shaders\MMJ_Cel\CelShadersMMJ_CelMMJ_Cel_ShaderShaderDef.h"
#include "RetroArch\cel\shaders\MMJ_Cel\CelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_HShaderDef.h"
#include "RetroArch\cel\shaders\MMJ_Cel\CelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDef.h"
#include "RetroArch\cel\shaders\MMJ_Cel\CelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDef.h"
#include "RetroArch\cel\shaders\MMJ_Cel\CelShadersMMJ_CelMMJ_Cel_Shader_MP_ColorShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersAdvanced_CRT_shader_whkrmrgks0ShaderDef.h"
#include "RetroArch\crt\shaders\cathode-retro\CrtShadersCathodeRetroCathodeRetroUtilCopyShaderDef.h"
#include "RetroArch\crt\shaders\cathode-retro\CrtShadersCathodeRetroCathodeRetroUtilDownsample2xHorzShaderDef.h"
#include "RetroArch\crt\shaders\cathode-retro\CrtShadersCathodeRetroCathodeRetroUtilDownsample2xVertShaderDef.h"
#include "RetroArch\crt\shaders\cathode-retro\CrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleHorzShaderDef.h"
#include "RetroArch\crt\shaders\cathode-retro\CrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleVertShaderDef.h"
#include "RetroArch\crt\shaders\cathode-retro\CrtShadersCathodeRetroCathodeRetroUtilGaussianBlurHorzShaderDef.h"
#include "RetroArch\crt\shaders\cathode-retro\CrtShadersCathodeRetroCathodeRetroUtilGaussianBlurVertShaderDef.h"
#include "RetroArch\crt\shaders\cathode-retro\CrtShadersCathodeRetroCathodeRetroCrtGenerateMasksShaderDef.h"
#include "RetroArch\crt\shaders\cathode-retro\CrtShadersCathodeRetroCathodeRetroCrtGenerateScreenTextureShaderDef.h"
#include "RetroArch\crt\shaders\cathode-retro\CrtShadersCathodeRetroCathodeRetroCrtRgbToCrt_noSignalShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrt1tapShaderDef.h"
#include "RetroArch\sharpen\shaders\SharpenShadersRcasShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtApertureShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtBlurPiShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtCaligariShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtCgwgFastShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtCyclonShaderDef.h"
#include "RetroArch\crt\shaders\crt-easymode-halation\CrtShadersCrtEasymodeHalationLinearizeShaderDef.h"
#include "RetroArch\crt\shaders\crt-easymode-halation\CrtShadersCrtEasymodeHalationBlur_horizShaderDef.h"
#include "RetroArch\crt\shaders\crt-easymode-halation\CrtShadersCrtEasymodeHalationBlur_vertShaderDef.h"
#include "RetroArch\crt\shaders\crt-easymode-halation\CrtShadersCrtEasymodeHalationThresholdShaderDef.h"
#include "RetroArch\crt\shaders\crt-easymode-halation\CrtShadersCrtEasymodeHalationCrtEasymodeHalationShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtFrutbunnShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtGdvMiniUltraShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtGdvMiniShaderDef.h"
#include "RetroArch\crt\shaders\geom-deluxe\CrtShadersGeomDeluxePhosphor_applyShaderDef.h"
#include "RetroArch\crt\shaders\geom-deluxe\CrtShadersGeomDeluxePhosphor_updateShaderDef.h"
#include "RetroArch\crt\shaders\geom-deluxe\CrtShadersGeomDeluxeGaussxShaderDef.h"
#include "RetroArch\crt\shaders\geom-deluxe\CrtShadersGeomDeluxeGaussyShaderDef.h"
#include "RetroArch\crt\shaders\geom-deluxe\CrtShadersGeomDeluxeCrtGeomDeluxeShaderDef.h"
#include "RetroArch\crt\shaders\crt-consumer\CrtShadersCrtConsumerLinearizeShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtGeomMiniShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastStockShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastPreShadersShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastLinearizeShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastCrtGuestAdvancedPass1ShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastBloom_horizontalShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastBloom_verticalShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastCrtGuestAdvancedPass2ShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastDeconvergenceFShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastPerfPassShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastPreShadersfShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastLinearizefShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastCrtGuestAdvancedPass1fShaderDef.h"
#include "RetroArch\crt\shaders\guest\fast\CrtShadersGuestFastCrtGuestAdvancedPass2fShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdStockShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdAfterglow0ShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdPreShadersAfterglowShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdLinearizeHdShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdCrtGuestAdvancedHdPass1ShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdGaussian_horizontalShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdGaussian_verticalShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdBloom_horizontalShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdBloom_verticalShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdCrtGuestAdvancedHdPass2ShaderDef.h"
#include "RetroArch\crt\shaders\guest\hd\CrtShadersGuestHdDeconvergenceHdShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedStockShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedAfterglow0ShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedPreShadersAfterglowShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\ntsc\CrtShadersGuestAdvancedNtscNtscPass1ShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\ntsc\CrtShadersGuestAdvancedNtscNtscPass2ShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\ntsc\CrtShadersGuestAdvancedNtscNtscPass3ShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedCustomFastSharpenShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedAvgLumNtscShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedLinearizeNtscShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedCrtGuestAdvancedNtscPass1ShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedGaussian_verticalShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedBloom_verticalShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedCrtGuestAdvancedNtscPass2ShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedDeconvergenceNtscShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedAvgLumShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedLinearizeShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedGaussian_horizontalShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedBloom_horizontalShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedCrtGuestAdvancedShaderDef.h"
#include "RetroArch\crt\shaders\guest\advanced\CrtShadersGuestAdvancedDeconvergenceShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\CrtShadersHyllianCrtHyllian3dShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\CrtShadersHyllianCrtHyllianFastShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\support\CrtShadersHyllianSupportMultiLUTModifiedShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\support\ntsc\shaders\ntsc-adaptive-lite\CrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass1ShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\support\ntsc\shaders\ntsc-adaptive-lite\CrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass2ShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\support\CrtShadersHyllianSupportLinearizeShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\CrtShadersHyllianCrtHyllianPass1ShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\CrtShadersHyllianCrtHyllianSincPass0ShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\support\CrtShadersHyllianSupportMultiLUTLinearShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\CrtShadersHyllianCrtHyllianBaseShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\support\glow\CrtShadersHyllianSupportGlowThresholdShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\support\glow\CrtShadersHyllianSupportGlowBlur_horizShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\support\glow\CrtShadersHyllianSupportGlowBlurGlowMaskGeomShaderDef.h"
#include "RetroArch\crt\shaders\crt-interlaced-halation\CrtShadersCrtInterlacedHalationCrtInterlacedHalationPass0ShaderDef.h"
#include "RetroArch\crt\shaders\crt-interlaced-halation\CrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDef.h"
#include "RetroArch\crt\shaders\crt-interlaced-halation\CrtShadersCrtInterlacedHalationCrtInterlacedHalationPass2ShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtLottesFastShaderDef.h"
#include "RetroArch\crt\shaders\crt-lottes-multipass\CrtShadersCrtLottesMultipassBloompassShaderDef.h"
#include "RetroArch\crt\shaders\crt-lottes-multipass\CrtShadersCrtLottesMultipassScanpassGlowShaderDef.h"
#include "RetroArch\crt\shaders\crt-lottes-multipass\CrtShadersCrtLottesMultipassScanpassShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtLottesShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtMattiasShaderDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\src\CrtShadersCrtMaximusRoyaleSrcH_blurShaderDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\src\CrtShadersCrtMaximusRoyaleSrcResizeShaderDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\src\CrtShadersCrtMaximusRoyaleSrcCrt_reflectShaderDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\src\CrtShadersCrtMaximusRoyaleSrcBGcolor_pass1ShaderDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\src\CrtShadersCrtMaximusRoyaleSrcBGcolor_pass2ShaderDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\src\CrtShadersCrtMaximusRoyaleSrcImgborderShaderDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\src\CrtShadersCrtMaximusRoyaleSrcTv_reflectionShaderDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\src\CrtShadersCrtMaximusRoyaleSrcHorizontal_ringingShaderDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\src\CrtShadersCrtMaximusRoyaleSrcNtsc_pass1ShaderDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\src\CrtShadersCrtMaximusRoyaleSrcNtsc_pass2ShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtNesMiniShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtNobodyShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtPiShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtPocketShaderDef.h"
#include "RetroArch\crt\shaders\crt-potato\shader-files\CrtShadersCrtPotatoShaderFilesUltra_potatoShaderDef.h"
#include "RetroArch\crt\shaders\crt-potato\shader-files\CrtShadersCrtPotatoShaderFilesCrtPotatoShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtResswitchGlitchKokoShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomIntelShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomIntelShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassIntelShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src-fast\CrtShadersCrtRoyaleSrcFastCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src-fast\CrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesVerticalInterlacingShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src-fast\CrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeVerticalShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src-fast\CrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeHorizontalShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src-fast\CrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesHorizontalApplyMaskShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src-fast\CrtShadersCrtRoyaleSrcFastCrtRoyaleBrightpassShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src-fast\CrtShadersCrtRoyaleSrcFastCrtRoyaleBloomVerticalShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src-fast\CrtShadersCrtRoyaleSrcFastCrtRoyaleBloomHorizontalReconstituteShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxIntelShaderDef.h"
#include "RetroArch\crt\shaders\crt-royale\src\CrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskIntelShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtSimpleShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersCrtSinesShaderDef.h"
#include "RetroArch\crt\shaders\crt-slangtest\CrtShadersCrtSlangtestLinearizeShaderDef.h"
#include "RetroArch\crt\shaders\crt-slangtest\CrtShadersCrtSlangtestCubicShaderDef.h"
#include "RetroArch\crt\shaders\crt-slangtest\CrtShadersCrtSlangtestScanlineShaderDef.h"
#include "RetroArch\crt\shaders\crt-slangtest\CrtShadersCrtSlangtestSincShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrLinearizeShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrSuperXbrPass0ShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrSuperXbrPass1ShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrSuperXbrPass2ShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrCustomBicubicXShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrCustomBicubicYShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrCrtCustomShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrThresholdShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrBlur_horizShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrBlur_vertShaderDef.h"
#include "RetroArch\crt\shaders\crt-super-xbr\CrtShadersCrtSuperXbrCustomResolveShaderDef.h"
#include "RetroArch\crt\shaders\torridgristle\CrtShadersTorridgristleScanlineInterpolationShaderDef.h"
#include "RetroArch\crt\shaders\torridgristle\CrtShadersTorridgristleScanlineSimpleShaderDef.h"
#include "RetroArch\reshade\shaders\blendoverlay\ReshadeShadersBlendoverlayBlendoverlayShaderDef.h"
#include "RetroArch\crt\shaders\torridgristle\CrtShadersTorridgristleBrightenShaderDef.h"
#include "RetroArch\crt\shaders\torridgristle\CrtShadersTorridgristleSunsetGaussianVertShaderDef.h"
#include "RetroArch\crt\shaders\torridgristle\CrtShadersTorridgristleSunsetGaussianHorizShaderDef.h"
#include "RetroArch\crt\shaders\torridgristle\CrtShadersTorridgristleCandyBloomShaderDef.h"
#include "RetroArch\crt\shaders\crt-yo6\CrtShadersCrtYo6CrtYo6FlatTrinitronTvShaderDef.h"
#include "RetroArch\crt\shaders\crt-yo6\CrtShadersCrtYo6CrtYo6NativeResolutionShaderDef.h"
#include "RetroArch\crt\shaders\crt-yo6\CrtShadersCrtYo6CrtYo6WarpShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersJinc2ShaderDef.h"
#include "RetroArch\crt\shaders\glow\CrtShadersGlowLinearizeShaderDef.h"
#include "RetroArch\crt\shaders\glow\CrtShadersGlowGauss_horizShaderDef.h"
#include "RetroArch\crt\shaders\glow\CrtShadersGlowGauss_vertShaderDef.h"
#include "RetroArch\crt\shaders\glow\CrtShadersGlowThresholdShaderDef.h"
#include "RetroArch\crt\shaders\glow\CrtShadersGlowBlur_horizShaderDef.h"
#include "RetroArch\crt\shaders\glow\CrtShadersGlowBlur_vertShaderDef.h"
#include "RetroArch\crt\shaders\glow\CrtShadersGlowResolveShaderDef.h"
#include "RetroArch\crt\shaders\glow\CrtShadersGlowLanczos_horizShaderDef.h"
#include "RetroArch\crt\shaders\crtsim\CrtShadersCrtsimCompositeShaderDef.h"
#include "RetroArch\crt\shaders\crtsim\CrtShadersCrtsimScreenShaderDef.h"
#include "RetroArch\crt\shaders\crtsim\CrtShadersCrtsimPostDownsampleShaderDef.h"
#include "RetroArch\crt\shaders\crtsim\CrtShadersCrtsimPostUpsampleShaderDef.h"
#include "RetroArch\crt\shaders\crtsim\CrtShadersCrtsimPresentShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersFakeCrtGeomPotatoShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersFakeCrtGeomShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersFakelottesShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersGizmoCrtShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersGizmoSlotmaskCrtShaderDef.h"
#include "RetroArch\crt\shaders\glow-trails\CrtShadersGlowTrailsGlowTrails0ShaderDef.h"
#include "RetroArch\crt\shaders\glow-trails\CrtShadersGlowTrailsGlowTrails1ShaderDef.h"
#include "RetroArch\crt\shaders\GritsScanlines\CrtShadersGritsScanlinesGritsScanlinesShaderDef.h"
#include "RetroArch\crt\shaders\gtu-v050\CrtShadersGtuV050Pass1ShaderDef.h"
#include "RetroArch\crt\shaders\gtu-v050\CrtShadersGtuV050Pass2ShaderDef.h"
#include "RetroArch\crt\shaders\gtu-v050\CrtShadersGtuV050Pass3ShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_ntsc_encodeShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_ntsc_decodeShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_colorShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_prescaleShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_deconvergeShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_scanlineShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_defocusShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_postShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_phosphorShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_chromaShaderDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\shaders\CrtShadersMame_hlslShadersMame_distortionShaderDef.h"
#include "RetroArch\crt\shaders\metacrt\CrtShadersMetacrtBufCShaderDef.h"
#include "RetroArch\crt\shaders\metacrt\CrtShadersMetacrtBufDShaderDef.h"
#include "RetroArch\crt\shaders\metacrt\CrtShadersMetacrtImageShaderDef.h"
#include "RetroArch\crt\shaders\newpixie\CrtShadersNewpixieAccumulateShaderDef.h"
#include "RetroArch\crt\shaders\newpixie\CrtShadersNewpixieBlur_horizShaderDef.h"
#include "RetroArch\crt\shaders\newpixie\CrtShadersNewpixieBlur_vertShaderDef.h"
#include "RetroArch\crt\shaders\newpixie\CrtShadersNewpixieNewpixieCrtShaderDef.h"
#include "RetroArch\crt\shaders\newpixie-mini\CrtShadersNewpixieMiniNewpixieMiniShaderDef.h"
#include "RetroArch\crt\shaders\phosphorlut\CrtShadersPhosphorlutScanlinesInterlaceLinearizeShaderDef.h"
#include "RetroArch\blurs\shaders\royale\BlursShadersRoyaleBlur5fastVerticalShaderDef.h"
#include "RetroArch\blurs\shaders\royale\BlursShadersRoyaleBlur5fastHorizontalShaderDef.h"
#include "RetroArch\crt\shaders\phosphorlut\CrtShadersPhosphorlutPhosphorlutPass0ShaderDef.h"
#include "RetroArch\crt\shaders\phosphorlut\CrtShadersPhosphorlutPhosphorlutPass1ShaderDef.h"
#include "RetroArch\crt\shaders\rt_curvature\CrtShadersRt_curvatureRt_curvatureShaderDef.h"
#include "RetroArch\blurs\shaders\royale\BlursShadersRoyaleBlur43fastVerticalShaderDef.h"
#include "RetroArch\blurs\shaders\royale\BlursShadersRoyaleBlur43fastHorizontalShaderDef.h"
#include "RetroArch\crt\shaders\glow-trails\CrtShadersGlowTrailsCombineShaderDef.h"
#include "RetroArch\crt\shaders\vt220\CrtShadersVt220Vt220ShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersYee64ShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersYeetronShaderDef.h"
#include "RetroArch\crt\shaders\zfast_crt\CrtShadersZfast_crtZfast_crt_compositeShaderDef.h"
#include "RetroArch\crt\shaders\zfast_crt\CrtShadersZfast_crtZfast_crt_curvatureShaderDef.h"
#include "RetroArch\crt\shaders\zfast_crt\CrtShadersZfast_crtZfast_crt_geoShaderDef.h"
#include "RetroArch\crt\shaders\zfast_crt\CrtShadersZfast_crtZfast_crt_coarsemaskShaderDef.h"
#include "RetroArch\crt\shaders\zfast_crt\CrtShadersZfast_crtZfast_crt_finemaskShaderDef.h"
#include "RetroArch\deblur\shaders\DeblurShadersDeblurLumaShaderDef.h"
#include "RetroArch\deblur\shaders\DeblurShadersDeblurShaderDef.h"
#include "RetroArch\denoisers\shaders\DenoisersShadersBilateralHorizontalShaderDef.h"
#include "RetroArch\denoisers\shaders\DenoisersShadersBilateralVerticalShaderDef.h"
#include "RetroArch\denoisers\shaders\DenoisersShadersBilateralShaderDef.h"
#include "RetroArch\denoisers\shaders\DenoisersShadersFastBilateralShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\super-xbr\EdgeSmoothingXbrShadersSuperXbrSuperXbrPass0ShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\super-xbr\EdgeSmoothingXbrShadersSuperXbrSuperXbrPass1ShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\super-xbr\EdgeSmoothingXbrShadersSuperXbrSuperXbrPass2ShaderDef.h"
#include "RetroArch\crt\shaders\hyllian\CrtShadersHyllianCrtHyllianPass0ShaderDef.h"
#include "RetroArch\denoisers\shaders\DenoisersShadersMedian_3x3ShaderDef.h"
#include "RetroArch\denoisers\shaders\DenoisersShadersMedian_5x5ShaderDef.h"
#include "RetroArch\denoisers\shaders\DenoisersShadersSlowBilateralShaderDef.h"
#include "RetroArch\dithering\shaders\DitheringShadersBayerMatrixDitheringShaderDef.h"
#include "RetroArch\dithering\shaders\DitheringShadersBayer_4x4ShaderDef.h"
#include "RetroArch\dithering\shaders\DitheringShadersBlue_noiseShaderDef.h"
#include "RetroArch\dithering\shaders\DitheringShadersBlue_noise_dynamicShaderDef.h"
#include "RetroArch\dithering\shaders\cbod-v1\DitheringShadersCbodV1CbodV1Pass1ShaderDef.h"
#include "RetroArch\dithering\shaders\cbod-v1\DitheringShadersCbodV1CbodV1Pass2ShaderDef.h"
#include "RetroArch\dithering\shaders\checkerboard-dedither\DitheringShadersCheckerboardDeditherLinearizeShaderDef.h"
#include "RetroArch\dithering\shaders\checkerboard-dedither\DitheringShadersCheckerboardDeditherCheckerboardDeditherPass1ShaderDef.h"
#include "RetroArch\dithering\shaders\checkerboard-dedither\DitheringShadersCheckerboardDeditherCheckerboardDeditherPass2ShaderDef.h"
#include "RetroArch\dithering\shaders\checkerboard-dedither\DitheringShadersCheckerboardDeditherCheckerboardDeditherPass3ShaderDef.h"
#include "RetroArch\dithering\shaders\DitheringShadersGSharp_resamplerShaderDef.h"
#include "RetroArch\dithering\shaders\gdapt\DitheringShadersGdaptGdaptPass0ShaderDef.h"
#include "RetroArch\dithering\shaders\gdapt\DitheringShadersGdaptGdaptPass1ShaderDef.h"
#include "RetroArch\dithering\shaders\DitheringShadersGenditherShaderDef.h"
#include "RetroArch\dithering\shaders\DitheringShadersJinc2DeditherShaderDef.h"
#include "RetroArch\dithering\shaders\mdapt\passes\DitheringShadersMdaptPassesMdaptPass0ShaderDef.h"
#include "RetroArch\dithering\shaders\mdapt\passes\DitheringShadersMdaptPassesMdaptPass1ShaderDef.h"
#include "RetroArch\dithering\shaders\mdapt\passes\DitheringShadersMdaptPassesMdaptPass2ShaderDef.h"
#include "RetroArch\dithering\shaders\mdapt\passes\DitheringShadersMdaptPassesMdaptPass3ShaderDef.h"
#include "RetroArch\dithering\shaders\mdapt\passes\DitheringShadersMdaptPassesMdaptPass4ShaderDef.h"
#include "RetroArch\dithering\shaders\ps1dither\DitheringShadersPs1ditherPS1UnditherBoxBlurShaderDef.h"
#include "RetroArch\dithering\shaders\ps1dither\DitheringShadersPs1ditherPS1UnditherAntiBayerShaderDef.h"
#include "RetroArch\dithering\shaders\ps1dither\DitheringShadersPs1ditherPS1UnditherComparisonMkIIShaderDef.h"
#include "RetroArch\dithering\shaders\sgenpt-mix\DitheringShadersSgenptMixLinearizeShaderDef.h"
#include "RetroArch\dithering\shaders\sgenpt-mix\DitheringShadersSgenptMixSgenptMixPass1ShaderDef.h"
#include "RetroArch\dithering\shaders\sgenpt-mix\DitheringShadersSgenptMixSgenptMixPass2ShaderDef.h"
#include "RetroArch\dithering\shaders\sgenpt-mix\DitheringShadersSgenptMixSgenptMixPass3ShaderDef.h"
#include "RetroArch\dithering\shaders\sgenpt-mix\DitheringShadersSgenptMixSgenptMixPass4ShaderDef.h"
#include "RetroArch\dithering\shaders\sgenpt-mix\DitheringShadersSgenptMixSgenptMixPass5ShaderDef.h"
#include "RetroArch\dithering\shaders\DitheringShadersSgenptMixShaderDef.h"
#include "RetroArch\edge-smoothing\cleanEdge\shaders\EdgeSmoothingCleanEdgeShadersCleanEdgeScaleShaderDef.h"
#include "RetroArch\edge-smoothing\ddt\shaders\EdgeSmoothingDdtShaders3PointShaderDef.h"
#include "RetroArch\edge-smoothing\ddt\shaders\EdgeSmoothingDdtShadersCutShaderDef.h"
#include "RetroArch\edge-smoothing\ddt\shaders\EdgeSmoothingDdtShadersDdtExtendedShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\support\EdgeSmoothingXbrShadersSupportLinearizeShaderDef.h"
#include "RetroArch\edge-smoothing\ddt\shaders\EdgeSmoothingDdtShadersDdtJincShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\support\EdgeSmoothingXbrShadersSupportDelinearizeShaderDef.h"
#include "RetroArch\edge-smoothing\ddt\shaders\EdgeSmoothingDdtShadersDdtXbrLv1ShaderDef.h"
#include "RetroArch\edge-smoothing\ddt\shaders\EdgeSmoothingDdtShadersDdtShaderDef.h"
#include "RetroArch\edge-smoothing\eagle\shaders\EdgeSmoothingEagleShaders2xsaiShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersJinc2CshiftRgbShaderDef.h"
#include "RetroArch\edge-smoothing\eagle\shaders\EdgeSmoothingEagleShadersSuper2xsaiShaderDef.h"
#include "RetroArch\edge-smoothing\eagle\shaders\EdgeSmoothingEagleShadersSupereagleShaderDef.h"
#include "RetroArch\edge-smoothing\fsr\shaders\EdgeSmoothingFsrShadersFsrPass0ShaderDef.h"
#include "RetroArch\edge-smoothing\fsr\shaders\EdgeSmoothingFsrShadersFsrPass1ShaderDef.h"
#include "RetroArch\edge-smoothing\hqx\shaders\EdgeSmoothingHqxShadersHq2xHalphonShaderDef.h"
#include "RetroArch\edge-smoothing\hqx\shaders\EdgeSmoothingHqxShadersPass1ShaderDef.h"
#include "RetroArch\edge-smoothing\hqx\shaders\EdgeSmoothingHqxShadersHq2xShaderDef.h"
#include "RetroArch\edge-smoothing\hqx\shaders\EdgeSmoothingHqxShadersHq3xShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersBSplineXShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersBSplineYShaderDef.h"
#include "RetroArch\edge-smoothing\hqx\shaders\EdgeSmoothingHqxShadersHq4xShaderDef.h"
#include "RetroArch\edge-smoothing\nedi\shaders\EdgeSmoothingNediShadersNediPass0ShaderDef.h"
#include "RetroArch\edge-smoothing\nedi\shaders\EdgeSmoothingNediShadersNediPass1ShaderDef.h"
#include "RetroArch\edge-smoothing\nedi\shaders\EdgeSmoothingNediShadersNediPass2ShaderDef.h"
#include "RetroArch\edge-smoothing\nedi\shaders\EdgeSmoothingNediShadersNediJincShaderDef.h"
#include "RetroArch\sharpen\shaders\SharpenShadersCheapSharpenShaderDef.h"
#include "RetroArch\edge-smoothing\nedi\shaders\EdgeSmoothingNediShadersNediHybridPass0ShaderDef.h"
#include "RetroArch\edge-smoothing\nedi\shaders\EdgeSmoothingNediShadersNediHybridPass1ShaderDef.h"
#include "RetroArch\edge-smoothing\nedi\shaders\EdgeSmoothingNediShadersNediHybridPass2ShaderDef.h"
#include "RetroArch\vhs\shaders\VhsShadersVhsShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersNaturalVisionShaderDef.h"
#include "RetroArch\reshade\shaders\ReshadeShadersVibrancePassSh1nra358ShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersRgbToYuvShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1LumaShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2LumaShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersJinc2CshiftLumaShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersJinc2OnPassoutput0ShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersYuvToRgb2xShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1RgbShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2RgbShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersYuvToRgb4xShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1RgbShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2RgbShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1LumaShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2LumaShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersJinc2OnPassoutput3ShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass1RgbShaderDef.h"
#include "RetroArch\edge-smoothing\nnedi3\shaders\EdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass2RgbShaderDef.h"
#include "RetroArch\edge-smoothing\omniscale\shaders\EdgeSmoothingOmniscaleShadersOmniscaleLegacyShaderDef.h"
#include "RetroArch\edge-smoothing\omniscale\shaders\EdgeSmoothingOmniscaleShadersOmniscaleShaderDef.h"
#include "RetroArch\edge-smoothing\sabr\shaders\EdgeSmoothingSabrShadersSabrHybridDeposterizeShaderDef.h"
#include "RetroArch\edge-smoothing\sabr\shaders\EdgeSmoothingSabrShadersSabrV30ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\EdgeSmoothingScalefxShadersScalefxPass0ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\EdgeSmoothingScalefxShadersScalefxPass1ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\EdgeSmoothingScalefxShadersScalefxPass2ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\EdgeSmoothingScalefxShadersScalefxPass3ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\EdgeSmoothingScalefxShadersScalefxPass4ShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\reverse-aa-post3x\AntiAliasingShadersReverseAaPost3xReverseAaPost3xPass0ShaderDef.h"
#include "RetroArch\anti-aliasing\shaders\reverse-aa-post3x\AntiAliasingShadersReverseAaPost3xReverseAaPost3xPass1ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\old\EdgeSmoothingScalefxShadersOldScalefxPass0ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\old\EdgeSmoothingScalefxShadersOldScalefxPass1ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\old\EdgeSmoothingScalefxShadersOldScalefxPass2ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\old\EdgeSmoothingScalefxShadersOldScalefxPass3ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\old\EdgeSmoothingScalefxShadersOldScalefxPass7ShaderDef.h"
#include "RetroArch\edge-smoothing\scalefx\shaders\EdgeSmoothingScalefxShadersScalefxPass4HybridShaderDef.h"
#include "RetroArch\edge-smoothing\scalehq\shaders\EdgeSmoothingScalehqShaders2xScaleHQShaderDef.h"
#include "RetroArch\edge-smoothing\scalehq\shaders\EdgeSmoothingScalehqShaders4xScaleHQShaderDef.h"
#include "RetroArch\edge-smoothing\scalenx\shaders\EdgeSmoothingScalenxShadersEpxShaderDef.h"
#include "RetroArch\edge-smoothing\scalenx\shaders\EdgeSmoothingScalenxShadersMmpxShaderDef.h"
#include "RetroArch\edge-smoothing\scalenx\shaders\EdgeSmoothingScalenxShadersScale2xShaderDef.h"
#include "RetroArch\edge-smoothing\scalenx\shaders\EdgeSmoothingScalenxShadersScale2xplusShaderDef.h"
#include "RetroArch\edge-smoothing\scalenx\shaders\EdgeSmoothingScalenxShadersScale2xSFXShaderDef.h"
#include "RetroArch\edge-smoothing\scalenx\shaders\EdgeSmoothingScalenxShadersScale3xShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\super-xbr\EdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass0ShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\super-xbr\EdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass1ShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\super-xbr\EdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass2ShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\super-xbr\EdgeSmoothingXbrShadersSuperXbrCustomJinc2SharperShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\xbr-lv2-multipass\EdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass0ShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\xbr-lv2-multipass\EdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass1ShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\support\EdgeSmoothingXbrShadersSupportBSplineXShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\support\EdgeSmoothingXbrShadersSupportBSplineYShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\xbr-lv3-multipass\EdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\xbr-lv3-multipass\EdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1ShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\xbr-lv3-multipass\EdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDef.h"
#include "RetroArch\edge-smoothing\xbrz\shaders\EdgeSmoothingXbrzShaders2xbrzShaderDef.h"
#include "RetroArch\edge-smoothing\xbrz\shaders\EdgeSmoothingXbrzShaders4xbrzShaderDef.h"
#include "RetroArch\edge-smoothing\xbrz\shaders\EdgeSmoothingXbrzShaders5xbrzShaderDef.h"
#include "RetroArch\edge-smoothing\xbrz\shaders\EdgeSmoothingXbrzShaders6xbrzShaderDef.h"
#include "RetroArch\edge-smoothing\xbrz\shaders\xbrz-freescale-multipass\EdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass0ShaderDef.h"
#include "RetroArch\edge-smoothing\xbrz\shaders\xbrz-freescale-multipass\EdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass1ShaderDef.h"
#include "RetroArch\edge-smoothing\xbrz\shaders\EdgeSmoothingXbrzShadersXbrzFreescaleShaderDef.h"
#include "RetroArch\edge-smoothing\xsal\shaders\EdgeSmoothingXsalShaders2xsalLevel2ShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersDotmaskShaderDef.h"
#include "RetroArch\edge-smoothing\xsal\shaders\EdgeSmoothingXsalShaders2xsalShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersSpline16XShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersSpline16YShaderDef.h"
#include "RetroArch\edge-smoothing\xsal\shaders\EdgeSmoothingXsalShaders2xsalLevel2Pass2ShaderDef.h"
#include "RetroArch\edge-smoothing\xsal\shaders\EdgeSmoothingXsalShaders2xsalLevel2HqShaderDef.h"
#include "RetroArch\edge-smoothing\xsoft\shaders\EdgeSmoothingXsoftShaders4xsoftShaderDef.h"
#include "RetroArch\edge-smoothing\xsoft\shaders\EdgeSmoothingXsoftShaders4xsoftSdBShaderDef.h"
#include "RetroArch\film\shaders\FilmShadersFilmGrainShaderDef.h"
#include "RetroArch\reshade\shaders\LUT\ReshadeShadersLUTLUTShaderDef.h"
#include "RetroArch\film\shaders\FilmShadersFilm_noiseShaderDef.h"
#include "RetroArch\gpu\shaders\3dfx\GpuShaders3dfx3dfx_pass_0ShaderDef.h"
#include "RetroArch\gpu\shaders\3dfx\GpuShaders3dfx3dfx_pass_1ShaderDef.h"
#include "RetroArch\gpu\shaders\3dfx\GpuShaders3dfx3dfx_pass_2ShaderDef.h"
#include "RetroArch\gpu\shaders\GpuShadersPowervr2ShaderDef.h"
#include "RetroArch\handheld\shaders\mgba\HandheldShadersMgbaAgb001ShaderDef.h"
#include "RetroArch\handheld\shaders\mgba\HandheldShadersMgbaAgs001ShaderDef.h"
#include "RetroArch\handheld\shaders\mgba\HandheldShadersMgbaAgs001LightShaderDef.h"
#include "RetroArch\handheld\shaders\authentic_gbc\HandheldShadersAuthentic_gbcTo_linShaderDef.h"
#include "RetroArch\handheld\shaders\authentic_gbc\HandheldShadersAuthentic_gbcAuthentic_gbcShaderDef.h"
#include "RetroArch\handheld\shaders\authentic_gbc\HandheldShadersAuthentic_gbcTo_lin_fastShaderDef.h"
#include "RetroArch\handheld\shaders\authentic_gbc\HandheldShadersAuthentic_gbcAuthentic_gbc_fastShaderDef.h"
#include "RetroArch\handheld\shaders\authentic_gbc\HandheldShadersAuthentic_gbcAuthentic_gbc_single_passShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersBevelShaderDef.h"
#include "RetroArch\reshade\shaders\LUT\ReshadeShadersLUTMultiLUTShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorDsliteColorShaderDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutGBALUTShaderDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutGBCLUTShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorGbcGambatteColorShaderDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutGBMLUTShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorGbMicroColorShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorNdsColorShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorNSOGbaColorShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorNSOGbcColorShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorPalmColorShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorPspColorShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorSp101ColorShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorSwitchOLEDColorShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorVbaColorShaderDef.h"
#include "RetroArch\handheld\console-border\shader-files\HandheldConsoleBorderShaderFilesGbPass0ShaderDef.h"
#include "RetroArch\handheld\console-border\shader-files\HandheldConsoleBorderShaderFilesGbPass1ShaderDef.h"
#include "RetroArch\handheld\console-border\shader-files\HandheldConsoleBorderShaderFilesGbPass2ShaderDef.h"
#include "RetroArch\handheld\console-border\shader-files\HandheldConsoleBorderShaderFilesGbPass3ShaderDef.h"
#include "RetroArch\handheld\console-border\shader-files\HandheldConsoleBorderShaderFilesGbPass4ShaderDef.h"
#include "RetroArch\handheld\console-border\shader-files\HandheldConsoleBorderShaderFilesGbPass5ShaderDef.h"
#include "RetroArch\handheld\shaders\gameboy\shader-files\HandheldShadersGameboyShaderFilesGbPass1ShaderDef.h"
#include "RetroArch\handheld\shaders\gameboy\shader-files\HandheldShadersGameboyShaderFilesGbPass2ShaderDef.h"
#include "RetroArch\handheld\shaders\gameboy\shader-files\HandheldShadersGameboyShaderFilesGbPass3ShaderDef.h"
#include "RetroArch\handheld\shaders\gameboy\shader-files\HandheldShadersGameboyShaderFilesGbPass4ShaderDef.h"
#include "RetroArch\motionblur\shaders\MotionblurShadersResponseTimeShaderDef.h"
#include "RetroArch\handheld\console-border\shader-files\HandheldConsoleBorderShaderFilesBorderAutoScaleShaderDef.h"
#include "RetroArch\handheld\console-border\shader-files\lcd-cgwg\HandheldConsoleBorderShaderFilesLcdCgwgLcdGridV2ShaderDef.h"
#include "RetroArch\handheld\console-border\shader-files\lcd-cgwg\HandheldConsoleBorderShaderFilesLcdCgwgLcdGridShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersDsHybridViewShaderDef.h"
#include "RetroArch\handheld\shaders\gameboy\shader-files\HandheldShadersGameboyShaderFilesGbPass0ShaderDef.h"
#include "RetroArch\handheld\shaders\gb-palette\HandheldShadersGbPaletteGbPaletteShaderDef.h"
#include "RetroArch\handheld\shaders\color\HandheldShadersColorGbcDevShaderDef.h"
#include "RetroArch\handheld\shaders\lcd-cgwg\HandheldShadersLcdCgwgLcdGridShaderDef.h"
#include "RetroArch\handheld\shaders\lcd-shader\HandheldShadersLcdShaderLcdPass0ShaderDef.h"
#include "RetroArch\handheld\shaders\lcd-shader\HandheldShadersLcdShaderLcdPass1ShaderDef.h"
#include "RetroArch\handheld\shaders\lcd-shader\HandheldShadersLcdShaderLcdPass2ShaderDef.h"
#include "RetroArch\handheld\shaders\lcd-shader\HandheldShadersLcdShaderLcdPass3ShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersLcd1xShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersLcd1x_ndsShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersLcd1x_pspShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersLcd3xShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersRetroTilesShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersRetroV2ShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersRetroV3ShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersSameboyLcdShaderDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\HandheldShadersSimpletex_lcdSimpletex_lcd4kShaderDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\HandheldShadersSimpletex_lcdSimpletex_lcdShaderDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\HandheldShadersSimpletex_lcdSimpletex_lcd_720pShaderDef.h"
#include "RetroArch\handheld\shaders\HandheldShadersZfast_lcdShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersBSpline4TapsShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersBicubic5TapsShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersCatmullRom5TapsShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersCatmullRomXShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersCatmullRomYShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersCatmullRomShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersLinearizeShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersCubicGammaCorrectShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersCubicShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersHermiteShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersLanczos16ShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersLanczos25TapsShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersLanczos3XShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersLanczos3YShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersQuilezShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersSpline36XShaderDef.h"
#include "RetroArch\interpolation\shaders\InterpolationShadersSpline36YShaderDef.h"
#include "RetroArch\linear\LinearLinearizeShaderDef.h"
#include "RetroArch\linear\LinearLinearGammaCorrectShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersAccessibility_modsShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersAntiFlickerShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersAsciiShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersBeadShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersBobDeinterlacingShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersChromaShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersChromaticityShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersCmykHalftoneDotShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersCocktailCabinetShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersColorManglerShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersColorimetryShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersConvergenceShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersDebandShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersDeinterlaceShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersEdgeDetectShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersEgaShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersGeomShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersGlassShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersGradeNoLUTShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersGradeShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersImg_modShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersNight_modeShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersNtscColorsShaderDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscPatchyColorShaderDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscTrilinearLUTSwitchableShaderDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscLinearToSrgbShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersReliefShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersRetroPalettesShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersSimple_color_controlsShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersSsGammaRampShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersTonemappingShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersWhite_pointShaderDef.h"
#include "RetroArch\misc\shaders\MiscShadersYiqHueAdjustmentShaderDef.h"
#include "RetroArch\motion-interpolation\shaders\motion_interpolation\MotionInterpolationShadersMotion_interpolationMotion_interpolation_pass0ShaderDef.h"
#include "RetroArch\motion-interpolation\shaders\motion_interpolation\MotionInterpolationShadersMotion_interpolationMotion_interpolation_pass3ShaderDef.h"
#include "RetroArch\motionblur\shaders\MotionblurShadersBraidRewindShaderDef.h"
#include "RetroArch\motionblur\shaders\MotionblurShadersMix_framesShaderDef.h"
#include "RetroArch\motionblur\shaders\MotionblurShadersMix_frames_smartShaderDef.h"
#include "RetroArch\motionblur\shaders\MotionblurShadersMotionblurBlueShaderDef.h"
#include "RetroArch\motionblur\shaders\MotionblurShadersMotionblurColorShaderDef.h"
#include "RetroArch\motionblur\shaders\MotionblurShadersMotionblurSimpleShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\cgwg-famicom-geom\Nes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\cgwg-famicom-geom\Nes_raw_paletteShadersCgwgFamicomGeomLowpassNotchDecodeYiqShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\cgwg-famicom-geom\Nes_raw_paletteShadersCgwgFamicomGeomAdaptiveCombDecodeShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\cgwg-famicom-geom\Nes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\cgwg-famicom-geom\Nes_raw_paletteShadersCgwgFamicomGeomCrtGeomFamicomShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\gtu-famicom\Nes_raw_paletteShadersGtuFamicomDAC_LUTShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\gtu-famicom\Nes_raw_paletteShadersGtuFamicomLowPassShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\gtu-famicom\Nes_raw_paletteShadersGtuFamicomCombFilterShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\gtu-famicom\Nes_raw_paletteShadersGtuFamicomScaleXShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\gtu-famicom\Nes_raw_paletteShadersGtuFamicomScaleYShaderDef.h"
#include "RetroArch\nes_raw_palette\shaders\Nes_raw_paletteShadersNesColorDecoderShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscPass1Composite3phaseShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscPass23phaseShaderDef.h"
#include "RetroArch\pal\shaders\PalShadersPalR57shellShaderDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscPatchyNtscEncodeYCShaderDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscPatchyNtscCombineYCShaderDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscPatchyNtscNoiseShaderDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscPatchyNtscSeparateYCShaderDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscPatchyNtscDecodeYRmyBmyShaderDef.h"
#include "RetroArch\ntsc\shaders\artifact-colors\NtscShadersArtifactColorsArtifactColors0ShaderDef.h"
#include "RetroArch\ntsc\shaders\artifact-colors\NtscShadersArtifactColorsArtifactColors1ShaderDef.h"
#include "RetroArch\ntsc\shaders\artifact-colors\NtscShadersArtifactColorsArtifactColors2ShaderDef.h"
#include "RetroArch\ntsc\shaders\blargg\NtscShadersBlarggBlargg0ShaderDef.h"
#include "RetroArch\ntsc\shaders\blargg\NtscShadersBlarggBlargg1ShaderDef.h"
#include "RetroArch\ntsc\shaders\mame-ntsc\NtscShadersMameNtscMameNtscShaderDef.h"
#include "RetroArch\ntsc\shaders\mame-ntsc\NtscShadersMameNtscMamePostprocShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscGaussPassShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscStockShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscPass23phaseGammaShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscPass1Svideo3phaseShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscPass1Composite2phaseShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscPass22phaseShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscPass22phaseGammaShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscPass1Svideo2phaseShaderDef.h"
#include "RetroArch\ntsc\shaders\ntsc-adaptive\NtscShadersNtscAdaptiveNtscPass1ShaderDef.h"
#include "RetroArch\ntsc\shaders\ntsc-adaptive\NtscShadersNtscAdaptiveNtscPass2ShaderDef.h"
#include "RetroArch\ntsc\shaders\ntsc-adaptive-tate\NtscShadersNtscAdaptiveTateNtscTatePass1ShaderDef.h"
#include "RetroArch\ntsc\shaders\ntsc-adaptive-tate\NtscShadersNtscAdaptiveTateNtscTatePass2ShaderDef.h"
#include "RetroArch\ntsc\shaders\NtscShadersNtscBlastemShaderDef.h"
#include "RetroArch\ntsc\shaders\ntsc-simple\NtscShadersNtscSimpleNtscMiniShaderDef.h"
#include "RetroArch\ntsc\shaders\ntsc-simple\NtscShadersNtscSimpleNtscSimple1ShaderDef.h"
#include "RetroArch\ntsc\shaders\ntsc-simple\NtscShadersNtscSimpleNtscSimple2ShaderDef.h"
#include "RetroArch\ntsc\shaders\ntsc-simple\NtscShadersNtscSimpleKaizerLpSmallShaderDef.h"
#include "RetroArch\ntsc\shaders\ntsc-simple\NtscShadersNtscSimpleTiny_ntscShaderDef.h"
#include "RetroArch\pal\shaders\PalShadersPalR57shellMoireOnlyShaderDef.h"
#include "RetroArch\pal\shaders\PalShadersPalSinglepassShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersAannShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersBandlimitPixelShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersBilinearAdjustableShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\box_filter_aa\PixelArtScalingShadersBox_filter_aaBox_filter_aa_xformShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersCleanEdgeRotateShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersControlledSharpnessShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersEdge1pixelShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersEdgeNpixelsShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersGridBlendHybridShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersPixellateShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\pixel_aa\PixelArtScalingShadersPixel_aaTo_linShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\pixel_aa\PixelArtScalingShadersPixel_aaPixel_aaShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\pixel_aa\PixelArtScalingShadersPixel_aaTo_lin_fastShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\pixel_aa\PixelArtScalingShadersPixel_aaPixel_aa_fastShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\pixel_aa\PixelArtScalingShadersPixel_aaPixel_aa_single_passShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\pixel_aa\PixelArtScalingShadersPixel_aaPixel_aa_xformShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersSharpBilinearScanlinesShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersSharpBilinearSimpleShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersSharpBilinearShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersSharpShimmerlessShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersSmootheststepShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersSmuberStepShaderDef.h"
#include "RetroArch\pixel-art-scaling\shaders\PixelArtScalingShadersUniformNearestShaderDef.h"
#include "RetroArch\vhs\shaders\VhsShadersRewindShaderDef.h"
#include "RetroArch\subframe-bfi\shaders\SubframeBfiShadersCrtBeamSimulatorShaderDef.h"
#include "RetroArch\hdr\shaders\HdrShadersCrtSonyMegatronSourcePassShaderDef.h"
#include "RetroArch\hdr\shaders\HdrShadersCrtSonyMegatronHdrPassShaderDef.h"
#include "RetroArch\hdr\shaders\HdrShadersCrtSonyMegatronShaderDef.h"
#include "RetroArch\crt\shaders\crt-lottes-multipass\CrtShadersCrtLottesMultipassBloompassGlowShaderDef.h"
#include "RetroArch\warp\shaders\WarpShadersSmartMorphShaderDef.h"
#include "RetroArch\ntsc\shaders\maister\NtscShadersMaisterNtscPass23phaseLinearShaderDef.h"
#include "RetroArch\downsample\shaders\DownsampleShadersDrezGSharp_resamplerShaderDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\HandheldShadersSimpletex_lcdSimpletex_lcdGbaColor4kShaderDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\HandheldShadersSimpletex_lcdSimpletex_lcdGbaColorShaderDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\HandheldShadersSimpletex_lcdSimpletex_lcdGbcColor4kShaderDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\HandheldShadersSimpletex_lcdSimpletex_lcdGbcColorShaderDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\HandheldShadersSimpletex_lcdSimpletex_lcd_720pGbaColorShaderDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\HandheldShadersSimpletex_lcdSimpletex_lcd_720pGbcColorShaderDef.h"
#include "RetroArch\edge-smoothing\xbr\shaders\super-xbr\EdgeSmoothingXbrShadersSuperXbrSuperXbrPass1bShaderDef.h"
#include "RetroArch\scanlines\shaders\ScanlinesShadersScanlineShaderDef.h"
#include "RetroArch\reshade\shaders\ReshadeShadersScanlinesShaderDef.h"
#include "RetroArch\reshade\shaders\ReshadeShadersBloomPassSh1nra358ShaderDef.h"
#include "RetroArch\blurs\shaders\BlursShadersBlurGaussHShaderDef.h"
#include "RetroArch\blurs\shaders\BlursShadersBlurGaussVShaderDef.h"
#include "RetroArch\reshade\shaders\ReshadeShadersBlurHazeSh1nra358ShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersSnesHiresBlendShaderDef.h"
#include "RetroArch\edge-smoothing\xsal\shaders\EdgeSmoothingXsalShaders2xsalLevel2XbrShaderDef.h"
#include "RetroArch\reshade\shaders\ReshadeShadersFilmGrainShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_blur_pass_1ShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_blur_pass_2ShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_blur_pass_3ShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_blur_pass_4ShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_blur_pass_5ShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_blur_pass_6ShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_blur_pass_7ShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_blur_pass_8ShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_get_small_lumaShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_get_adaptShaderDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicbloom_blendShaderDef.h"
#include "RetroArch\reshade\shaders\NormalsDisplacement\ReshadeShadersNormalsDisplacementNormalsDisplacementShaderDef.h"
#include "RetroArch\scanlines\shaders\ScanlinesShadersIntegerScalingScanlinesShaderDef.h"
#include "RetroArch\scanlines\shaders\ScanlinesShadersOsscShaderDef.h"
#include "RetroArch\crt\shaders\CrtShadersSlotmaskShaderDef.h"
#include "RetroArch\scanlines\shaders\ScanlinesShadersResIndependentScanlinesShaderDef.h"
#include "RetroArch\scanlines\shaders\ScanlinesShadersScanlineFractShaderDef.h"
#include "RetroArch\scanlines\shaders\ScanlinesShadersScanlinesRereShaderDef.h"
#include "RetroArch\scanlines\shaders\ScanlinesShadersScanlinesSineAbsShaderDef.h"
#include "RetroArch\sharpen\shaders\SharpenShadersAdaptiveSharpenPass1ShaderDef.h"
#include "RetroArch\sharpen\shaders\SharpenShadersAdaptiveSharpenPass2ShaderDef.h"
#include "RetroArch\sharpen\shaders\anime4k\SharpenShadersAnime4kAnime4kComputeLumShaderDef.h"
#include "RetroArch\sharpen\shaders\anime4k\SharpenShadersAnime4kAnime4kPushShaderDef.h"
#include "RetroArch\sharpen\shaders\anime4k\SharpenShadersAnime4kAnime4kComputeGradientShaderDef.h"
#include "RetroArch\sharpen\shaders\anime4k\SharpenShadersAnime4kAnime4kPushgradWeakShaderDef.h"
#include "RetroArch\sharpen\shaders\SharpenShadersDiffShaderDef.h"
#include "RetroArch\sharpen\shaders\SharpenShadersSuperResExShaderDef.h"
#include "RetroArch\misc\shaders\deposterize\MiscShadersDeposterizeDeposterizePass0ShaderDef.h"
#include "RetroArch\misc\shaders\deposterize\MiscShadersDeposterizeDeposterizePass1ShaderDef.h"
#include "RetroArch\stereoscopic-3d\shaders\Stereoscopic3dShadersAnaglyphToSideBySideShaderDef.h"
#include "RetroArch\stereoscopic-3d\shaders\fubax_vr\Stereoscopic3dShadersFubax_vrVRShaderDef.h"
#include "RetroArch\stereoscopic-3d\shaders\fubax_vr\Stereoscopic3dShadersFubax_vrChromaticShaderDef.h"
#include "RetroArch\stereoscopic-3d\shaders\fubax_vr\Stereoscopic3dShadersFubax_vrFilmicSharpenShaderDef.h"
#include "RetroArch\stereoscopic-3d\shaders\fubax_vr\Stereoscopic3dShadersFubax_vrVR_noseShaderDef.h"
#include "RetroArch\stereoscopic-3d\shaders\Stereoscopic3dShadersShutterToAnaglyphShaderDef.h"
#include "RetroArch\stereoscopic-3d\shaders\Stereoscopic3dShadersShutterToSideBySideShaderDef.h"
#include "RetroArch\stereoscopic-3d\shaders\Stereoscopic3dShadersSideBySideSimpleShaderDef.h"
#include "RetroArch\stereoscopic-3d\shaders\Stereoscopic3dShadersSbsToInterlacedShaderDef.h"
#include "RetroArch\stereoscopic-3d\shaders\Stereoscopic3dShadersSbsToShutterShaderDef.h"
#include "RetroArch\vhs\shaders\gristleVHS\VhsShadersGristleVHSHorizontalSoftenShaderDef.h"
#include "RetroArch\blurs\shaders\sunset_gaussian\BlursShadersSunset_gaussianSunset_horzShaderDef.h"
#include "RetroArch\vhs\shaders\gristleVHS\VhsShadersGristleVHSVHSShaderDef.h"
#include "RetroArch\vhs\shaders\VhsShadersMudlordPalVhsShaderDef.h"
#include "RetroArch\vhs\shaders\VhsShadersStaticShaderDef.h"
#include "RetroArch\vhs\shaders\VHSPro\VhsShadersVHSProVHSPro_ThirdShaderDef.h"
#include "RetroArch\vhs\shaders\VHSPro\VhsShadersVHSProVHSPro_TapeShaderDef.h"
#include "RetroArch\vhs\shaders\VHSPro\VhsShadersVHSProVHSPro_FirstShaderDef.h"
#include "RetroArch\vhs\shaders\VHSPro\VhsShadersVHSProVHSPro_SecondShaderDef.h"
#include "RetroArch\vhs\shaders\VHSPro\VhsShadersVHSProVHSPro_ForthShaderDef.h"
#include "RetroArch\vhs\shaders\VHSPro\VhsShadersVHSProVHSPro_ClearShaderDef.h"
#include "RetroArch\vhs\shaders\VhsShadersVhs_and_crt_godotShaderDef.h"
#include "RetroArch\vhs\shaders\VhsShadersVhs_fontShaderDef.h"
#include "RetroArch\vhs\shaders\vhs_mpalko\VhsShadersVhs_mpalkoVhs_mpalko_pass0ShaderDef.h"
#include "RetroArch\vhs\shaders\vhs_mpalko\VhsShadersVhs_mpalkoVhs_mpalko_pass1ShaderDef.h"
#include "RetroArch\warp\shaders\WarpShadersDilationShaderDef.h"
// %SHADER_INCLUDE%

#include "RetroArch\anti-aliasing\shaders\smaa\AntiAliasingShadersSmaaAreaTexTextureDef.h"
#include "RetroArch\anti-aliasing\shaders\smaa\AntiAliasingShadersSmaaSearchTexTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\BezelKokoAioTexturesMonitor_body_curvedTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\BezelKokoAioTexturesMonitor_body_straightTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\BezelKokoAioTexturesBackground_underTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\BezelKokoAioTexturesBackground_overTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\BezelKokoAioTexturesBoothillTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\BezelKokoAioTexturesSide_shadeHelperTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\overlays\BezelKokoAioTexturesOverlaysGbaTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\overlays\BezelKokoAioTexturesOverlaysGbcTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\overlays\BezelKokoAioTexturesOverlaysGbmTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\overlays\BezelKokoAioTexturesOverlaysGbpTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\overlays\BezelKokoAioTexturesOverlaysGamegearTextureDef.h"
#include "RetroArch\bezel\koko-aio\textures\overlays\BezelKokoAioTexturesOverlaysPspE1000TextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\lut\BezelMega_BezelShadersGuestLutTrinitronLutTextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\lut\BezelMega_BezelShadersGuestLutInvTrinitronLutTextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\lut\BezelMega_BezelShadersGuestLutNecLutTextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\guest\lut\BezelMega_BezelShadersGuestLutNtscLutTextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesIntroImage_MegaBezelLogoTextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesPlaceholder_Transparent_16x16TextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesTube_Diffuse_2390x1792TextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesColored_Gel_RainbowTextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesTube_Shadow_1600x1200TextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesTubeGlassOverlayImageCropped_1440x1080TextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesTopLayerImageGradient_3840x2160TextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesPlaceholder_White_16x16TextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesBackgroundImage_Carbon_3840x2160TextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesFrameTexture_2800x2120TextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesNightLightingClose_1920x1080TextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesNightLightingFar_1920x1080TextureDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomLensDBTextureDef.h"
#include "RetroArch\reshade\shaders\bloom\ReshadeShadersBloomLensSpriteTextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesBaked_Frame_Carbonfiber_BackgroundTextureDef.h"
#include "RetroArch\bezel\Mega_Bezel\shaders\textures\BezelMega_BezelShadersTexturesBaked_Frame_Carbonfiber_Background_VertTextureDef.h"
#include "RetroArch\bezel\uborder\textures\borders\BezelUborderTexturesBordersDefaultTextureDef.h"
#include "RetroArch\bezel\uborder\textures\borders\BezelUborderTexturesBordersDefault_layer2TextureDef.h"
#include "RetroArch\border\textures\BorderTexturesTex11TextureDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerTextureDef.h"
#include "RetroArch\crt\shaders\crt-royale\CrtShadersCrtRoyaleTileableLinearApertureGrille15Wide8And5d5SpacingResizeTo64TextureDef.h"
#include "RetroArch\crt\shaders\crt-royale\CrtShadersCrtRoyaleTileableLinearApertureGrille15Wide8And5d5SpacingTextureDef.h"
#include "RetroArch\crt\shaders\crt-royale\CrtShadersCrtRoyaleTileableLinearSlotMaskTall15Wide9And4d5Horizontal9d14VerticalSpacingResizeTo64TextureDef.h"
#include "RetroArch\crt\shaders\crt-royale\CrtShadersCrtRoyaleTileableLinearSlotMaskTall15Wide9And4d5Horizontal9d14VerticalSpacingTextureDef.h"
#include "RetroArch\crt\shaders\crt-royale\CrtShadersCrtRoyaleTileableLinearShadowMaskEDPResizeTo64TextureDef.h"
#include "RetroArch\crt\shaders\crt-royale\CrtShadersCrtRoyaleTileableLinearShadowMaskEDPTextureDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGbTextureDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGbaTextureDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGgTextureDef.h"
#include "RetroArch\border\textures\BorderTexturesPvmTextureDef.h"
#include "RetroArch\border\sgb\BorderSgbSgbTextureDef.h"
#include "RetroArch\border\sgba\BorderSgbaSgbaTextureDef.h"
#include "RetroArch\crt\shaders\crt-consumer\CrtShadersCrtConsumerBezelTextureDef.h"
#include "RetroArch\crt\shaders\geom-deluxe\masks\CrtShadersGeomDeluxeMasksAperture_2_4_rgbTextureDef.h"
#include "RetroArch\crt\shaders\geom-deluxe\masks\CrtShadersGeomDeluxeMasksSlot_2_5x4_bgrTextureDef.h"
#include "RetroArch\crt\shaders\geom-deluxe\masks\CrtShadersGeomDeluxeMasksDelta_2_4x1_rgbTextureDef.h"
#include "RetroArch\crt\shaders\guest\advanced\lut\CrtShadersGuestAdvancedLutTrinitronLutTextureDef.h"
#include "RetroArch\crt\shaders\guest\advanced\lut\CrtShadersGuestAdvancedLutInvTrinitronLutTextureDef.h"
#include "RetroArch\crt\shaders\guest\advanced\lut\CrtShadersGuestAdvancedLutNecLutTextureDef.h"
#include "RetroArch\crt\shaders\guest\advanced\lut\CrtShadersGuestAdvancedLutNtscLutTextureDef.h"
#include "RetroArch\crt\shaders\hyllian\support\LUT\CrtShadersHyllianSupportLUTSomeGradeTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\ReshadeShadersLUTGradeRgbTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\ReshadeShadersLUTGradeCompositeTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphor128pxTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphor512pxTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphorMatrix128pxTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphorMatrix512pxTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphorDots128pxTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphorDots512pxTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9TV_frame_1TextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9TV_frame_2TextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9TV_frame_3TextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9TV_frame_2_bgTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9TV_frame_3_bgTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9TV_frame_2_ledTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9TV_frame_3_ledTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9TV_frame_1_lights_alphaTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9TV_frame_3_lights_alphaTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9MONITOR_frameTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9MONITOR_frame_lights_alphaTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9Frame_1_shapeTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\FrameTextures\16_9\CrtShadersCrtMaximusRoyaleFrameTextures16_9Frame_2_shapeTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphor128pxHTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphor512pxHTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphorMatrix128pxHTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphorMatrix512pxHTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphorDots128pxHTextureDef.h"
#include "RetroArch\crt\shaders\crt-maximus-royale\TilePhosphorTextures\CrtShadersCrtMaximusRoyaleTilePhosphorTexturesTilePhosphorDots512pxHTextureDef.h"
#include "RetroArch\crt\shaders\crt-potato\resources\CrtShadersCrtPotatoResourcesMask1TextureDef.h"
#include "RetroArch\crt\shaders\crt-potato\resources\CrtShadersCrtPotatoResourcesCrtPotatoThinTextureDef.h"
#include "RetroArch\crt\shaders\crt-potato\resources\CrtShadersCrtPotatoResourcesCrtPotatoThickTextureDef.h"
#include "RetroArch\crt\shaders\crt-royale\CrtShadersCrtRoyaleTileableLinearApertureGrille15Wide8And5d5SpacingResizeTo64BGRTextureDef.h"
#include "RetroArch\crt\shaders\crt-royale\CrtShadersCrtRoyaleTileableLinearSlotMaskTall15Wide9And4d5Horizontal9d14VerticalSpacingResizeTo64BGRshiftedTextureDef.h"
#include "RetroArch\reshade\shaders\blendoverlay\ReshadeShadersBlendoverlayShadowmask4x4TextureDef.h"
#include "RetroArch\crt\shaders\crt-yo6\CrtShadersCrtYo6PhosphorFlatTrinitronTvTextureDef.h"
#include "RetroArch\crt\shaders\crt-yo6\CrtShadersCrtYo6KVM1420BTextureDef.h"
#include "RetroArch\crt\shaders\crtsim\CrtShadersCrtsimArtifactsTextureDef.h"
#include "RetroArch\crt\shaders\crtsim\CrtShadersCrtsimMaskTextureDef.h"
#include "RetroArch\crt\shaders\GritsScanlines\CrtShadersGritsScanlinesScanlineLUT4pxTextureDef.h"
#include "RetroArch\crt\shaders\GritsScanlines\CrtShadersGritsScanlinesTrinitron_colorTextureDef.h"
#include "RetroArch\crt\shaders\GritsScanlines\CrtShadersGritsScanlinesFakeSelfIlluminationTextureDef.h"
#include "RetroArch\crt\shaders\mame_hlsl\resources\CrtShadersMame_hlslResourcesApertureGrilleTextureDef.h"
#include "RetroArch\crt\shaders\metacrt\CrtShadersMetacrtBasilicaTextureDef.h"
#include "RetroArch\crt\shaders\metacrt\CrtShadersMetacrtWoodgrainTextureDef.h"
#include "RetroArch\crt\shaders\newpixie\CrtShadersNewpixieCrtframeTextureDef.h"
#include "RetroArch\crt\shaders\phosphorlut\luts\CrtShadersPhosphorlutLutsShadowmaskTextureDef.h"
#include "RetroArch\crt\shaders\phosphorlut\luts\CrtShadersPhosphorlutLutsApertureGrilleTextureDef.h"
#include "RetroArch\crt\shaders\phosphorlut\luts\CrtShadersPhosphorlutLutsSlotmaskTextureDef.h"
#include "RetroArch\dithering\shaders\blue-noise\DitheringShadersBlueNoiseLDR_RGB1_0TextureDef.h"
#include "RetroArch\edge-smoothing\hqx\resources\EdgeSmoothingHqxResourcesHq2xTextureDef.h"
#include "RetroArch\edge-smoothing\hqx\resources\EdgeSmoothingHqxResourcesHq3xTextureDef.h"
#include "RetroArch\edge-smoothing\hqx\resources\EdgeSmoothingHqxResourcesHq4xTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\ReshadeShadersLUTCmyk16TextureDef.h"
#include "RetroArch\film\resources\FilmResourcesFilm_noise1TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\ReshadeShadersLUT64TextureDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutDsliteGreyTextureDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutGbaGrey1TextureDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutGbaGrey2TextureDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutGbcGrey1TextureDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutGbcGrey2TextureDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutGbamicroGreyTextureDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutNdsGreyTextureDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutPspGrey1TextureDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutPspGrey2TextureDef.h"
#include "RetroArch\handheld\shaders\color\lut\HandheldShadersColorLutSp101GreyTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesDmgPaletteTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesDmgBackgroundTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesDmgBorderSquare4xTextureDef.h"
#include "RetroArch\handheld\shaders\gameboy\resources\sample-palettes\HandheldShadersGameboyResourcesSamplePalettesDmgPalette0TextureDef.h"
#include "RetroArch\handheld\shaders\gameboy\resources\sample-bgs\HandheldShadersGameboyResourcesSampleBgsDmgBgTextureDef.h"
#include "RetroArch\handheld\shaders\gameboy\resources\sample-palettes\HandheldShadersGameboyResourcesSamplePalettesGblightPaletteTextureDef.h"
#include "RetroArch\handheld\shaders\gameboy\resources\sample-bgs\HandheldShadersGameboyResourcesSampleBgsPaperBgTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesPocketBorderSquare4xTextureDef.h"
#include "RetroArch\handheld\shaders\gameboy\resources\sample-palettes\HandheldShadersGameboyResourcesSamplePalettesGbpPaletteTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesPocketPaletteTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesPocketBackgroundTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesGbaBorderSquare4xTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesColorBorderSquare4xTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesGgBorderSquare4xTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesNgpcBorderSquare4xTextureDef.h"
#include "RetroArch\handheld\console-border\resources\HandheldConsoleBorderResourcesPspBorderTextureDef.h"
#include "RetroArch\handheld\shaders\gameboy\resources\sample-palettes\HandheldShadersGameboyResourcesSamplePalettesBWPaletteTextureDef.h"
#include "RetroArch\handheld\shaders\gameboy\resources\sample-palettes\HandheldShadersGameboyResourcesSamplePalettesGbpPaletteHighContrastTextureDef.h"
#include "RetroArch\handheld\shaders\gameboy\resources\HandheldShadersGameboyResourcesPaletteTextureDef.h"
#include "RetroArch\handheld\shaders\gameboy\resources\HandheldShadersGameboyResourcesBackgroundTextureDef.h"
#include "RetroArch\handheld\shaders\gb-palette\resources\HandheldShadersGbPaletteResourcesPaletteDmgTextureDef.h"
#include "RetroArch\handheld\shaders\gb-palette\resources\HandheldShadersGbPaletteResourcesPaletteLightTextureDef.h"
#include "RetroArch\handheld\shaders\gb-palette\resources\HandheldShadersGbPaletteResourcesPalettePocketTextureDef.h"
#include "RetroArch\handheld\shaders\lcd-shader\HandheldShadersLcdShaderBackgroundTextureDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\png\4k\HandheldShadersSimpletex_lcdPng4kTextured_paperTextureDef.h"
#include "RetroArch\handheld\shaders\simpletex_lcd\png\2k\HandheldShadersSimpletex_lcdPng2kTextured_paperTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\ReshadeShadersLUT32TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\ReshadeShadersLUT16TextureDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscP22_80s_D65TextureDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscP22_90s_D65TextureDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscP22_J_D65TextureDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscTrinitronP22_D65TextureDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscP22_J_D93TextureDef.h"
#include "RetroArch\ntsc\shaders\patchy-ntsc\NtscShadersPatchyNtscTrinitronP22_D93TextureDef.h"
#include "RetroArch\nes_raw_palette\shaders\gtu-famicom\Nes_raw_paletteShadersGtuFamicomNesTableTextureDef.h"
#include "RetroArch\pal\resources\PalResourcesNes_lutTextureDef.h"
#include "RetroArch\vhs\resources\VhsResourcesRewTextureDef.h"
#include "RetroArch\vhs\resources\VhsResourcesPlayTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\ReshadeShadersLUTNEC_XM29plus_captureTextureDef.h"
#include "RetroArch\reshade\shaders\blendoverlay\ReshadeShadersBlendoverlayGrayscale_slotmaskTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\ReshadeShadersLUTBsnesTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldDSLite2020TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldDSLite2020ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldDSLiteP3TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldDSLiteP3ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldDSLiteSRGBTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldDSLiteSRGBColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBA2020TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBA2020ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBAP3DarkTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBAP3TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBAP3ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBA2020DarkTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBASRGBDarkTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBASRGBTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBASRGBColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBA_GBC2020TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBA_GBCP3TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBA_GBCSRGBTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBCDevTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBC2020TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBC2020ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBCP3TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBCP3ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBCSRGBTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBCSRGBColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBMicro2020TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBMicro2020ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBMicroP3TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBMicroP3ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBMicroSRGBTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldGBMicroSRGBColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldNDS2020TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldNDS2020ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldNDSP3TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldNDSP3ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldNDSSRGBTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldNDSSRGBColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldNSOGBATextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldNSOGBCTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldPSP2020TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldPSP2020ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldPSPP3PureGammaTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldPSPP3TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldPSPP3ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldPSP2020PureGammaTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldPSPSRGBPureGammaTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldPSPSRGBTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldPSPSRGBColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSP1012020TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSP1012020ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSP101P3TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSP101P3ColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSP101SRGBTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSP101SRGBColdTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSWOLEDP3PureGammaTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSWOLEDP3TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSWOLED2020PureGammaTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSWOLED2020TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSWOLEDSRGBPureGammaTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSWOLEDSRGBTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSWOLED2020GammaTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSWOLEDP3GammaTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldSWOLEDSRGBGammaTextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldVBA1TextureDef.h"
#include "RetroArch\reshade\shaders\LUT\handheld\ReshadeShadersLUTHandheldVBA2TextureDef.h"
#include "RetroArch\reshade\shaders\magicbloom\ReshadeShadersMagicbloomMagicBloom_DirtTextureDef.h"
#include "RetroArch\reshade\shaders\NormalsDisplacement\ReshadeShadersNormalsDisplacementCurveNormalsTextureDef.h"
#include "RetroArch\stereoscopic-3d\shaders\fubax_vr\Stereoscopic3dShadersFubax_vrNoseTextureDef.h"
// %TEXTURE_INCLUDE%

#include "RetroArch\anamorphic\AnamorphicAnamorphicPresetDef.h"
#include "RetroArch\anti-aliasing\AntiAliasingAaShader40Level2PresetDef.h"
#include "RetroArch\anti-aliasing\AntiAliasingAaShader40PresetDef.h"
#include "RetroArch\anti-aliasing\AntiAliasingAdvancedAaPresetDef.h"
#include "RetroArch\anti-aliasing\AntiAliasingFxaaLinearPresetDef.h"
#include "RetroArch\anti-aliasing\AntiAliasingFxaaPresetDef.h"
#include "RetroArch\anti-aliasing\AntiAliasingReverseAaPresetDef.h"
#include "RetroArch\anti-aliasing\AntiAliasingSmaaLinearPresetDef.h"
#include "RetroArch\anti-aliasing\AntiAliasingSmaaSharpenPresetDef.h"
#include "RetroArch\anti-aliasing\AntiAliasingSmaaPresetDef.h"
#include "RetroArch\bezel\koko-aio\BezelKokoAioKokoAioNgPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgBasePresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorAmbilightImmersivePresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorBalancedPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorFor_1440pMin_HiNitsPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorFor_HigherNitsPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorFXAA_sharpAperturegrillePresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorFXAA_sharpCore_SlotMaskPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorFXAA_sharpScreen_SlotMaskPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorNew_aperturegrille_gmPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorNew_slotmask_gmPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorNew_slotmask_rgbPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_HmaskAperturegrilleOvermaskPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_HmaskAperturegrillePresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_HmaskCore_SlotMaskOvermaskPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_HmaskCore_SlotMaskPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_HmaskScreen_SlotMaskChameleonPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_HmaskScreen_SlotMaskPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_HmaskScreen_SlotMask_TallerPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_HmaskScreen_SlotMask_Taller_BrighterPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_HmaskScreen_SlotMask_Taller_MaxMaskPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_HmaskShadowMaskPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\BezelKokoAioPresetsNgMonitorScreen_Hmask_OverlappedOldpainlessPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\TV\BezelKokoAioPresetsNgTVTvNTSC_GenericAA_sharpSelectivePresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\TV\BezelKokoAioPresetsNgTVTvNTSC_MegadriveAA_sharpSelectivePresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\VectorGFX\BezelKokoAioPresetsNgVectorGFXVector_neon_4_mame2003plus_defaultsPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\VectorGFX\BezelKokoAioPresetsNgVectorGFXVector_std_4_mame2003plus_defaultsPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\VGA\BezelKokoAioPresetsNgVGAMonitorVGADoubleScanAmberPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\VGA\BezelKokoAioPresetsNgVGAMonitorVGADoubleScanGreenPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\VGA\BezelKokoAioPresetsNgVGAMonitorVGADoubleScanShadowMaskPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\VGA\BezelKokoAioPresetsNgVGAMonitorVGADoubleScanXBRPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets-ng\VGA\BezelKokoAioPresetsNgVGAMonitorVGADoubleScanPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgDots_11PresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgDots_43PresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyAdvanceOverlayNightPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyAdvanceOverlayPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyColorOverlayIPSPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyColorOverlayTallerIPSPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyColorOverlayTallerPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyColorOverlayPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyColorPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyMonoOverlayTallerPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyMonoOverlayPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyMonoPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyPocketOverlayTallerPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyPocketOverlayPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameboyPocketPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameGearOverlayNightPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGameGearOverlayPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgGenericHandheldRGBPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgPSPOverlayNightBigY_flipPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgPSPOverlayNightBigPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgPSPOverlayNightSmallY_flipPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgPSPOverlayNightSmallPresetDef.h"
#include "RetroArch\bezel\koko-aio\Presets_Handhelds-ng\BezelKokoAioPresets_HandheldsNgPSPPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__EASYMODEPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__GDVMINIPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__LCDGRIDPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVNOREFLECT__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVNOREFLECT__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVNOREFLECT__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVNOREFLECT__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVSCREENONLY__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVSCREENONLY__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVSCREENONLY__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVSCREENONLY__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADV__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADV__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADV__LCDGRIDPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADV__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADV__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADVRESHADEFX__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADVSUPERXBR__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADVSUPERXBR__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__EASYMODEPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__GDVMININTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__GDVMINIPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__LCDGRIDPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASSRESHADEFX__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASSSUPERXBR__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASSSUPERXBR__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__EASYMODEPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__GDVMININTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__GDVMINIPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__LCDGRIDPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECTSUPERXBR__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECTSUPERXBR__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECT__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECT__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECT__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECT__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLYNOTUBEFX__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLYSUPERXBR__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLYSUPERXBR__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__GDVMININTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__GDVMINIPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASSSUPERXBR__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASSSUPERXBR__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__GDVMININTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__GDVMINIPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__LCDGRIDPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDSUPERXBR__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDSUPERXBR__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__EASYMODEPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__GDVMININTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__GDVMINIPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__LCDGRIDPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECTSUPERXBR__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECTSUPERXBR__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__EASYMODEPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__GDVMININTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__GDVMINIPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__LCDGRIDPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLYNOTUBEFX__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLYSUPERXBR__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLYSUPERXBR__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__EASYMODEPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__GDVMININTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__GDVMINIPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__LCDGRIDPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATOSUPERXBR__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATOSUPERXBR__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__EASYMODEPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__GDVMININTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__GDVMINIPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__GDVNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__GDVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__LCDGRIDPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__MEGATRONNTSCPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\Base_CRT_Presets\BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__MEGATRONPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\BezelMega_BezelPresetsMegaBezel_ADVGLASSPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\BezelMega_BezelPresetsMegaBezel_ADVNOREFLECTPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\BezelMega_BezelPresetsMegaBezel_ADVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\BezelMega_BezelPresetsMegaBezel_POTATOPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\BezelMega_BezelPresetsMegaBezel_SMOOTHADVGLASSPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\BezelMega_BezelPresetsMegaBezel_SMOOTHADVPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\BezelMega_BezelPresetsMegaBezel_STDGLASSPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\BezelMega_BezelPresetsMegaBezel_STDNOREFLECTPresetDef.h"
#include "RetroArch\bezel\Mega_Bezel\Presets\BezelMega_BezelPresetsMegaBezel_STDPresetDef.h"
#include "RetroArch\bezel\uborder\BezelUborderAppendUborderBezelReflectionsPresetDef.h"
#include "RetroArch\bezel\uborder\BezelUborderKokoAmbiCrtPresetDef.h"
#include "RetroArch\bezel\uborder\BezelUborderUborderBezelReflectionsPresetDef.h"
#include "RetroArch\bezel\uborder\BezelUborderUborderKokoAmbiPresetDef.h"
#include "RetroArch\stock\StockBilinearPresetDef.h"
#include "RetroArch\blurs\BlursDual_filter_2_passPresetDef.h"
#include "RetroArch\blurs\BlursDual_filter_4_passPresetDef.h"
#include "RetroArch\blurs\BlursDual_filter_6_passPresetDef.h"
#include "RetroArch\blurs\BlursDual_filter_bloomPresetDef.h"
#include "RetroArch\blurs\BlursDual_filter_bloom_fastPresetDef.h"
#include "RetroArch\blurs\BlursDual_filter_bloom_fastestPresetDef.h"
#include "RetroArch\blurs\BlursGaussian_blurSharpPresetDef.h"
#include "RetroArch\blurs\BlursGaussian_blurPresetDef.h"
#include "RetroArch\blurs\BlursGaussian_blur_2_passSharpPresetDef.h"
#include "RetroArch\blurs\BlursGaussian_blur_2_passPresetDef.h"
#include "RetroArch\blurs\BlursGauss_4tapPresetDef.h"
#include "RetroArch\blurs\BlursGizmoCompositeBlurPresetDef.h"
#include "RetroArch\blurs\BlursKawase_blur_5passPresetDef.h"
#include "RetroArch\blurs\BlursKawase_blur_9passPresetDef.h"
#include "RetroArch\blurs\BlursKawase_glowPresetDef.h"
#include "RetroArch\blurs\BlursSharpsmootherPresetDef.h"
#include "RetroArch\blurs\BlursSmartBlurPresetDef.h"
#include "RetroArch\border\BorderAmbientGlowPresetDef.h"
#include "RetroArch\border\BorderAutocropKokoPresetDef.h"
#include "RetroArch\border\BorderAverage_fillPresetDef.h"
#include "RetroArch\border\BorderBigblurPresetDef.h"
#include "RetroArch\border\BorderBlur_fillPresetDef.h"
#include "RetroArch\border\BorderBlur_fill_stronger_blurPresetDef.h"
#include "RetroArch\border\BorderBlur_fill_weaker_blurPresetDef.h"
#include "RetroArch\border\BorderEffectBorderIqPresetDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerCrtEasymodePresetDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerCrtGeom1xPresetDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerCrtRoyalePresetDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerGbaColorCrtEasymodePresetDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerGbaColorPresetDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerTvoutInterlacingPresetDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerTvoutGbaColorInterlacingPresetDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerTvoutGbaColorPresetDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerTvoutPresetDef.h"
#include "RetroArch\border\gameboy-player\BorderGameboyPlayerGameboyPlayerPresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGbCrtConsumerPresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGbDotPresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGbLcdGridV2PresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGbPresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGbaCrtConsumerPresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGbaDotPresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGbaLcdGridV2PresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGbaPresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGgCrtConsumerPresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGgDotPresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGgLcdGridV2PresetDef.h"
#include "RetroArch\border\handheld-nebula\BorderHandheldNebulaHandheldNebulaGgPresetDef.h"
#include "RetroArch\border\BorderImgborderPresetDef.h"
#include "RetroArch\border\BorderLightgunBorderPresetDef.h"
#include "RetroArch\border\sgb\BorderSgbSgbCrtEasymodePresetDef.h"
#include "RetroArch\border\sgb\BorderSgbSgbCrtGeom1xPresetDef.h"
#include "RetroArch\border\sgb\BorderSgbSgbCrtRoyalePresetDef.h"
#include "RetroArch\border\sgb\BorderSgbSgbGbcColorTvoutInterlacingPresetDef.h"
#include "RetroArch\border\sgb\BorderSgbSgbGbcColorPresetDef.h"
#include "RetroArch\border\sgb\BorderSgbSgbTvoutInterlacingPresetDef.h"
#include "RetroArch\border\sgb\BorderSgbSgbPresetDef.h"
#include "RetroArch\border\sgba\BorderSgbaSgbaGbaColorPresetDef.h"
#include "RetroArch\border\sgba\BorderSgbaSgbaTvoutInterlacingPresetDef.h"
#include "RetroArch\border\sgba\BorderSgbaSgbaTvoutGbaColorInterlacingPresetDef.h"
#include "RetroArch\border\sgba\BorderSgbaSgbaPresetDef.h"
#include "RetroArch\cel\CelAdvcartoonPresetDef.h"
#include "RetroArch\cel\CelMMJ_Cel_ShaderPresetDef.h"
#include "RetroArch\cel\CelMMJ_Cel_Shader_MPPresetDef.h"
#include "RetroArch\crt\CrtAdvanced_crt_whkrmrgks0PresetDef.h"
#include "RetroArch\crt\CrtCathodeRetro_noSignalPresetDef.h"
#include "RetroArch\crt\CrtCrt1tapBloomPresetDef.h"
#include "RetroArch\crt\CrtCrt1tapBloom_fastPresetDef.h"
#include "RetroArch\crt\CrtCrt1tapPresetDef.h"
#include "RetroArch\crt\CrtCrtAperturePresetDef.h"
#include "RetroArch\crt\CrtCrtBlurPiSharpPresetDef.h"
#include "RetroArch\crt\CrtCrtBlurPiSoftPresetDef.h"
#include "RetroArch\crt\CrtCrtCaligariPresetDef.h"
#include "RetroArch\crt\CrtCrtCgwgFastPresetDef.h"
#include "RetroArch\crt\CrtCrtConsumerPresetDef.h"
#include "RetroArch\crt\CrtCrtCyclonPresetDef.h"
#include "RetroArch\crt\CrtCrtEasymodeHalationPresetDef.h"
#include "RetroArch\crt\CrtCrtEasymodePresetDef.h"
#include "RetroArch\crt\CrtCrtFrutbunnPresetDef.h"
#include "RetroArch\crt\CrtCrtGdvMiniUltraTrinitronPresetDef.h"
#include "RetroArch\crt\CrtCrtGdvMiniPresetDef.h"
#include "RetroArch\crt\CrtCrtGeomDeluxePresetDef.h"
#include "RetroArch\crt\CrtCrtGeomMiniPresetDef.h"
#include "RetroArch\crt\CrtCrtGeomTatePresetDef.h"
#include "RetroArch\crt\CrtCrtGeomPresetDef.h"
#include "RetroArch\crt\CrtCrtGuestAdvancedFastPresetDef.h"
#include "RetroArch\crt\CrtCrtGuestAdvancedFastestPresetDef.h"
#include "RetroArch\crt\CrtCrtGuestAdvancedHdPresetDef.h"
#include "RetroArch\crt\CrtCrtGuestAdvancedNtscPresetDef.h"
#include "RetroArch\crt\CrtCrtGuestAdvancedPresetDef.h"
#include "RetroArch\crt\CrtCrtHyllian3dPresetDef.h"
#include "RetroArch\crt\CrtCrtHyllianFastPresetDef.h"
#include "RetroArch\crt\CrtCrtHyllianNtscRainbowPresetDef.h"
#include "RetroArch\crt\CrtCrtHyllianNtscPresetDef.h"
#include "RetroArch\crt\CrtCrtHyllianSincCompositePresetDef.h"
#include "RetroArch\crt\CrtCrtHyllianPresetDef.h"
#include "RetroArch\crt\CrtCrtInterlacedHalationPresetDef.h"
#include "RetroArch\crt\CrtCrtLottesFastPresetDef.h"
#include "RetroArch\crt\CrtCrtLottesMultipassGlowPresetDef.h"
#include "RetroArch\crt\CrtCrtLottesMultipassPresetDef.h"
#include "RetroArch\crt\CrtCrtLottesPresetDef.h"
#include "RetroArch\crt\CrtCrtMattiasPresetDef.h"
#include "RetroArch\crt\CrtCrtMaximusRoyaleFastModePresetDef.h"
#include "RetroArch\crt\CrtCrtMaximusRoyaleHalfResModePresetDef.h"
#include "RetroArch\crt\CrtCrtMaximusRoyalePresetDef.h"
#include "RetroArch\crt\CrtCrtNesMiniPresetDef.h"
#include "RetroArch\crt\CrtCrtNobodyPresetDef.h"
#include "RetroArch\crt\CrtCrtPiPresetDef.h"
#include "RetroArch\crt\CrtCrtPocketPresetDef.h"
#include "RetroArch\crt\CrtCrtPotatoBVMPresetDef.h"
#include "RetroArch\crt\CrtCrtPotatoCoolPresetDef.h"
#include "RetroArch\crt\CrtCrtPotatoWarmPresetDef.h"
#include "RetroArch\crt\CrtCrtResswitchGlitchKokoPresetDef.h"
#include "RetroArch\crt\CrtCrtRoyaleFakeBloomIntelPresetDef.h"
#include "RetroArch\crt\CrtCrtRoyaleFakeBloomPresetDef.h"
#include "RetroArch\crt\CrtCrtRoyaleFastPresetDef.h"
#include "RetroArch\crt\CrtCrtRoyaleIntelPresetDef.h"
#include "RetroArch\crt\CrtCrtRoyalePresetDef.h"
#include "RetroArch\crt\CrtCrtSimplePresetDef.h"
#include "RetroArch\crt\CrtCrtSinesPresetDef.h"
#include "RetroArch\crt\CrtCrtSlangtestCubicPresetDef.h"
#include "RetroArch\crt\CrtCrtSlangtestLanczosPresetDef.h"
#include "RetroArch\crt\CrtCrtSuperXbrPresetDef.h"
#include "RetroArch\crt\CrtCrtTorridgristlePresetDef.h"
#include "RetroArch\crt\CrtCrtYo6FlatTrinitronTvPresetDef.h"
#include "RetroArch\crt\CrtCrtYo6KV21CL10BPresetDef.h"
#include "RetroArch\crt\CrtCrtYo6KVM1420BSharpPresetDef.h"
#include "RetroArch\crt\CrtCrtYo6KVM1420BPresetDef.h"
#include "RetroArch\crt\CrtCrtglow_gaussPresetDef.h"
#include "RetroArch\crt\CrtCrtglow_lanczosPresetDef.h"
#include "RetroArch\crt\CrtCrtsimPresetDef.h"
#include "RetroArch\crt\CrtFakeCrtGeomPotatoPresetDef.h"
#include "RetroArch\crt\CrtFakeCrtGeomPresetDef.h"
#include "RetroArch\crt\CrtFakelottesPresetDef.h"
#include "RetroArch\crt\CrtGizmoCrtPresetDef.h"
#include "RetroArch\crt\CrtGizmoSlotmaskCrtPresetDef.h"
#include "RetroArch\crt\CrtGlow_trailsPresetDef.h"
#include "RetroArch\crt\CrtGritsScanlinesPresetDef.h"
#include "RetroArch\crt\CrtGtuV050PresetDef.h"
#include "RetroArch\crt\CrtMame_hlslPresetDef.h"
#include "RetroArch\crt\CrtMetacrtPresetDef.h"
#include "RetroArch\crt\CrtNewpixieCrtPresetDef.h"
#include "RetroArch\crt\CrtNewpixieMiniPresetDef.h"
#include "RetroArch\crt\CrtPhosphorlutPresetDef.h"
#include "RetroArch\crt\CrtRay_traced_curvaturePresetDef.h"
#include "RetroArch\crt\CrtRay_traced_curvature_appendPresetDef.h"
#include "RetroArch\crt\CrtTvoutTweaksPresetDef.h"
#include "RetroArch\crt\CrtVectorGlowAltRenderPresetDef.h"
#include "RetroArch\crt\CrtVectorGlowPresetDef.h"
#include "RetroArch\crt\CrtVt220PresetDef.h"
#include "RetroArch\crt\CrtYee64PresetDef.h"
#include "RetroArch\crt\CrtYeetronPresetDef.h"
#include "RetroArch\crt\CrtZfastCrtCompositePresetDef.h"
#include "RetroArch\crt\CrtZfastCrtCurvaturePresetDef.h"
#include "RetroArch\crt\CrtZfastCrtGeoPresetDef.h"
#include "RetroArch\crt\CrtZfastCrtHdmaskPresetDef.h"
#include "RetroArch\crt\CrtZfastCrtPresetDef.h"
#include "RetroArch\deblur\DeblurDeblurLumaPresetDef.h"
#include "RetroArch\deblur\DeblurDeblurPresetDef.h"
#include "RetroArch\denoisers\DenoisersBilateral2pPresetDef.h"
#include "RetroArch\denoisers\DenoisersBilateralPresetDef.h"
#include "RetroArch\denoisers\DenoisersCrtFastBilateralSuperXbrPresetDef.h"
#include "RetroArch\denoisers\DenoisersFastBilateralPresetDef.h"
#include "RetroArch\denoisers\DenoisersMedian_3x3PresetDef.h"
#include "RetroArch\denoisers\DenoisersMedian_5x5PresetDef.h"
#include "RetroArch\denoisers\DenoisersSlowBilateralPresetDef.h"
#include "RetroArch\dithering\DitheringBayerMatrixDitheringPresetDef.h"
#include "RetroArch\dithering\DitheringBayer_4x4PresetDef.h"
#include "RetroArch\dithering\DitheringBlue_noisePresetDef.h"
#include "RetroArch\dithering\DitheringBlue_noise_dynamic_4BitPresetDef.h"
#include "RetroArch\dithering\DitheringBlue_noise_dynamic_monochromePresetDef.h"
#include "RetroArch\dithering\DitheringCbod_v1PresetDef.h"
#include "RetroArch\dithering\DitheringCheckerboardDeditherPresetDef.h"
#include "RetroArch\dithering\DitheringGSharp_resamplerPresetDef.h"
#include "RetroArch\dithering\DitheringGdaptPresetDef.h"
#include "RetroArch\dithering\DitheringGenditherPresetDef.h"
#include "RetroArch\dithering\DitheringJinc2DeditherPresetDef.h"
#include "RetroArch\dithering\DitheringMdaptPresetDef.h"
#include "RetroArch\dithering\DitheringPs1DeditherBoxblurPresetDef.h"
#include "RetroArch\dithering\DitheringPs1DeditherComparisonPresetDef.h"
#include "RetroArch\dithering\DitheringPs1DitherPresetDef.h"
#include "RetroArch\dithering\DitheringSgenptMixMultipassPresetDef.h"
#include "RetroArch\dithering\DitheringSgenptMixPresetDef.h"
#include "RetroArch\edge-smoothing\cleanEdge\EdgeSmoothingCleanEdgeCleanEdgeScalePresetDef.h"
#include "RetroArch\edge-smoothing\ddt\EdgeSmoothingDdt3PointPresetDef.h"
#include "RetroArch\edge-smoothing\ddt\EdgeSmoothingDdtCutPresetDef.h"
#include "RetroArch\edge-smoothing\ddt\EdgeSmoothingDdtDdtExtendedPresetDef.h"
#include "RetroArch\edge-smoothing\ddt\EdgeSmoothingDdtDdtJincLinearPresetDef.h"
#include "RetroArch\edge-smoothing\ddt\EdgeSmoothingDdtDdtJincPresetDef.h"
#include "RetroArch\edge-smoothing\ddt\EdgeSmoothingDdtDdtXbrLv1PresetDef.h"
#include "RetroArch\edge-smoothing\ddt\EdgeSmoothingDdtDdtPresetDef.h"
#include "RetroArch\edge-smoothing\eagle\EdgeSmoothingEagle2xsaiFixPixelShiftPresetDef.h"
#include "RetroArch\edge-smoothing\eagle\EdgeSmoothingEagle2xsaiPresetDef.h"
#include "RetroArch\edge-smoothing\eagle\EdgeSmoothingEagleSuper2xsaiFixPixelShiftPresetDef.h"
#include "RetroArch\edge-smoothing\eagle\EdgeSmoothingEagleSuper2xsaiPresetDef.h"
#include "RetroArch\edge-smoothing\eagle\EdgeSmoothingEagleSupereaglePresetDef.h"
#include "RetroArch\edge-smoothing\fsr\EdgeSmoothingFsrFsrEasuPresetDef.h"
#include "RetroArch\edge-smoothing\fsr\EdgeSmoothingFsrFsrPresetDef.h"
#include "RetroArch\edge-smoothing\fsr\EdgeSmoothingFsrSmaaFsrPresetDef.h"
#include "RetroArch\edge-smoothing\hqx\EdgeSmoothingHqxHq2xHalphonPresetDef.h"
#include "RetroArch\edge-smoothing\hqx\EdgeSmoothingHqxHq2xPresetDef.h"
#include "RetroArch\edge-smoothing\hqx\EdgeSmoothingHqxHq3xPresetDef.h"
#include "RetroArch\edge-smoothing\hqx\EdgeSmoothingHqxHq4xPresetDef.h"
#include "RetroArch\edge-smoothing\nedi\EdgeSmoothingNediFastBilateralNediPresetDef.h"
#include "RetroArch\edge-smoothing\nedi\EdgeSmoothingNediNediHybridSharperPresetDef.h"
#include "RetroArch\edge-smoothing\nedi\EdgeSmoothingNediNediHybridPresetDef.h"
#include "RetroArch\edge-smoothing\nedi\EdgeSmoothingNediNediSharperPresetDef.h"
#include "RetroArch\edge-smoothing\nedi\EdgeSmoothingNediNediPresetDef.h"
#include "RetroArch\edge-smoothing\nedi\presets\EdgeSmoothingNediPresetsBilateralVariantPresetDef.h"
#include "RetroArch\edge-smoothing\nedi\presets\EdgeSmoothingNediPresetsBilateralVariant2PresetDef.h"
#include "RetroArch\edge-smoothing\nedi\presets\EdgeSmoothingNediPresetsBilateralVariant3PresetDef.h"
#include "RetroArch\edge-smoothing\nedi\presets\EdgeSmoothingNediPresetsBilateralVariant4PresetDef.h"
#include "RetroArch\edge-smoothing\nedi\presets\EdgeSmoothingNediPresetsBilateralVariant5PresetDef.h"
#include "RetroArch\edge-smoothing\nedi\presets\EdgeSmoothingNediPresetsBilateralVariant6PresetDef.h"
#include "RetroArch\edge-smoothing\nedi\presets\EdgeSmoothingNediPresetsBilateralVariant7PresetDef.h"
#include "RetroArch\edge-smoothing\nnedi3\EdgeSmoothingNnedi3Nnedi3Nns162xLumaPresetDef.h"
#include "RetroArch\edge-smoothing\nnedi3\EdgeSmoothingNnedi3Nnedi3Nns162xRgbPresetDef.h"
#include "RetroArch\edge-smoothing\nnedi3\EdgeSmoothingNnedi3Nnedi3Nns164xLumaPresetDef.h"
#include "RetroArch\edge-smoothing\nnedi3\EdgeSmoothingNnedi3Nnedi3Nns322xRgbNns324xLumaPresetDef.h"
#include "RetroArch\edge-smoothing\nnedi3\EdgeSmoothingNnedi3Nnedi3Nns324xRgbPresetDef.h"
#include "RetroArch\edge-smoothing\nnedi3\EdgeSmoothingNnedi3Nnedi3Nns642xNns324xNns168xRgbPresetDef.h"
#include "RetroArch\edge-smoothing\nnedi3\EdgeSmoothingNnedi3Nnedi3Nns642xNns324xRgbPresetDef.h"
#include "RetroArch\edge-smoothing\omniscale\EdgeSmoothingOmniscaleOmniscaleLegacyPresetDef.h"
#include "RetroArch\edge-smoothing\omniscale\EdgeSmoothingOmniscaleOmniscalePresetDef.h"
#include "RetroArch\edge-smoothing\sabr\EdgeSmoothingSabrSabrHybridDeposterizePresetDef.h"
#include "RetroArch\edge-smoothing\sabr\EdgeSmoothingSabrSabrPresetDef.h"
#include "RetroArch\edge-smoothing\scalefx\EdgeSmoothingScalefxScalefxRAAPresetDef.h"
#include "RetroArch\edge-smoothing\scalefx\EdgeSmoothingScalefxScalefx9xPresetDef.h"
#include "RetroArch\edge-smoothing\scalefx\EdgeSmoothingScalefxScalefxHybridPresetDef.h"
#include "RetroArch\edge-smoothing\scalefx\EdgeSmoothingScalefxScalefxPresetDef.h"
#include "RetroArch\edge-smoothing\scalehq\EdgeSmoothingScalehq2xScaleHQPresetDef.h"
#include "RetroArch\edge-smoothing\scalehq\EdgeSmoothingScalehq4xScaleHQPresetDef.h"
#include "RetroArch\edge-smoothing\scalenx\EdgeSmoothingScalenxEpxPresetDef.h"
#include "RetroArch\edge-smoothing\scalenx\EdgeSmoothingScalenxMmpxPresetDef.h"
#include "RetroArch\edge-smoothing\scalenx\EdgeSmoothingScalenxScale2xPresetDef.h"
#include "RetroArch\edge-smoothing\scalenx\EdgeSmoothingScalenxScale2xplusPresetDef.h"
#include "RetroArch\edge-smoothing\scalenx\EdgeSmoothingScalenxScale2xSFXPresetDef.h"
#include "RetroArch\edge-smoothing\scalenx\EdgeSmoothingScalenxScale3xPresetDef.h"
#include "RetroArch\edge-smoothing\xbr\EdgeSmoothingXbrSuperXbrFastPresetDef.h"
#include "RetroArch\edge-smoothing\xbr\EdgeSmoothingXbrSuperXbrPresetDef.h"
#include "RetroArch\edge-smoothing\xbr\EdgeSmoothingXbrXbrLv2SharpPresetDef.h"
#include "RetroArch\edge-smoothing\xbr\EdgeSmoothingXbrXbrLv2PresetDef.h"
#include "RetroArch\edge-smoothing\xbr\EdgeSmoothingXbrXbrLv3SharpPresetDef.h"
#include "RetroArch\edge-smoothing\xbr\EdgeSmoothingXbrXbrLv3PresetDef.h"
#include "RetroArch\edge-smoothing\xbrz\EdgeSmoothingXbrz2xbrzLinearPresetDef.h"
#include "RetroArch\edge-smoothing\xbrz\EdgeSmoothingXbrz4xbrzLinearPresetDef.h"
#include "RetroArch\edge-smoothing\xbrz\EdgeSmoothingXbrz5xbrzLinearPresetDef.h"
#include "RetroArch\edge-smoothing\xbrz\EdgeSmoothingXbrz6xbrzLinearPresetDef.h"
#include "RetroArch\edge-smoothing\xbrz\EdgeSmoothingXbrzXbrzFreescaleMultipassPresetDef.h"
#include "RetroArch\edge-smoothing\xbrz\EdgeSmoothingXbrzXbrzFreescalePresetDef.h"
#include "RetroArch\edge-smoothing\xsal\EdgeSmoothingXsal2xsalLevel2CrtPresetDef.h"
#include "RetroArch\edge-smoothing\xsal\EdgeSmoothingXsal2xsalPresetDef.h"
#include "RetroArch\edge-smoothing\xsal\EdgeSmoothingXsal4xsalLevel2CrtPresetDef.h"
#include "RetroArch\edge-smoothing\xsal\EdgeSmoothingXsal4xsalLevel2HqPresetDef.h"
#include "RetroArch\edge-smoothing\xsal\EdgeSmoothingXsal4xsalLevel2PresetDef.h"
#include "RetroArch\edge-smoothing\xsoft\EdgeSmoothingXsoft4xsoftPresetDef.h"
#include "RetroArch\edge-smoothing\xsoft\EdgeSmoothingXsoft4xsoftSdBPresetDef.h"
#include "RetroArch\film\FilmFilmGrainPresetDef.h"
#include "RetroArch\film\FilmTechnicolorPresetDef.h"
#include "RetroArch\gpu\Gpu3dfx_4x1PresetDef.h"
#include "RetroArch\gpu\GpuPowervr2PresetDef.h"
#include "RetroArch\handheld\HandheldAgb001PresetDef.h"
#include "RetroArch\handheld\HandheldAgs001PresetDef.h"
#include "RetroArch\handheld\HandheldAuthentic_gbcPresetDef.h"
#include "RetroArch\handheld\HandheldAuthentic_gbc_fastPresetDef.h"
#include "RetroArch\handheld\HandheldAuthentic_gbc_single_passPresetDef.h"
#include "RetroArch\handheld\HandheldBevelPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModDsliteColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModGbaColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModGbcColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModGbcGambatteColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModGbMicroColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModNdsColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModNSOGbaColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModNSOGbcColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModPalmColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModPspColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModSp101ColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModSwitchOLEDColorPresetDef.h"
#include "RetroArch\handheld\color-mod\HandheldColorModVbaColorPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderDmgPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGbDmgAltPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGbLightAltPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGbPocketAltPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGbPocketPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGbaAgb001ColorMotionblurPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGbaAgs001ColorMotionblurPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGbaLcdGridV2PresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGbaPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGbcLcdGridV2PresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGbcPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderGgPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderNgpcPresetDef.h"
#include "RetroArch\handheld\console-border\HandheldConsoleBorderPspPresetDef.h"
#include "RetroArch\handheld\HandheldDotPresetDef.h"
#include "RetroArch\handheld\HandheldDsHybridSabrPresetDef.h"
#include "RetroArch\handheld\HandheldDsHybridScalefxPresetDef.h"
#include "RetroArch\handheld\HandheldGameboyAdvanceDotMatrixPresetDef.h"
#include "RetroArch\handheld\HandheldGameboyColorDotMatrixWhiteBgPresetDef.h"
#include "RetroArch\handheld\HandheldGameboyColorDotMatrixPresetDef.h"
#include "RetroArch\handheld\HandheldGameboyDarkModePresetDef.h"
#include "RetroArch\handheld\HandheldGameboyLightModePresetDef.h"
#include "RetroArch\handheld\HandheldGameboyLightPresetDef.h"
#include "RetroArch\handheld\HandheldGameboyPocketHighContrastPresetDef.h"
#include "RetroArch\handheld\HandheldGameboyPocketPresetDef.h"
#include "RetroArch\handheld\HandheldGameboyPresetDef.h"
#include "RetroArch\handheld\HandheldGbPaletteDmgPresetDef.h"
#include "RetroArch\handheld\HandheldGbPaletteLightPresetDef.h"
#include "RetroArch\handheld\HandheldGbPalettePocketPresetDef.h"
#include "RetroArch\handheld\HandheldGbcDevPresetDef.h"
#include "RetroArch\handheld\HandheldLcdGridV2PresetDef.h"
#include "RetroArch\handheld\HandheldLcdGridPresetDef.h"
#include "RetroArch\handheld\HandheldLcdShaderPresetDef.h"
#include "RetroArch\handheld\HandheldLcd1xPresetDef.h"
#include "RetroArch\handheld\HandheldLcd1x_ndsPresetDef.h"
#include "RetroArch\handheld\HandheldLcd1x_pspPresetDef.h"
#include "RetroArch\handheld\HandheldLcd3xPresetDef.h"
#include "RetroArch\handheld\HandheldRetroTilesPresetDef.h"
#include "RetroArch\handheld\HandheldRetroV2PresetDef.h"
#include "RetroArch\handheld\HandheldRetroV3PresetDef.h"
#include "RetroArch\handheld\HandheldSameboyLcdPresetDef.h"
#include "RetroArch\handheld\HandheldSimpletex_lcd4kPresetDef.h"
#include "RetroArch\handheld\HandheldSimpletex_lcdPresetDef.h"
#include "RetroArch\handheld\HandheldSimpletex_lcd_720pPresetDef.h"
#include "RetroArch\handheld\HandheldZfastLcdPresetDef.h"
#include "RetroArch\interpolation\InterpolationBSpline4TapsPresetDef.h"
#include "RetroArch\interpolation\InterpolationBSplineFastPresetDef.h"
#include "RetroArch\interpolation\InterpolationBicubic5TapsPresetDef.h"
#include "RetroArch\interpolation\InterpolationBicubicFastPresetDef.h"
#include "RetroArch\interpolation\InterpolationBicubicPresetDef.h"
#include "RetroArch\interpolation\InterpolationCatmullRom5TapsPresetDef.h"
#include "RetroArch\interpolation\InterpolationCatmullRomFastPresetDef.h"
#include "RetroArch\interpolation\InterpolationCatmullRomPresetDef.h"
#include "RetroArch\interpolation\InterpolationCubicGammaCorrectPresetDef.h"
#include "RetroArch\interpolation\InterpolationCubicPresetDef.h"
#include "RetroArch\interpolation\InterpolationHermitePresetDef.h"
#include "RetroArch\interpolation\InterpolationJinc2SharpPresetDef.h"
#include "RetroArch\interpolation\InterpolationJinc2SharperPresetDef.h"
#include "RetroArch\interpolation\InterpolationJinc2PresetDef.h"
#include "RetroArch\interpolation\InterpolationLanczos16PresetDef.h"
#include "RetroArch\interpolation\InterpolationLanczos25TapsPresetDef.h"
#include "RetroArch\interpolation\InterpolationLanczos3FastPresetDef.h"
#include "RetroArch\interpolation\InterpolationQuilezPresetDef.h"
#include "RetroArch\interpolation\InterpolationSpline16FastPresetDef.h"
#include "RetroArch\interpolation\InterpolationSpline36FastPresetDef.h"
#include "RetroArch\linear\LinearLinearGammaCorrectPresetDef.h"
#include "RetroArch\misc\MiscAccessibility_modsPresetDef.h"
#include "RetroArch\misc\MiscAntiFlickerPresetDef.h"
#include "RetroArch\misc\MiscAsciiPresetDef.h"
#include "RetroArch\misc\MiscBeadPresetDef.h"
#include "RetroArch\misc\MiscBobDeinterlacingPresetDef.h"
#include "RetroArch\misc\MiscChromaPresetDef.h"
#include "RetroArch\misc\MiscChromaticityPresetDef.h"
#include "RetroArch\misc\MiscCmykHalftoneDotPresetDef.h"
#include "RetroArch\misc\MiscCocktailCabinetPresetDef.h"
#include "RetroArch\misc\MiscColorManglerPresetDef.h"
#include "RetroArch\misc\MiscColorimetryPresetDef.h"
#include "RetroArch\misc\MiscConvergencePresetDef.h"
#include "RetroArch\misc\MiscDebandPresetDef.h"
#include "RetroArch\misc\MiscDeinterlacePresetDef.h"
#include "RetroArch\misc\MiscEdgeDetectPresetDef.h"
#include "RetroArch\misc\MiscEgaPresetDef.h"
#include "RetroArch\misc\MiscGeomAppendPresetDef.h"
#include "RetroArch\misc\MiscGeomPresetDef.h"
#include "RetroArch\misc\MiscGlassPresetDef.h"
#include "RetroArch\misc\MiscGradeNoLUTPresetDef.h"
#include "RetroArch\misc\MiscGradePresetDef.h"
#include "RetroArch\misc\MiscHalf_resPresetDef.h"
#include "RetroArch\misc\MiscImageAdjustmentPresetDef.h"
#include "RetroArch\misc\MiscImg_modPresetDef.h"
#include "RetroArch\misc\MiscInterlacingPresetDef.h"
#include "RetroArch\misc\MiscNaturalVisionPresetDef.h"
#include "RetroArch\misc\MiscNightModePresetDef.h"
#include "RetroArch\misc\MiscNtscColorsPresetDef.h"
#include "RetroArch\misc\MiscPatchyColorPresetDef.h"
#include "RetroArch\misc\MiscReliefPresetDef.h"
#include "RetroArch\misc\MiscRetroPalettesPresetDef.h"
#include "RetroArch\misc\MiscSimple_color_controlsPresetDef.h"
#include "RetroArch\misc\MiscSsGammaRampPresetDef.h"
#include "RetroArch\misc\MiscTonemappingPresetDef.h"
#include "RetroArch\misc\MiscWhite_pointPresetDef.h"
#include "RetroArch\misc\MiscYiqHueAdjustmentPresetDef.h"
#include "RetroArch\motion-interpolation\MotionInterpolationMotion_interpolationPresetDef.h"
#include "RetroArch\motionblur\MotionblurBraidRewindPresetDef.h"
#include "RetroArch\motionblur\MotionblurFeedbackPresetDef.h"
#include "RetroArch\motionblur\MotionblurMix_framesPresetDef.h"
#include "RetroArch\motionblur\MotionblurMix_frames_smartPresetDef.h"
#include "RetroArch\motionblur\MotionblurMotionblurBluePresetDef.h"
#include "RetroArch\motionblur\MotionblurMotionblurColorPresetDef.h"
#include "RetroArch\motionblur\MotionblurMotionblurSimplePresetDef.h"
#include "RetroArch\motionblur\MotionblurResponseTimePresetDef.h"
#include "RetroArch\stock\StockNearestPresetDef.h"
#include "RetroArch\nes_raw_palette\Nes_raw_paletteCgwgFamicomGeomPresetDef.h"
#include "RetroArch\nes_raw_palette\Nes_raw_paletteGtuFamicomPresetDef.h"
#include "RetroArch\nes_raw_palette\Nes_raw_paletteNtscNesPresetDef.h"
#include "RetroArch\nes_raw_palette\Nes_raw_palettePalR57shellRawPresetDef.h"
#include "RetroArch\ntsc\NtscArtifactColorsPresetDef.h"
#include "RetroArch\ntsc\NtscBlarggPresetDef.h"
#include "RetroArch\ntsc\NtscMameNtscPresetDef.h"
#include "RetroArch\ntsc\NtscNtsc256pxCompositeScanlinePresetDef.h"
#include "RetroArch\ntsc\NtscNtsc256pxCompositePresetDef.h"
#include "RetroArch\ntsc\NtscNtsc256pxSvideoScanlinePresetDef.h"
#include "RetroArch\ntsc\NtscNtsc256pxSvideoPresetDef.h"
#include "RetroArch\ntsc\NtscNtsc320pxCompositeScanlinePresetDef.h"
#include "RetroArch\ntsc\NtscNtsc320pxCompositePresetDef.h"
#include "RetroArch\ntsc\NtscNtsc320pxSvideoScanlinePresetDef.h"
#include "RetroArch\ntsc\NtscNtsc320pxSvideoPresetDef.h"
#include "RetroArch\ntsc\NtscNtscAdaptive4xPresetDef.h"
#include "RetroArch\ntsc\NtscNtscAdaptiveOldPresetDef.h"
#include "RetroArch\ntsc\NtscNtscAdaptiveTatePresetDef.h"
#include "RetroArch\ntsc\NtscNtscAdaptivePresetDef.h"
#include "RetroArch\ntsc\NtscNtscBlastemPresetDef.h"
#include "RetroArch\ntsc\NtscNtscMdRainbowsPresetDef.h"
#include "RetroArch\ntsc\NtscNtscMiniPresetDef.h"
#include "RetroArch\ntsc\NtscNtscSimplePresetDef.h"
#include "RetroArch\ntsc\NtscTiny_ntscPresetDef.h"
#include "RetroArch\pal\PalPalR57shellMoireOnlyPresetDef.h"
#include "RetroArch\pal\PalPalR57shellPresetDef.h"
#include "RetroArch\pal\PalPalSinglepassPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingAannPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingBandlimitPixelPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingBilinearAdjustablePresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingBox_filter_aa_xformPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingCleanEdgeRotatePresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingControlled_sharpnessPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingEdge1pixelPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingEdgeNpixelsPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingGridBlendHybridPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingPixellatePresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingPixel_aaPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingPixel_aa_fastPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingPixel_aa_single_passPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingPixel_aa_xformPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingSharpBilinear2xPrescalePresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingSharpBilinearScanlinesPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingSharpBilinearSimplePresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingSharpBilinearPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingSharpShimmerlessPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingSmootheststepPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingSmuberstepPresetDef.h"
#include "RetroArch\pixel-art-scaling\PixelArtScalingUniformNearestPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursDualBloomFilterAaLv2FsrGammaRampGlassPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursDualBloomFilterAaLv2FsrGammaRampPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursDualBloomFilterAaLv2FsrPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursGizmoCompositeBlurAaLv2FsrGammaRampGsharpResamplerPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursGizmoCompositeBlurAaLv2FsrGammaRampPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursGizmoCompositeBlurAaLv2FsrGsharpResamplerPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursGizmoCompositeBlurAaLv2FsrPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursKawaseGlowBspline4tapsFsrGammaRampTonemappingPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursSmartblurBspline4tapsFsrGammaRampVhsPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursSmartblurBspline4tapsFsrGammaRampPresetDef.h"
#include "RetroArch\presets\blurs\PresetsBlursSmartblurBspline4tapsFsrPresetDef.h"
#include "RetroArch\presets\crt-beam-simulator\PresetsCrtBeamSimulatorCrtBeamSimulatorCrtFastBilateralSuperXbrColorManglerColorimetryPresetDef.h"
#include "RetroArch\presets\crt-beam-simulator\PresetsCrtBeamSimulatorCrtBeamSimulatorCrtFastBilateralSuperXbrPresetDef.h"
#include "RetroArch\presets\crt-beam-simulator\PresetsCrtBeamSimulatorCrtBeamSimulatorCrtroyaleNtscSvideoPresetDef.h"
#include "RetroArch\presets\crt-beam-simulator\PresetsCrtBeamSimulatorCrtBeamSimulatorFsrCrtroyaleNtscSvideoPresetDef.h"
#include "RetroArch\presets\crt-beam-simulator\PresetsCrtBeamSimulatorCrtBeamSimulatorFsrCrtroyalePresetDef.h"
#include "RetroArch\presets\crt-beam-simulator\PresetsCrtBeamSimulatorCrtBeamSimulatorFsrSonyCrtMegatronHdrPresetDef.h"
#include "RetroArch\presets\crt-beam-simulator\PresetsCrtBeamSimulatorCrtBeamSimulatorNnedi3Nns164xLumaFsrCrtroyalePresetDef.h"
#include "RetroArch\presets\PresetsCrtGeomSimplePresetDef.h"
#include "RetroArch\presets\PresetsCrtHyllianSincSmartblurSgenptPresetDef.h"
#include "RetroArch\presets\PresetsCrtHyllianSmartblurSgenptPresetDef.h"
#include "RetroArch\presets\PresetsCrtLottesMultipassInterlacedGlowPresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpCompositeGlowPresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpCompositePresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpSvideoNtsc_x4GlowPresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpSvideoNtsc_x4PresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpSvideoNtsc_x5GlowPresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpSvideoNtsc_x5PresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpSvideoNtsc_x6GlowPresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpSvideoNtsc_x6PresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpTateCompositeGlowPresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpTateCompositePresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpTateSvideoNtsc_x4GlowPresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpTateSvideoNtsc_x4PresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpTateSvideoNtsc_x5GlowPresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpTateSvideoNtsc_x5PresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpTateSvideoNtsc_x6GlowPresetDef.h"
#include "RetroArch\presets\crt-ntsc-sharp\PresetsCrtNtscSharpTateSvideoNtsc_x6PresetDef.h"
#include "RetroArch\presets\crt-plus-signal\PresetsCrtPlusSignalC64MonitorPresetDef.h"
#include "RetroArch\presets\crt-plus-signal\PresetsCrtPlusSignalCrtGeomDeluxeNtscAdaptivePresetDef.h"
#include "RetroArch\presets\crt-plus-signal\PresetsCrtPlusSignalCrtRoyaleFastNtscCompositePresetDef.h"
#include "RetroArch\presets\crt-plus-signal\PresetsCrtPlusSignalCrtRoyaleNtscCompositePresetDef.h"
#include "RetroArch\presets\crt-plus-signal\PresetsCrtPlusSignalCrtRoyaleNtscSvideoPresetDef.h"
#include "RetroArch\presets\crt-plus-signal\PresetsCrtPlusSignalCrtRoyalePalR57shellPresetDef.h"
#include "RetroArch\presets\crt-plus-signal\PresetsCrtPlusSignalCrtglow_gauss_ntscPresetDef.h"
#include "RetroArch\presets\crt-plus-signal\PresetsCrtPlusSignalMy_old_tvPresetDef.h"
#include "RetroArch\presets\crt-plus-signal\PresetsCrtPlusSignalNtscPhosphorlutPresetDef.h"
#include "RetroArch\presets\crt-plus-signal\PresetsCrtPlusSignalNtsclutPhosphorlutPresetDef.h"
#include "RetroArch\presets\crt-potato\PresetsCrtPotatoCrtPotatoColorimetryConvergencePresetDef.h"
#include "RetroArch\presets\PresetsCrtRoyaleDownsamplePresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeApertureGenesisRainbowEffectPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeApertureGenesisPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeAperturePsxPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeApertureSnesPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeAperturePresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeSlotmaskGenesisRainbowEffectPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeSlotmaskGenesisPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeSlotmaskPsxPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeSlotmaskSnesPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeSlotmaskPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastNtscRfSlotmaskNesPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastRgbAperturePresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyaleFastRgbSlotPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyalePvmNtscCompositeGenesisRainbowEffectPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyalePvmNtscCompositeGenesisPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyalePvmNtscCompositePsxPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyalePvmNtscCompositeSnesPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyalePvmNtscCompositePresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyalePvmRgbBlendPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyalePvmRgbShmupPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\4k\PresetsCrtRoyaleFast4kCrtRoyalePvmRgbPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeApertureGenesisRainbowEffectPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeApertureGenesisPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeAperturePsxPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeApertureSnesPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeAperturePresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeSlotmaskGenesisRainbowEffectPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeSlotmaskGenesisPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeSlotmaskPsxPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeSlotmaskSnesPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeSlotmaskPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastNtscRfSlotmaskNesPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastRgbAperturePresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyaleFastRgbSlotPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyalePvmNtscCompositeGenesisRainbowEffectPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyalePvmNtscCompositeGenesisPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyalePvmNtscCompositePsxPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyalePvmNtscCompositeSnesPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyalePvmNtscCompositePresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyalePvmRgbBlendPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyalePvmRgbShmupPresetDef.h"
#include "RetroArch\presets\crt-royale-fast\PresetsCrtRoyaleFastCrtRoyalePvmRgbPresetDef.h"
#include "RetroArch\presets\PresetsCrtRoyaleKurozumiPresetDef.h"
#include "RetroArch\presets\PresetsCrtRoyaleSmoothPresetDef.h"
#include "RetroArch\presets\PresetsCrtRoyaleXm29plusPresetDef.h"
#include "RetroArch\presets\PresetsCrtsimGrungyPresetDef.h"
#include "RetroArch\presets\downsample\PresetsDownsampleDrez8xFsrAaLv2Bspline4tapsPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2Bspline4tapsNtscColorsPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2Bspline4tapsPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2DeblurPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2GlassPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2Kawase5blurNtscColorsGlassPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2Kawase5blurNtscColorsPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2Median3x3GlassPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2Median3x3NtscColorsGlassPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2Median3x3NtscColorsPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2Median3x3PresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2NaturalvisionGlassPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2NaturalvisionVhsPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2NaturalvisionPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2SabrHybridDeposterizePresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2VhsPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrAaLv2PresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrCrtPotatoBvmVhsPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrCrtPotatoBvmPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrCrtPotatoColorimetryConvergencePresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrCrtPotatoWarmColorimetryConvergencePresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrCrtroyaleXm29plusPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrCrtroyalePresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrLv2AaChromacityGlassPresetDef.h"
#include "RetroArch\presets\fsr\PresetsFsrFsrSmaaColorimetryConvergencePresetDef.h"
#include "RetroArch\presets\PresetsGameboyAdvanceDotMatrixSepiaPresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtCurvatorPresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtMegadriveCurvatorPresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtMegadrivePresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtN64CurvatorPresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtN64PresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtPsxCurvatorPresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtPsxPresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtSnes4kPresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtSnesCurvator4kPresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtSnesDarkCurvatorPresetDef.h"
#include "RetroArch\presets\gizmo-crt\PresetsGizmoCrtGizmoCrtSnesDarkPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModAgb001GbaColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModAgs001GbaColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModBandlimitPixelGbaColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2DsliteColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2DsliteColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2GbaColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2GbaColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2GbcColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2GbcColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2GbMicroColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2GbMicroColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2NdsColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2NdsColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2PalmColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2PalmColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2PspColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2PspColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2Sp101ColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2Sp101ColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2VbaColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModLcdGridV2VbaColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModRetroV2GbaColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModRetroV2GbcColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModRetroV2ImageAdjustmentPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModRetroV2NdsColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModRetroV2PspColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModRetroV2VbaColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModRetroV3NdsColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModSameboyLcdGbcColorMotionblurPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModSimpletex_lcdGbaColor4kPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModSimpletex_lcdGbaColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModSimpletex_lcdGbcColor4kPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModSimpletex_lcdGbcColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModSimpletex_lcd_720pGbaColorPresetDef.h"
#include "RetroArch\presets\handheld-plus-color-mod\PresetsHandheldPlusColorModSimpletex_lcd_720pGbcColorPresetDef.h"
#include "RetroArch\presets\PresetsImgborderRoyaleKurozumiPresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationBspline4tapsAaLv2FsrGammaRampPresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationBspline4tapsAaLv2FsrPowervrPresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationBspline4tapsAaLv2FsrPresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationBspline4tapsAaLv2PresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationBspline4tapsFsrVhsPresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationLanczos25tapsFsrGammaRampVhsPresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationLanczos25tapsFsrGammaRampPresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationLanczos25tapsFsrPresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationSpline36FastFsrGammaRampVhsPresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationSpline36FastFsrGammaRampPresetDef.h"
#include "RetroArch\presets\interpolation\PresetsInterpolationSpline36FastFsrPresetDef.h"
#include "RetroArch\presets\PresetsMdaptFastBilateralSuper4xbrScanlinesPresetDef.h"
#include "RetroArch\presets\PresetsNediPowervrSharpenPresetDef.h"
#include "RetroArch\presets\PresetsNesColorDecoderColorimetryPixellatePresetDef.h"
#include "RetroArch\presets\PresetsNesColorDecoderPixellatePresetDef.h"
#include "RetroArch\presets\scalefx-plus-smoothing\PresetsScalefxPlusSmoothingScalefxRAAAaFastPresetDef.h"
#include "RetroArch\presets\scalefx-plus-smoothing\PresetsScalefxPlusSmoothingScalefxRAAAaPresetDef.h"
#include "RetroArch\presets\scalefx-plus-smoothing\PresetsScalefxPlusSmoothingScalefxAaFastPresetDef.h"
#include "RetroArch\presets\scalefx-plus-smoothing\PresetsScalefxPlusSmoothingScalefxAaPresetDef.h"
#include "RetroArch\presets\scalefx-plus-smoothing\PresetsScalefxPlusSmoothingScalefx9AaBlurHazyNtscSh1nra358PresetDef.h"
#include "RetroArch\presets\scalefx-plus-smoothing\PresetsScalefxPlusSmoothingScalefx9AaBlurHazyVibranceSh1nra358PresetDef.h"
#include "RetroArch\presets\scalefx-plus-smoothing\PresetsScalefxPlusSmoothingXsoftScalefxLevel2aaSharpsmootherPresetDef.h"
#include "RetroArch\presets\scalefx-plus-smoothing\PresetsScalefxPlusSmoothingXsoftScalefxLevel2aaPresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutNesColorDecoderPresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutNtsc256pxCompositePresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutNtsc256pxSvideoPresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutNtsc2phaseCompositePresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutNtsc2phaseSvideoPresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutNtsc320pxCompositePresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutNtsc320pxSvideoPresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutNtsc3phaseCompositePresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutNtsc3phaseSvideoPresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutNtscNesPresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutSnesHiresBlendPresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutJincSharpenPresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutPixelsharpPresetDef.h"
#include "RetroArch\presets\tvout\PresetsTvoutTvoutPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutNesColorDecoderInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutNtsc256pxCompositeInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutNtsc256pxSvideoInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutNtsc2phaseCompositeInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutNtsc2phaseSvideoInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutNtsc320pxCompositeInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutNtsc320pxSvideoInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutNtsc3phaseCompositeInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutNtsc3phaseSvideoInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutNtscNesInterlacingPresetDef.h"
#include "RetroArch\presets\tvout+interlacing\PresetsTvoutInterlacingTvoutJincSharpenInterlacingPresetDef.h"
#include "RetroArch\presets\xbr-xsal\PresetsXbrXsalXbrLv32xsalLv2AaSoftPresetDef.h"
#include "RetroArch\presets\xbr-xsal\PresetsXbrXsalXbrLv32xsalLv2AaPresetDef.h"
#include "RetroArch\presets\xbr-xsal\PresetsXbrXsalXbrLv3AaFastPresetDef.h"
#include "RetroArch\presets\xbr-xsal\PresetsXbrXsalXbrLv3AaSoftFastPresetDef.h"
#include "RetroArch\reshade\ReshadeBlendoverlayPresetDef.h"
#include "RetroArch\reshade\ReshadeBloomPresetDef.h"
#include "RetroArch\reshade\ReshadeBsnesGammaRampPresetDef.h"
#include "RetroArch\reshade\ReshadeFilmGrainPresetDef.h"
#include "RetroArch\reshade\ReshadeHalftonePrintPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsDSLite2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsDSLiteP3PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsDSLiteSRGBPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBA2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBAP3DarkPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBAP3PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBARec2020DarkPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBARec2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBASRGBDarkPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBASRGBPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBA_GBC2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBA_GBCP3PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBA_GBCSRGBPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBCDevColorspacePresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBC2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBCP3PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBCRec2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBCSRGBPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBMicro2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBMicroP3PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsGBMicroSRGBPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsNDS2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsNDSP3PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsNDSRec2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsNDSSRGBPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsNSOGBAPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsNSOGBCPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsPSP2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsPSPP3PureGamma22PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsPSPP3PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsPSPRec2020SRGBGamma22PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsPSPRec2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsPSPSRGBSRGBGamma22PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsPSPSRGBPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSP1012020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSP101P3PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSP101SRGBPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSwitchOLEDP3SRGBGamma22PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSwitchOLEDP3PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSwitchOLEDRec2020SRGBGamma22PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSwitchOLEDRec2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSwitchOLEDSRGBSRGBGamma22PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSwitchOLEDSRGBPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSWOLED2020PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSWOLEDP3PresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsSWOLEDSRGBPresetDef.h"
#include "RetroArch\reshade\handheld-color-LUTs\ReshadeHandheldColorLUTsVBAColorspacePresetDef.h"
#include "RetroArch\reshade\ReshadeLutPresetDef.h"
#include "RetroArch\reshade\ReshadeMagicbloomPresetDef.h"
#include "RetroArch\reshade\ReshadeNormalsDisplacementPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCArcadeCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCArcadeDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCDOSHighResCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCDOSHighResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCDOSLowResCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCDOSLowResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCDreamcastCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCDreamcastDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCGBACleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCGBADirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCMasterSystemCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCMasterSystemDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCMegaDriveCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCMegaDriveDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCMegaDriveRF100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCN64PresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCNESComposite100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCPCEComposite100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCPCERGB100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCPCEPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCPlayStationCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCPlayStationDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCPlayStationRGB100240pPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCPlayStationRGB100480iPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCPS2CleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCPS2DirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCPS2PresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCSaturnPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCSGBCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCSGBDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCSNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCSNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCSNESRF100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Curved\RetroCrisis1080pCurvedRCGDVNTSCSNESRGB100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCArcadeCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCArcadeDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCDOSHighResCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCDOSHighResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCDOSLowResCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCDOSLowResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCDreamcastCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCDreamcastDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCGBACleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCGBADirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCMasterSystemCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCMasterSystemDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCMegaDriveCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCMegaDriveDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCMegaDriveRF100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCN64PresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCNESComposite100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCPCEComposite100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCPCERGB100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCPCEPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCPlayStationCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCPlayStationDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCPlayStationRGB100240pPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCPlayStationRGB100480iPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCPS2CleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCPS2DirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCPS2PresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCSaturnPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCSGBCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCSGBDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCSNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCSNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCSNESRF100PresetDef.h"
#include "RetroArch\retro-crisis\1080p Flat\RetroCrisis1080pFlatRCGDVNTSCSNESRGB100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCArcadeCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCArcadeDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCDOSHighResCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCDOSHighResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCDOSLowResCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCDOSLowResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCDreamcastCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCDreamcastDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCGBACleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCGBADirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCMasterSystemCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCMasterSystemDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCMegaDriveCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCMegaDriveDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCMegaDriveRF100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCN64PresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCNESComposite100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCPCEComposite100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCPCERGB100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCPCEPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCPlayStationCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCPlayStationDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCPlayStationRGB100240pPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCPlayStationRGB100480iPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCPS2CleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCPS2DirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCPS2PresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCSaturnPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCSGBCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCSGBDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCSNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCSNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCSNESRF100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Curved\RetroCrisis1440pCurvedRCGDVNTSCSNESRGB100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCArcadeCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCArcadeDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCDOSHighResCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCDOSHighResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCDOSLowResCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCDOSLowResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCDreamcastCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCDreamcastDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCGBACleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCGBADirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCMasterSystemCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCMasterSystemDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCMegaDriveCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCMegaDriveDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCMegaDriveRF100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCN64PresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCNESComposite100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCPCEComposite100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCPCERGB100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCPCEPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCPlayStationCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCPlayStationDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCPlayStationRGB100240pPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCPlayStationRGB100480iPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCPS2CleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCPS2DirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCPS2PresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCSaturnPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCSGBCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCSGBDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCSNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCSNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCSNESRF100PresetDef.h"
#include "RetroArch\retro-crisis\1440p Flat\RetroCrisis1440pFlatRCGDVNTSCSNESRGB100PresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCArcadeCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCArcadeDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCDOSHighResCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCDOSHighResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCDOSLowResCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCDOSLowResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCDreamcastCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCDreamcastDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCGBACleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCGBADirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCMasterSystemCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCMasterSystemDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCMegaDriveCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCMegaDriveDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCMegaDriveRF100PresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCN64PresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCNESComposite100PresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCPCEComposite100PresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCPCERGB100PresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCPCEPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCPlayStationCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCPlayStationDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCPlayStationRGB100240pPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCPlayStationRGB100480iPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCPS2CleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCPS2DirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCPS2PresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCSaturnPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCSGBCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCSGBDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCSNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCSNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCSNESRF100PresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCSNESRGB100PresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCVHS1080pCurvedPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCVHS2160pCurvedPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCVHS240pCurvedPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCVHS360pCurvedPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCVHS480pCurvedPresetDef.h"
#include "RetroArch\retro-crisis\4K Curved\RetroCrisis4KCurvedRCGDVNTSCVHS720pCurvedPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCArcadeCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCArcadeDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCDOSHighResCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCDOSHighResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCDOSLowResCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCDOSLowResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCDreamcastCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCDreamcastDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCGBACleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCGBADirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCMasterSystemCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCMasterSystemDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCMegaDriveCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCMegaDriveDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCMegaDriveRF100PresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCN64PresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCNESComposite100PresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCPCEComposite100PresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCPCERGB100PresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCPCEPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCPlayStationCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCPlayStationDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCPlayStationRGB100240pPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCPlayStationRGB100480iPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCPS2CleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCPS2DirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCPS2PresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCSaturnPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCSGBCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCSGBDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCSNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCSNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCSNESRF100PresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCSNESRGB100PresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCVHS1080pPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCVHS2160pPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCVHS240pPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCVHS360pPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCVHS480pPresetDef.h"
#include "RetroArch\retro-crisis\4K Flat\RetroCrisis4KFlatRCGDVNTSCVHS720pPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCArcadeCleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCArcadeDirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCDOSHighResCleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCDOSHighResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCDOSLowResCleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCDOSLowResDirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCDreamcastCleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCDreamcastDirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCGBACleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCGBADirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCMasterSystemCleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCMasterSystemDirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCMegaDriveCleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCMegaDriveDirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCMegaDriveRF100PresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCN64PresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCNESComposite100PresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCPCEComposite100PresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCPCERGB100PresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCPCEPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCPlayStationCleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCPlayStationDirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCPlayStationRGB100240pPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCPlayStationRGB100480iPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCPS2CleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCPS2DirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCPS2PresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCSaturnPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCSGBCleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCSGBDirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCSNESCleanPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCSNESDirtyPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCSNESRF100PresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCSNESRGB100PresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCVHS1080pPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCVHS2160pPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCVHS240pPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCVHS360pPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCVHS480pPresetDef.h"
#include "RetroArch\retro-crisis\720p Steam Deck\RetroCrisis720pSteamDeckRCGDVNTSCVHS720pPresetDef.h"
#include "RetroArch\scanlines\ScanlinesIntegerScalingScanlinesPresetDef.h"
#include "RetroArch\scanlines\ScanlinesOsscPresetDef.h"
#include "RetroArch\scanlines\ScanlinesOssc_slotPresetDef.h"
#include "RetroArch\scanlines\ScanlinesResIndependentScanlinesPresetDef.h"
#include "RetroArch\scanlines\ScanlinesScanlineFractPresetDef.h"
#include "RetroArch\scanlines\ScanlinesScanlinePresetDef.h"
#include "RetroArch\scanlines\ScanlinesScanlinesRerePresetDef.h"
#include "RetroArch\scanlines\ScanlinesScanlinesSineAbsPresetDef.h"
#include "RetroArch\sharpen\SharpenAdaptiveSharpenMultipassPresetDef.h"
#include "RetroArch\sharpen\SharpenAdaptiveSharpenPresetDef.h"
#include "RetroArch\sharpen\SharpenAnime4kPresetDef.h"
#include "RetroArch\sharpen\SharpenCheapSharpenPresetDef.h"
#include "RetroArch\sharpen\SharpenRca_sharpenPresetDef.h"
#include "RetroArch\sharpen\SharpenSuperXbrSuperResPresetDef.h"
#include "RetroArch\stereoscopic-3d\Stereoscopic3dAnaglyphToSideBySidePresetDef.h"
#include "RetroArch\stereoscopic-3d\Stereoscopic3dFubax_vrPresetDef.h"
#include "RetroArch\stereoscopic-3d\Stereoscopic3dShutterToAnaglyphPresetDef.h"
#include "RetroArch\stereoscopic-3d\Stereoscopic3dShutterToSideBySidePresetDef.h"
#include "RetroArch\stereoscopic-3d\Stereoscopic3dSideBySideSimplePresetDef.h"
#include "RetroArch\stereoscopic-3d\Stereoscopic3dSideBySideToInterlacedPresetDef.h"
#include "RetroArch\stereoscopic-3d\Stereoscopic3dSideBySideToShutterPresetDef.h"
#include "RetroArch\vhs\VhsGristleVHSPresetDef.h"
#include "RetroArch\vhs\VhsMudlordPalVhsPresetDef.h"
#include "RetroArch\vhs\VhsNtscVcrPresetDef.h"
#include "RetroArch\vhs\VhsVhsPresetDef.h"
#include "RetroArch\vhs\VhsVHSProPresetDef.h"
#include "RetroArch\vhs\VhsVhs_and_crt_godotPresetDef.h"
#include "RetroArch\vhs\VhsVhs_mpalkoPresetDef.h"
#include "RetroArch\warp\WarpDilationPresetDef.h"
// %PRESET_INCLUDE%

namespace RetroArch
{
const static std::vector<PresetDef*> PresetList = {
new AnamorphicAnamorphicPresetDef(),
new AntiAliasingAaShader40Level2PresetDef(),
new AntiAliasingAaShader40PresetDef(),
new AntiAliasingAdvancedAaPresetDef(),
new AntiAliasingFxaaLinearPresetDef(),
new AntiAliasingFxaaPresetDef(),
new AntiAliasingReverseAaPresetDef(),
new AntiAliasingSmaaLinearPresetDef(),
new AntiAliasingSmaaSharpenPresetDef(),
new AntiAliasingSmaaPresetDef(),
new BezelKokoAioKokoAioNgPresetDef(),
new BezelKokoAioPresetsNgBasePresetDef(),
new BezelKokoAioPresetsNgMonitorAmbilightImmersivePresetDef(),
new BezelKokoAioPresetsNgMonitorBalancedPresetDef(),
new BezelKokoAioPresetsNgMonitorFor_1440pMin_HiNitsPresetDef(),
new BezelKokoAioPresetsNgMonitorFor_HigherNitsPresetDef(),
new BezelKokoAioPresetsNgMonitorFXAA_sharpAperturegrillePresetDef(),
new BezelKokoAioPresetsNgMonitorFXAA_sharpCore_SlotMaskPresetDef(),
new BezelKokoAioPresetsNgMonitorFXAA_sharpScreen_SlotMaskPresetDef(),
new BezelKokoAioPresetsNgMonitorNew_aperturegrille_gmPresetDef(),
new BezelKokoAioPresetsNgMonitorNew_slotmask_gmPresetDef(),
new BezelKokoAioPresetsNgMonitorNew_slotmask_rgbPresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_HmaskAperturegrilleOvermaskPresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_HmaskAperturegrillePresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_HmaskCore_SlotMaskOvermaskPresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_HmaskCore_SlotMaskPresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_HmaskScreen_SlotMaskChameleonPresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_HmaskScreen_SlotMaskPresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_HmaskScreen_SlotMask_TallerPresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_HmaskScreen_SlotMask_Taller_BrighterPresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_HmaskScreen_SlotMask_Taller_MaxMaskPresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_HmaskShadowMaskPresetDef(),
new BezelKokoAioPresetsNgMonitorScreen_Hmask_OverlappedOldpainlessPresetDef(),
new BezelKokoAioPresetsNgTVTvNTSC_GenericAA_sharpSelectivePresetDef(),
new BezelKokoAioPresetsNgTVTvNTSC_MegadriveAA_sharpSelectivePresetDef(),
new BezelKokoAioPresetsNgVectorGFXVector_neon_4_mame2003plus_defaultsPresetDef(),
new BezelKokoAioPresetsNgVectorGFXVector_std_4_mame2003plus_defaultsPresetDef(),
new BezelKokoAioPresetsNgVGAMonitorVGADoubleScanAmberPresetDef(),
new BezelKokoAioPresetsNgVGAMonitorVGADoubleScanGreenPresetDef(),
new BezelKokoAioPresetsNgVGAMonitorVGADoubleScanShadowMaskPresetDef(),
new BezelKokoAioPresetsNgVGAMonitorVGADoubleScanXBRPresetDef(),
new BezelKokoAioPresetsNgVGAMonitorVGADoubleScanPresetDef(),
new BezelKokoAioPresets_HandheldsNgDots_11PresetDef(),
new BezelKokoAioPresets_HandheldsNgDots_43PresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyAdvanceOverlayNightPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyAdvanceOverlayPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyColorOverlayIPSPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyColorOverlayTallerIPSPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyColorOverlayTallerPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyColorOverlayPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyColorPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyMonoOverlayTallerPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyMonoOverlayPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyMonoPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyPocketOverlayTallerPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyPocketOverlayPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameboyPocketPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameGearOverlayNightPresetDef(),
new BezelKokoAioPresets_HandheldsNgGameGearOverlayPresetDef(),
new BezelKokoAioPresets_HandheldsNgGenericHandheldRGBPresetDef(),
new BezelKokoAioPresets_HandheldsNgPSPOverlayNightBigY_flipPresetDef(),
new BezelKokoAioPresets_HandheldsNgPSPOverlayNightBigPresetDef(),
new BezelKokoAioPresets_HandheldsNgPSPOverlayNightSmallY_flipPresetDef(),
new BezelKokoAioPresets_HandheldsNgPSPOverlayNightSmallPresetDef(),
new BezelKokoAioPresets_HandheldsNgPSPPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__EASYMODEPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__GDVMINIPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__LCDGRIDPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVGLASS__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVNOREFLECT__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVNOREFLECT__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVNOREFLECT__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVNOREFLECT__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVSCREENONLY__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVSCREENONLY__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVSCREENONLY__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADVSCREENONLY__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADV__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADV__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADV__LCDGRIDPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADV__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__0__SMOOTHADV__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADVRESHADEFX__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADVSUPERXBR__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADVSUPERXBR__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__EASYMODEPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__GDVMININTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__GDVMINIPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__LCDGRIDPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__1__ADV__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASSRESHADEFX__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASSSUPERXBR__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASSSUPERXBR__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__EASYMODEPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__GDVMININTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__GDVMINIPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__LCDGRIDPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVGLASS__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECTSUPERXBR__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECTSUPERXBR__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECT__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECT__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECT__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVNOREFLECT__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLYNOTUBEFX__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLYSUPERXBR__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLYSUPERXBR__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__GDVMININTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__GDVMINIPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__2__ADVSCREENONLY__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASSSUPERXBR__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASSSUPERXBR__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__GDVMININTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__GDVMINIPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__LCDGRIDPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDGLASS__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDSUPERXBR__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STDSUPERXBR__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__EASYMODEPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__GDVMININTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__GDVMINIPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__LCDGRIDPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__3__STD__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECTSUPERXBR__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECTSUPERXBR__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__EASYMODEPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__GDVMININTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__GDVMINIPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__LCDGRIDPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDNOREFLECT__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLYNOTUBEFX__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLYSUPERXBR__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLYSUPERXBR__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__EASYMODEPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__GDVMININTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__GDVMINIPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__LCDGRIDPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__4__STDSCREENONLY__MEGATRONPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATOSUPERXBR__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATOSUPERXBR__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__EASYMODEPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__GDVMININTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__GDVMINIPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__GDVNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__GDVPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__LCDGRIDPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__MEGATRONNTSCPresetDef(),
new BezelMega_BezelPresetsBase_CRT_PresetsMBZ__5__POTATO__MEGATRONPresetDef(),
new BezelMega_BezelPresetsMegaBezel_ADVGLASSPresetDef(),
new BezelMega_BezelPresetsMegaBezel_ADVNOREFLECTPresetDef(),
new BezelMega_BezelPresetsMegaBezel_ADVPresetDef(),
new BezelMega_BezelPresetsMegaBezel_POTATOPresetDef(),
new BezelMega_BezelPresetsMegaBezel_SMOOTHADVGLASSPresetDef(),
new BezelMega_BezelPresetsMegaBezel_SMOOTHADVPresetDef(),
new BezelMega_BezelPresetsMegaBezel_STDGLASSPresetDef(),
new BezelMega_BezelPresetsMegaBezel_STDNOREFLECTPresetDef(),
new BezelMega_BezelPresetsMegaBezel_STDPresetDef(),
new BezelUborderAppendUborderBezelReflectionsPresetDef(),
new BezelUborderKokoAmbiCrtPresetDef(),
new BezelUborderUborderBezelReflectionsPresetDef(),
new BezelUborderUborderKokoAmbiPresetDef(),
new StockBilinearPresetDef(),
new BlursDual_filter_2_passPresetDef(),
new BlursDual_filter_4_passPresetDef(),
new BlursDual_filter_6_passPresetDef(),
new BlursDual_filter_bloomPresetDef(),
new BlursDual_filter_bloom_fastPresetDef(),
new BlursDual_filter_bloom_fastestPresetDef(),
new BlursGaussian_blurSharpPresetDef(),
new BlursGaussian_blurPresetDef(),
new BlursGaussian_blur_2_passSharpPresetDef(),
new BlursGaussian_blur_2_passPresetDef(),
new BlursGauss_4tapPresetDef(),
new BlursGizmoCompositeBlurPresetDef(),
new BlursKawase_blur_5passPresetDef(),
new BlursKawase_blur_9passPresetDef(),
new BlursKawase_glowPresetDef(),
new BlursSharpsmootherPresetDef(),
new BlursSmartBlurPresetDef(),
new BorderAmbientGlowPresetDef(),
new BorderAutocropKokoPresetDef(),
new BorderAverage_fillPresetDef(),
new BorderBigblurPresetDef(),
new BorderBlur_fillPresetDef(),
new BorderBlur_fill_stronger_blurPresetDef(),
new BorderBlur_fill_weaker_blurPresetDef(),
new BorderEffectBorderIqPresetDef(),
new BorderGameboyPlayerGameboyPlayerCrtEasymodePresetDef(),
new BorderGameboyPlayerGameboyPlayerCrtGeom1xPresetDef(),
new BorderGameboyPlayerGameboyPlayerCrtRoyalePresetDef(),
new BorderGameboyPlayerGameboyPlayerGbaColorCrtEasymodePresetDef(),
new BorderGameboyPlayerGameboyPlayerGbaColorPresetDef(),
new BorderGameboyPlayerGameboyPlayerTvoutInterlacingPresetDef(),
new BorderGameboyPlayerGameboyPlayerTvoutGbaColorInterlacingPresetDef(),
new BorderGameboyPlayerGameboyPlayerTvoutGbaColorPresetDef(),
new BorderGameboyPlayerGameboyPlayerTvoutPresetDef(),
new BorderGameboyPlayerGameboyPlayerPresetDef(),
new BorderHandheldNebulaHandheldNebulaGbCrtConsumerPresetDef(),
new BorderHandheldNebulaHandheldNebulaGbDotPresetDef(),
new BorderHandheldNebulaHandheldNebulaGbLcdGridV2PresetDef(),
new BorderHandheldNebulaHandheldNebulaGbPresetDef(),
new BorderHandheldNebulaHandheldNebulaGbaCrtConsumerPresetDef(),
new BorderHandheldNebulaHandheldNebulaGbaDotPresetDef(),
new BorderHandheldNebulaHandheldNebulaGbaLcdGridV2PresetDef(),
new BorderHandheldNebulaHandheldNebulaGbaPresetDef(),
new BorderHandheldNebulaHandheldNebulaGgCrtConsumerPresetDef(),
new BorderHandheldNebulaHandheldNebulaGgDotPresetDef(),
new BorderHandheldNebulaHandheldNebulaGgLcdGridV2PresetDef(),
new BorderHandheldNebulaHandheldNebulaGgPresetDef(),
new BorderImgborderPresetDef(),
new BorderLightgunBorderPresetDef(),
new BorderSgbSgbCrtEasymodePresetDef(),
new BorderSgbSgbCrtGeom1xPresetDef(),
new BorderSgbSgbCrtRoyalePresetDef(),
new BorderSgbSgbGbcColorTvoutInterlacingPresetDef(),
new BorderSgbSgbGbcColorPresetDef(),
new BorderSgbSgbTvoutInterlacingPresetDef(),
new BorderSgbSgbPresetDef(),
new BorderSgbaSgbaGbaColorPresetDef(),
new BorderSgbaSgbaTvoutInterlacingPresetDef(),
new BorderSgbaSgbaTvoutGbaColorInterlacingPresetDef(),
new BorderSgbaSgbaPresetDef(),
new CelAdvcartoonPresetDef(),
new CelMMJ_Cel_ShaderPresetDef(),
new CelMMJ_Cel_Shader_MPPresetDef(),
new CrtAdvanced_crt_whkrmrgks0PresetDef(),
new CrtCathodeRetro_noSignalPresetDef(),
new CrtCrt1tapBloomPresetDef(),
new CrtCrt1tapBloom_fastPresetDef(),
new CrtCrt1tapPresetDef(),
new CrtCrtAperturePresetDef(),
new CrtCrtBlurPiSharpPresetDef(),
new CrtCrtBlurPiSoftPresetDef(),
new CrtCrtCaligariPresetDef(),
new CrtCrtCgwgFastPresetDef(),
new CrtCrtConsumerPresetDef(),
new CrtCrtCyclonPresetDef(),
new CrtCrtEasymodeHalationPresetDef(),
new CrtCrtEasymodePresetDef(),
new CrtCrtFrutbunnPresetDef(),
new CrtCrtGdvMiniUltraTrinitronPresetDef(),
new CrtCrtGdvMiniPresetDef(),
new CrtCrtGeomDeluxePresetDef(),
new CrtCrtGeomMiniPresetDef(),
new CrtCrtGeomTatePresetDef(),
new CrtCrtGeomPresetDef(),
new CrtCrtGuestAdvancedFastPresetDef(),
new CrtCrtGuestAdvancedFastestPresetDef(),
new CrtCrtGuestAdvancedHdPresetDef(),
new CrtCrtGuestAdvancedNtscPresetDef(),
new CrtCrtGuestAdvancedPresetDef(),
new CrtCrtHyllian3dPresetDef(),
new CrtCrtHyllianFastPresetDef(),
new CrtCrtHyllianNtscRainbowPresetDef(),
new CrtCrtHyllianNtscPresetDef(),
new CrtCrtHyllianSincCompositePresetDef(),
new CrtCrtHyllianPresetDef(),
new CrtCrtInterlacedHalationPresetDef(),
new CrtCrtLottesFastPresetDef(),
new CrtCrtLottesMultipassGlowPresetDef(),
new CrtCrtLottesMultipassPresetDef(),
new CrtCrtLottesPresetDef(),
new CrtCrtMattiasPresetDef(),
new CrtCrtMaximusRoyaleFastModePresetDef(),
new CrtCrtMaximusRoyaleHalfResModePresetDef(),
new CrtCrtMaximusRoyalePresetDef(),
new CrtCrtNesMiniPresetDef(),
new CrtCrtNobodyPresetDef(),
new CrtCrtPiPresetDef(),
new CrtCrtPocketPresetDef(),
new CrtCrtPotatoBVMPresetDef(),
new CrtCrtPotatoCoolPresetDef(),
new CrtCrtPotatoWarmPresetDef(),
new CrtCrtResswitchGlitchKokoPresetDef(),
new CrtCrtRoyaleFakeBloomIntelPresetDef(),
new CrtCrtRoyaleFakeBloomPresetDef(),
new CrtCrtRoyaleFastPresetDef(),
new CrtCrtRoyaleIntelPresetDef(),
new CrtCrtRoyalePresetDef(),
new CrtCrtSimplePresetDef(),
new CrtCrtSinesPresetDef(),
new CrtCrtSlangtestCubicPresetDef(),
new CrtCrtSlangtestLanczosPresetDef(),
new CrtCrtSuperXbrPresetDef(),
new CrtCrtTorridgristlePresetDef(),
new CrtCrtYo6FlatTrinitronTvPresetDef(),
new CrtCrtYo6KV21CL10BPresetDef(),
new CrtCrtYo6KVM1420BSharpPresetDef(),
new CrtCrtYo6KVM1420BPresetDef(),
new CrtCrtglow_gaussPresetDef(),
new CrtCrtglow_lanczosPresetDef(),
new CrtCrtsimPresetDef(),
new CrtFakeCrtGeomPotatoPresetDef(),
new CrtFakeCrtGeomPresetDef(),
new CrtFakelottesPresetDef(),
new CrtGizmoCrtPresetDef(),
new CrtGizmoSlotmaskCrtPresetDef(),
new CrtGlow_trailsPresetDef(),
new CrtGritsScanlinesPresetDef(),
new CrtGtuV050PresetDef(),
new CrtMame_hlslPresetDef(),
new CrtMetacrtPresetDef(),
new CrtNewpixieCrtPresetDef(),
new CrtNewpixieMiniPresetDef(),
new CrtPhosphorlutPresetDef(),
new CrtRay_traced_curvaturePresetDef(),
new CrtRay_traced_curvature_appendPresetDef(),
new CrtTvoutTweaksPresetDef(),
new CrtVectorGlowAltRenderPresetDef(),
new CrtVectorGlowPresetDef(),
new CrtVt220PresetDef(),
new CrtYee64PresetDef(),
new CrtYeetronPresetDef(),
new CrtZfastCrtCompositePresetDef(),
new CrtZfastCrtCurvaturePresetDef(),
new CrtZfastCrtGeoPresetDef(),
new CrtZfastCrtHdmaskPresetDef(),
new CrtZfastCrtPresetDef(),
new DeblurDeblurLumaPresetDef(),
new DeblurDeblurPresetDef(),
new DenoisersBilateral2pPresetDef(),
new DenoisersBilateralPresetDef(),
new DenoisersCrtFastBilateralSuperXbrPresetDef(),
new DenoisersFastBilateralPresetDef(),
new DenoisersMedian_3x3PresetDef(),
new DenoisersMedian_5x5PresetDef(),
new DenoisersSlowBilateralPresetDef(),
new DitheringBayerMatrixDitheringPresetDef(),
new DitheringBayer_4x4PresetDef(),
new DitheringBlue_noisePresetDef(),
new DitheringBlue_noise_dynamic_4BitPresetDef(),
new DitheringBlue_noise_dynamic_monochromePresetDef(),
new DitheringCbod_v1PresetDef(),
new DitheringCheckerboardDeditherPresetDef(),
new DitheringGSharp_resamplerPresetDef(),
new DitheringGdaptPresetDef(),
new DitheringGenditherPresetDef(),
new DitheringJinc2DeditherPresetDef(),
new DitheringMdaptPresetDef(),
new DitheringPs1DeditherBoxblurPresetDef(),
new DitheringPs1DeditherComparisonPresetDef(),
new DitheringPs1DitherPresetDef(),
new DitheringSgenptMixMultipassPresetDef(),
new DitheringSgenptMixPresetDef(),
new EdgeSmoothingCleanEdgeCleanEdgeScalePresetDef(),
new EdgeSmoothingDdt3PointPresetDef(),
new EdgeSmoothingDdtCutPresetDef(),
new EdgeSmoothingDdtDdtExtendedPresetDef(),
new EdgeSmoothingDdtDdtJincLinearPresetDef(),
new EdgeSmoothingDdtDdtJincPresetDef(),
new EdgeSmoothingDdtDdtXbrLv1PresetDef(),
new EdgeSmoothingDdtDdtPresetDef(),
new EdgeSmoothingEagle2xsaiFixPixelShiftPresetDef(),
new EdgeSmoothingEagle2xsaiPresetDef(),
new EdgeSmoothingEagleSuper2xsaiFixPixelShiftPresetDef(),
new EdgeSmoothingEagleSuper2xsaiPresetDef(),
new EdgeSmoothingEagleSupereaglePresetDef(),
new EdgeSmoothingFsrFsrEasuPresetDef(),
new EdgeSmoothingFsrFsrPresetDef(),
new EdgeSmoothingFsrSmaaFsrPresetDef(),
new EdgeSmoothingHqxHq2xHalphonPresetDef(),
new EdgeSmoothingHqxHq2xPresetDef(),
new EdgeSmoothingHqxHq3xPresetDef(),
new EdgeSmoothingHqxHq4xPresetDef(),
new EdgeSmoothingNediFastBilateralNediPresetDef(),
new EdgeSmoothingNediNediHybridSharperPresetDef(),
new EdgeSmoothingNediNediHybridPresetDef(),
new EdgeSmoothingNediNediSharperPresetDef(),
new EdgeSmoothingNediNediPresetDef(),
new EdgeSmoothingNediPresetsBilateralVariantPresetDef(),
new EdgeSmoothingNediPresetsBilateralVariant2PresetDef(),
new EdgeSmoothingNediPresetsBilateralVariant3PresetDef(),
new EdgeSmoothingNediPresetsBilateralVariant4PresetDef(),
new EdgeSmoothingNediPresetsBilateralVariant5PresetDef(),
new EdgeSmoothingNediPresetsBilateralVariant6PresetDef(),
new EdgeSmoothingNediPresetsBilateralVariant7PresetDef(),
new EdgeSmoothingNnedi3Nnedi3Nns162xLumaPresetDef(),
new EdgeSmoothingNnedi3Nnedi3Nns162xRgbPresetDef(),
new EdgeSmoothingNnedi3Nnedi3Nns164xLumaPresetDef(),
new EdgeSmoothingNnedi3Nnedi3Nns322xRgbNns324xLumaPresetDef(),
new EdgeSmoothingNnedi3Nnedi3Nns324xRgbPresetDef(),
new EdgeSmoothingNnedi3Nnedi3Nns642xNns324xNns168xRgbPresetDef(),
new EdgeSmoothingNnedi3Nnedi3Nns642xNns324xRgbPresetDef(),
new EdgeSmoothingOmniscaleOmniscaleLegacyPresetDef(),
new EdgeSmoothingOmniscaleOmniscalePresetDef(),
new EdgeSmoothingSabrSabrHybridDeposterizePresetDef(),
new EdgeSmoothingSabrSabrPresetDef(),
new EdgeSmoothingScalefxScalefxRAAPresetDef(),
new EdgeSmoothingScalefxScalefx9xPresetDef(),
new EdgeSmoothingScalefxScalefxHybridPresetDef(),
new EdgeSmoothingScalefxScalefxPresetDef(),
new EdgeSmoothingScalehq2xScaleHQPresetDef(),
new EdgeSmoothingScalehq4xScaleHQPresetDef(),
new EdgeSmoothingScalenxEpxPresetDef(),
new EdgeSmoothingScalenxMmpxPresetDef(),
new EdgeSmoothingScalenxScale2xPresetDef(),
new EdgeSmoothingScalenxScale2xplusPresetDef(),
new EdgeSmoothingScalenxScale2xSFXPresetDef(),
new EdgeSmoothingScalenxScale3xPresetDef(),
new EdgeSmoothingXbrSuperXbrFastPresetDef(),
new EdgeSmoothingXbrSuperXbrPresetDef(),
new EdgeSmoothingXbrXbrLv2SharpPresetDef(),
new EdgeSmoothingXbrXbrLv2PresetDef(),
new EdgeSmoothingXbrXbrLv3SharpPresetDef(),
new EdgeSmoothingXbrXbrLv3PresetDef(),
new EdgeSmoothingXbrz2xbrzLinearPresetDef(),
new EdgeSmoothingXbrz4xbrzLinearPresetDef(),
new EdgeSmoothingXbrz5xbrzLinearPresetDef(),
new EdgeSmoothingXbrz6xbrzLinearPresetDef(),
new EdgeSmoothingXbrzXbrzFreescaleMultipassPresetDef(),
new EdgeSmoothingXbrzXbrzFreescalePresetDef(),
new EdgeSmoothingXsal2xsalLevel2CrtPresetDef(),
new EdgeSmoothingXsal2xsalPresetDef(),
new EdgeSmoothingXsal4xsalLevel2CrtPresetDef(),
new EdgeSmoothingXsal4xsalLevel2HqPresetDef(),
new EdgeSmoothingXsal4xsalLevel2PresetDef(),
new EdgeSmoothingXsoft4xsoftPresetDef(),
new EdgeSmoothingXsoft4xsoftSdBPresetDef(),
new FilmFilmGrainPresetDef(),
new FilmTechnicolorPresetDef(),
new Gpu3dfx_4x1PresetDef(),
new GpuPowervr2PresetDef(),
new HandheldAgb001PresetDef(),
new HandheldAgs001PresetDef(),
new HandheldAuthentic_gbcPresetDef(),
new HandheldAuthentic_gbc_fastPresetDef(),
new HandheldAuthentic_gbc_single_passPresetDef(),
new HandheldBevelPresetDef(),
new HandheldColorModDsliteColorPresetDef(),
new HandheldColorModGbaColorPresetDef(),
new HandheldColorModGbcColorPresetDef(),
new HandheldColorModGbcGambatteColorPresetDef(),
new HandheldColorModGbMicroColorPresetDef(),
new HandheldColorModNdsColorPresetDef(),
new HandheldColorModNSOGbaColorPresetDef(),
new HandheldColorModNSOGbcColorPresetDef(),
new HandheldColorModPalmColorPresetDef(),
new HandheldColorModPspColorPresetDef(),
new HandheldColorModSp101ColorPresetDef(),
new HandheldColorModSwitchOLEDColorPresetDef(),
new HandheldColorModVbaColorPresetDef(),
new HandheldConsoleBorderDmgPresetDef(),
new HandheldConsoleBorderGbDmgAltPresetDef(),
new HandheldConsoleBorderGbLightAltPresetDef(),
new HandheldConsoleBorderGbPocketAltPresetDef(),
new HandheldConsoleBorderGbPocketPresetDef(),
new HandheldConsoleBorderGbaAgb001ColorMotionblurPresetDef(),
new HandheldConsoleBorderGbaAgs001ColorMotionblurPresetDef(),
new HandheldConsoleBorderGbaLcdGridV2PresetDef(),
new HandheldConsoleBorderGbaPresetDef(),
new HandheldConsoleBorderGbcLcdGridV2PresetDef(),
new HandheldConsoleBorderGbcPresetDef(),
new HandheldConsoleBorderGgPresetDef(),
new HandheldConsoleBorderNgpcPresetDef(),
new HandheldConsoleBorderPspPresetDef(),
new HandheldDotPresetDef(),
new HandheldDsHybridSabrPresetDef(),
new HandheldDsHybridScalefxPresetDef(),
new HandheldGameboyAdvanceDotMatrixPresetDef(),
new HandheldGameboyColorDotMatrixWhiteBgPresetDef(),
new HandheldGameboyColorDotMatrixPresetDef(),
new HandheldGameboyDarkModePresetDef(),
new HandheldGameboyLightModePresetDef(),
new HandheldGameboyLightPresetDef(),
new HandheldGameboyPocketHighContrastPresetDef(),
new HandheldGameboyPocketPresetDef(),
new HandheldGameboyPresetDef(),
new HandheldGbPaletteDmgPresetDef(),
new HandheldGbPaletteLightPresetDef(),
new HandheldGbPalettePocketPresetDef(),
new HandheldGbcDevPresetDef(),
new HandheldLcdGridV2PresetDef(),
new HandheldLcdGridPresetDef(),
new HandheldLcdShaderPresetDef(),
new HandheldLcd1xPresetDef(),
new HandheldLcd1x_ndsPresetDef(),
new HandheldLcd1x_pspPresetDef(),
new HandheldLcd3xPresetDef(),
new HandheldRetroTilesPresetDef(),
new HandheldRetroV2PresetDef(),
new HandheldRetroV3PresetDef(),
new HandheldSameboyLcdPresetDef(),
new HandheldSimpletex_lcd4kPresetDef(),
new HandheldSimpletex_lcdPresetDef(),
new HandheldSimpletex_lcd_720pPresetDef(),
new HandheldZfastLcdPresetDef(),
new InterpolationBSpline4TapsPresetDef(),
new InterpolationBSplineFastPresetDef(),
new InterpolationBicubic5TapsPresetDef(),
new InterpolationBicubicFastPresetDef(),
new InterpolationBicubicPresetDef(),
new InterpolationCatmullRom5TapsPresetDef(),
new InterpolationCatmullRomFastPresetDef(),
new InterpolationCatmullRomPresetDef(),
new InterpolationCubicGammaCorrectPresetDef(),
new InterpolationCubicPresetDef(),
new InterpolationHermitePresetDef(),
new InterpolationJinc2SharpPresetDef(),
new InterpolationJinc2SharperPresetDef(),
new InterpolationJinc2PresetDef(),
new InterpolationLanczos16PresetDef(),
new InterpolationLanczos25TapsPresetDef(),
new InterpolationLanczos3FastPresetDef(),
new InterpolationQuilezPresetDef(),
new InterpolationSpline16FastPresetDef(),
new InterpolationSpline36FastPresetDef(),
new LinearLinearGammaCorrectPresetDef(),
new MiscAccessibility_modsPresetDef(),
new MiscAntiFlickerPresetDef(),
new MiscAsciiPresetDef(),
new MiscBeadPresetDef(),
new MiscBobDeinterlacingPresetDef(),
new MiscChromaPresetDef(),
new MiscChromaticityPresetDef(),
new MiscCmykHalftoneDotPresetDef(),
new MiscCocktailCabinetPresetDef(),
new MiscColorManglerPresetDef(),
new MiscColorimetryPresetDef(),
new MiscConvergencePresetDef(),
new MiscDebandPresetDef(),
new MiscDeinterlacePresetDef(),
new MiscEdgeDetectPresetDef(),
new MiscEgaPresetDef(),
new MiscGeomAppendPresetDef(),
new MiscGeomPresetDef(),
new MiscGlassPresetDef(),
new MiscGradeNoLUTPresetDef(),
new MiscGradePresetDef(),
new MiscHalf_resPresetDef(),
new MiscImageAdjustmentPresetDef(),
new MiscImg_modPresetDef(),
new MiscInterlacingPresetDef(),
new MiscNaturalVisionPresetDef(),
new MiscNightModePresetDef(),
new MiscNtscColorsPresetDef(),
new MiscPatchyColorPresetDef(),
new MiscReliefPresetDef(),
new MiscRetroPalettesPresetDef(),
new MiscSimple_color_controlsPresetDef(),
new MiscSsGammaRampPresetDef(),
new MiscTonemappingPresetDef(),
new MiscWhite_pointPresetDef(),
new MiscYiqHueAdjustmentPresetDef(),
new MotionInterpolationMotion_interpolationPresetDef(),
new MotionblurBraidRewindPresetDef(),
new MotionblurFeedbackPresetDef(),
new MotionblurMix_framesPresetDef(),
new MotionblurMix_frames_smartPresetDef(),
new MotionblurMotionblurBluePresetDef(),
new MotionblurMotionblurColorPresetDef(),
new MotionblurMotionblurSimplePresetDef(),
new MotionblurResponseTimePresetDef(),
new StockNearestPresetDef(),
new Nes_raw_paletteCgwgFamicomGeomPresetDef(),
new Nes_raw_paletteGtuFamicomPresetDef(),
new Nes_raw_paletteNtscNesPresetDef(),
new Nes_raw_palettePalR57shellRawPresetDef(),
new NtscArtifactColorsPresetDef(),
new NtscBlarggPresetDef(),
new NtscMameNtscPresetDef(),
new NtscNtsc256pxCompositeScanlinePresetDef(),
new NtscNtsc256pxCompositePresetDef(),
new NtscNtsc256pxSvideoScanlinePresetDef(),
new NtscNtsc256pxSvideoPresetDef(),
new NtscNtsc320pxCompositeScanlinePresetDef(),
new NtscNtsc320pxCompositePresetDef(),
new NtscNtsc320pxSvideoScanlinePresetDef(),
new NtscNtsc320pxSvideoPresetDef(),
new NtscNtscAdaptive4xPresetDef(),
new NtscNtscAdaptiveOldPresetDef(),
new NtscNtscAdaptiveTatePresetDef(),
new NtscNtscAdaptivePresetDef(),
new NtscNtscBlastemPresetDef(),
new NtscNtscMdRainbowsPresetDef(),
new NtscNtscMiniPresetDef(),
new NtscNtscSimplePresetDef(),
new NtscTiny_ntscPresetDef(),
new PalPalR57shellMoireOnlyPresetDef(),
new PalPalR57shellPresetDef(),
new PalPalSinglepassPresetDef(),
new PixelArtScalingAannPresetDef(),
new PixelArtScalingBandlimitPixelPresetDef(),
new PixelArtScalingBilinearAdjustablePresetDef(),
new PixelArtScalingBox_filter_aa_xformPresetDef(),
new PixelArtScalingCleanEdgeRotatePresetDef(),
new PixelArtScalingControlled_sharpnessPresetDef(),
new PixelArtScalingEdge1pixelPresetDef(),
new PixelArtScalingEdgeNpixelsPresetDef(),
new PixelArtScalingGridBlendHybridPresetDef(),
new PixelArtScalingPixellatePresetDef(),
new PixelArtScalingPixel_aaPresetDef(),
new PixelArtScalingPixel_aa_fastPresetDef(),
new PixelArtScalingPixel_aa_single_passPresetDef(),
new PixelArtScalingPixel_aa_xformPresetDef(),
new PixelArtScalingSharpBilinear2xPrescalePresetDef(),
new PixelArtScalingSharpBilinearScanlinesPresetDef(),
new PixelArtScalingSharpBilinearSimplePresetDef(),
new PixelArtScalingSharpBilinearPresetDef(),
new PixelArtScalingSharpShimmerlessPresetDef(),
new PixelArtScalingSmootheststepPresetDef(),
new PixelArtScalingSmuberstepPresetDef(),
new PixelArtScalingUniformNearestPresetDef(),
new PresetsBlursDualBloomFilterAaLv2FsrGammaRampGlassPresetDef(),
new PresetsBlursDualBloomFilterAaLv2FsrGammaRampPresetDef(),
new PresetsBlursDualBloomFilterAaLv2FsrPresetDef(),
new PresetsBlursGizmoCompositeBlurAaLv2FsrGammaRampGsharpResamplerPresetDef(),
new PresetsBlursGizmoCompositeBlurAaLv2FsrGammaRampPresetDef(),
new PresetsBlursGizmoCompositeBlurAaLv2FsrGsharpResamplerPresetDef(),
new PresetsBlursGizmoCompositeBlurAaLv2FsrPresetDef(),
new PresetsBlursKawaseGlowBspline4tapsFsrGammaRampTonemappingPresetDef(),
new PresetsBlursSmartblurBspline4tapsFsrGammaRampVhsPresetDef(),
new PresetsBlursSmartblurBspline4tapsFsrGammaRampPresetDef(),
new PresetsBlursSmartblurBspline4tapsFsrPresetDef(),
new PresetsCrtBeamSimulatorCrtBeamSimulatorCrtFastBilateralSuperXbrColorManglerColorimetryPresetDef(),
new PresetsCrtBeamSimulatorCrtBeamSimulatorCrtFastBilateralSuperXbrPresetDef(),
new PresetsCrtBeamSimulatorCrtBeamSimulatorCrtroyaleNtscSvideoPresetDef(),
new PresetsCrtBeamSimulatorCrtBeamSimulatorFsrCrtroyaleNtscSvideoPresetDef(),
new PresetsCrtBeamSimulatorCrtBeamSimulatorFsrCrtroyalePresetDef(),
new PresetsCrtBeamSimulatorCrtBeamSimulatorFsrSonyCrtMegatronHdrPresetDef(),
new PresetsCrtBeamSimulatorCrtBeamSimulatorNnedi3Nns164xLumaFsrCrtroyalePresetDef(),
new PresetsCrtGeomSimplePresetDef(),
new PresetsCrtHyllianSincSmartblurSgenptPresetDef(),
new PresetsCrtHyllianSmartblurSgenptPresetDef(),
new PresetsCrtLottesMultipassInterlacedGlowPresetDef(),
new PresetsCrtNtscSharpCompositeGlowPresetDef(),
new PresetsCrtNtscSharpCompositePresetDef(),
new PresetsCrtNtscSharpSvideoNtsc_x4GlowPresetDef(),
new PresetsCrtNtscSharpSvideoNtsc_x4PresetDef(),
new PresetsCrtNtscSharpSvideoNtsc_x5GlowPresetDef(),
new PresetsCrtNtscSharpSvideoNtsc_x5PresetDef(),
new PresetsCrtNtscSharpSvideoNtsc_x6GlowPresetDef(),
new PresetsCrtNtscSharpSvideoNtsc_x6PresetDef(),
new PresetsCrtNtscSharpTateCompositeGlowPresetDef(),
new PresetsCrtNtscSharpTateCompositePresetDef(),
new PresetsCrtNtscSharpTateSvideoNtsc_x4GlowPresetDef(),
new PresetsCrtNtscSharpTateSvideoNtsc_x4PresetDef(),
new PresetsCrtNtscSharpTateSvideoNtsc_x5GlowPresetDef(),
new PresetsCrtNtscSharpTateSvideoNtsc_x5PresetDef(),
new PresetsCrtNtscSharpTateSvideoNtsc_x6GlowPresetDef(),
new PresetsCrtNtscSharpTateSvideoNtsc_x6PresetDef(),
new PresetsCrtPlusSignalC64MonitorPresetDef(),
new PresetsCrtPlusSignalCrtGeomDeluxeNtscAdaptivePresetDef(),
new PresetsCrtPlusSignalCrtRoyaleFastNtscCompositePresetDef(),
new PresetsCrtPlusSignalCrtRoyaleNtscCompositePresetDef(),
new PresetsCrtPlusSignalCrtRoyaleNtscSvideoPresetDef(),
new PresetsCrtPlusSignalCrtRoyalePalR57shellPresetDef(),
new PresetsCrtPlusSignalCrtglow_gauss_ntscPresetDef(),
new PresetsCrtPlusSignalMy_old_tvPresetDef(),
new PresetsCrtPlusSignalNtscPhosphorlutPresetDef(),
new PresetsCrtPlusSignalNtsclutPhosphorlutPresetDef(),
new PresetsCrtPotatoCrtPotatoColorimetryConvergencePresetDef(),
new PresetsCrtRoyaleDownsamplePresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeApertureGenesisRainbowEffectPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeApertureGenesisPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeAperturePsxPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeApertureSnesPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeAperturePresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeSlotmaskGenesisRainbowEffectPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeSlotmaskGenesisPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeSlotmaskPsxPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeSlotmaskSnesPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscCompositeSlotmaskPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastNtscRfSlotmaskNesPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastRgbAperturePresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyaleFastRgbSlotPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyalePvmNtscCompositeGenesisRainbowEffectPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyalePvmNtscCompositeGenesisPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyalePvmNtscCompositePsxPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyalePvmNtscCompositeSnesPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyalePvmNtscCompositePresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyalePvmRgbBlendPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyalePvmRgbShmupPresetDef(),
new PresetsCrtRoyaleFast4kCrtRoyalePvmRgbPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeApertureGenesisRainbowEffectPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeApertureGenesisPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeAperturePsxPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeApertureSnesPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeAperturePresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeSlotmaskGenesisRainbowEffectPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeSlotmaskGenesisPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeSlotmaskPsxPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeSlotmaskSnesPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscCompositeSlotmaskPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastNtscRfSlotmaskNesPresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastRgbAperturePresetDef(),
new PresetsCrtRoyaleFastCrtRoyaleFastRgbSlotPresetDef(),
new PresetsCrtRoyaleFastCrtRoyalePvmNtscCompositeGenesisRainbowEffectPresetDef(),
new PresetsCrtRoyaleFastCrtRoyalePvmNtscCompositeGenesisPresetDef(),
new PresetsCrtRoyaleFastCrtRoyalePvmNtscCompositePsxPresetDef(),
new PresetsCrtRoyaleFastCrtRoyalePvmNtscCompositeSnesPresetDef(),
new PresetsCrtRoyaleFastCrtRoyalePvmNtscCompositePresetDef(),
new PresetsCrtRoyaleFastCrtRoyalePvmRgbBlendPresetDef(),
new PresetsCrtRoyaleFastCrtRoyalePvmRgbShmupPresetDef(),
new PresetsCrtRoyaleFastCrtRoyalePvmRgbPresetDef(),
new PresetsCrtRoyaleKurozumiPresetDef(),
new PresetsCrtRoyaleSmoothPresetDef(),
new PresetsCrtRoyaleXm29plusPresetDef(),
new PresetsCrtsimGrungyPresetDef(),
new PresetsDownsampleDrez8xFsrAaLv2Bspline4tapsPresetDef(),
new PresetsFsrFsrAaLv2Bspline4tapsNtscColorsPresetDef(),
new PresetsFsrFsrAaLv2Bspline4tapsPresetDef(),
new PresetsFsrFsrAaLv2DeblurPresetDef(),
new PresetsFsrFsrAaLv2GlassPresetDef(),
new PresetsFsrFsrAaLv2Kawase5blurNtscColorsGlassPresetDef(),
new PresetsFsrFsrAaLv2Kawase5blurNtscColorsPresetDef(),
new PresetsFsrFsrAaLv2Median3x3GlassPresetDef(),
new PresetsFsrFsrAaLv2Median3x3NtscColorsGlassPresetDef(),
new PresetsFsrFsrAaLv2Median3x3NtscColorsPresetDef(),
new PresetsFsrFsrAaLv2Median3x3PresetDef(),
new PresetsFsrFsrAaLv2NaturalvisionGlassPresetDef(),
new PresetsFsrFsrAaLv2NaturalvisionVhsPresetDef(),
new PresetsFsrFsrAaLv2NaturalvisionPresetDef(),
new PresetsFsrFsrAaLv2SabrHybridDeposterizePresetDef(),
new PresetsFsrFsrAaLv2VhsPresetDef(),
new PresetsFsrFsrAaLv2PresetDef(),
new PresetsFsrFsrCrtPotatoBvmVhsPresetDef(),
new PresetsFsrFsrCrtPotatoBvmPresetDef(),
new PresetsFsrFsrCrtPotatoColorimetryConvergencePresetDef(),
new PresetsFsrFsrCrtPotatoWarmColorimetryConvergencePresetDef(),
new PresetsFsrFsrCrtroyaleXm29plusPresetDef(),
new PresetsFsrFsrCrtroyalePresetDef(),
new PresetsFsrFsrLv2AaChromacityGlassPresetDef(),
new PresetsFsrFsrSmaaColorimetryConvergencePresetDef(),
new PresetsGameboyAdvanceDotMatrixSepiaPresetDef(),
new PresetsGizmoCrtGizmoCrtCurvatorPresetDef(),
new PresetsGizmoCrtGizmoCrtMegadriveCurvatorPresetDef(),
new PresetsGizmoCrtGizmoCrtMegadrivePresetDef(),
new PresetsGizmoCrtGizmoCrtN64CurvatorPresetDef(),
new PresetsGizmoCrtGizmoCrtN64PresetDef(),
new PresetsGizmoCrtGizmoCrtPsxCurvatorPresetDef(),
new PresetsGizmoCrtGizmoCrtPsxPresetDef(),
new PresetsGizmoCrtGizmoCrtSnes4kPresetDef(),
new PresetsGizmoCrtGizmoCrtSnesCurvator4kPresetDef(),
new PresetsGizmoCrtGizmoCrtSnesDarkCurvatorPresetDef(),
new PresetsGizmoCrtGizmoCrtSnesDarkPresetDef(),
new PresetsHandheldPlusColorModAgb001GbaColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModAgs001GbaColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModBandlimitPixelGbaColorPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2DsliteColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2DsliteColorPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2GbaColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2GbaColorPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2GbcColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2GbcColorPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2GbMicroColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2GbMicroColorPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2NdsColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2NdsColorPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2PalmColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2PalmColorPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2PspColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2PspColorPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2Sp101ColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2Sp101ColorPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2VbaColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModLcdGridV2VbaColorPresetDef(),
new PresetsHandheldPlusColorModRetroV2GbaColorPresetDef(),
new PresetsHandheldPlusColorModRetroV2GbcColorPresetDef(),
new PresetsHandheldPlusColorModRetroV2ImageAdjustmentPresetDef(),
new PresetsHandheldPlusColorModRetroV2NdsColorPresetDef(),
new PresetsHandheldPlusColorModRetroV2PspColorPresetDef(),
new PresetsHandheldPlusColorModRetroV2VbaColorPresetDef(),
new PresetsHandheldPlusColorModRetroV3NdsColorPresetDef(),
new PresetsHandheldPlusColorModSameboyLcdGbcColorMotionblurPresetDef(),
new PresetsHandheldPlusColorModSimpletex_lcdGbaColor4kPresetDef(),
new PresetsHandheldPlusColorModSimpletex_lcdGbaColorPresetDef(),
new PresetsHandheldPlusColorModSimpletex_lcdGbcColor4kPresetDef(),
new PresetsHandheldPlusColorModSimpletex_lcdGbcColorPresetDef(),
new PresetsHandheldPlusColorModSimpletex_lcd_720pGbaColorPresetDef(),
new PresetsHandheldPlusColorModSimpletex_lcd_720pGbcColorPresetDef(),
new PresetsImgborderRoyaleKurozumiPresetDef(),
new PresetsInterpolationBspline4tapsAaLv2FsrGammaRampPresetDef(),
new PresetsInterpolationBspline4tapsAaLv2FsrPowervrPresetDef(),
new PresetsInterpolationBspline4tapsAaLv2FsrPresetDef(),
new PresetsInterpolationBspline4tapsAaLv2PresetDef(),
new PresetsInterpolationBspline4tapsFsrVhsPresetDef(),
new PresetsInterpolationLanczos25tapsFsrGammaRampVhsPresetDef(),
new PresetsInterpolationLanczos25tapsFsrGammaRampPresetDef(),
new PresetsInterpolationLanczos25tapsFsrPresetDef(),
new PresetsInterpolationSpline36FastFsrGammaRampVhsPresetDef(),
new PresetsInterpolationSpline36FastFsrGammaRampPresetDef(),
new PresetsInterpolationSpline36FastFsrPresetDef(),
new PresetsMdaptFastBilateralSuper4xbrScanlinesPresetDef(),
new PresetsNediPowervrSharpenPresetDef(),
new PresetsNesColorDecoderColorimetryPixellatePresetDef(),
new PresetsNesColorDecoderPixellatePresetDef(),
new PresetsScalefxPlusSmoothingScalefxRAAAaFastPresetDef(),
new PresetsScalefxPlusSmoothingScalefxRAAAaPresetDef(),
new PresetsScalefxPlusSmoothingScalefxAaFastPresetDef(),
new PresetsScalefxPlusSmoothingScalefxAaPresetDef(),
new PresetsScalefxPlusSmoothingScalefx9AaBlurHazyNtscSh1nra358PresetDef(),
new PresetsScalefxPlusSmoothingScalefx9AaBlurHazyVibranceSh1nra358PresetDef(),
new PresetsScalefxPlusSmoothingXsoftScalefxLevel2aaSharpsmootherPresetDef(),
new PresetsScalefxPlusSmoothingXsoftScalefxLevel2aaPresetDef(),
new PresetsTvoutTvoutNesColorDecoderPresetDef(),
new PresetsTvoutTvoutNtsc256pxCompositePresetDef(),
new PresetsTvoutTvoutNtsc256pxSvideoPresetDef(),
new PresetsTvoutTvoutNtsc2phaseCompositePresetDef(),
new PresetsTvoutTvoutNtsc2phaseSvideoPresetDef(),
new PresetsTvoutTvoutNtsc320pxCompositePresetDef(),
new PresetsTvoutTvoutNtsc320pxSvideoPresetDef(),
new PresetsTvoutTvoutNtsc3phaseCompositePresetDef(),
new PresetsTvoutTvoutNtsc3phaseSvideoPresetDef(),
new PresetsTvoutTvoutNtscNesPresetDef(),
new PresetsTvoutTvoutSnesHiresBlendPresetDef(),
new PresetsTvoutTvoutJincSharpenPresetDef(),
new PresetsTvoutTvoutPixelsharpPresetDef(),
new PresetsTvoutTvoutPresetDef(),
new PresetsTvoutInterlacingTvoutInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutNesColorDecoderInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutNtsc256pxCompositeInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutNtsc256pxSvideoInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutNtsc2phaseCompositeInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutNtsc2phaseSvideoInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutNtsc320pxCompositeInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutNtsc320pxSvideoInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutNtsc3phaseCompositeInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutNtsc3phaseSvideoInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutNtscNesInterlacingPresetDef(),
new PresetsTvoutInterlacingTvoutJincSharpenInterlacingPresetDef(),
new PresetsXbrXsalXbrLv32xsalLv2AaSoftPresetDef(),
new PresetsXbrXsalXbrLv32xsalLv2AaPresetDef(),
new PresetsXbrXsalXbrLv3AaFastPresetDef(),
new PresetsXbrXsalXbrLv3AaSoftFastPresetDef(),
new ReshadeBlendoverlayPresetDef(),
new ReshadeBloomPresetDef(),
new ReshadeBsnesGammaRampPresetDef(),
new ReshadeFilmGrainPresetDef(),
new ReshadeHalftonePrintPresetDef(),
new ReshadeHandheldColorLUTsDSLite2020PresetDef(),
new ReshadeHandheldColorLUTsDSLiteP3PresetDef(),
new ReshadeHandheldColorLUTsDSLiteSRGBPresetDef(),
new ReshadeHandheldColorLUTsGBA2020PresetDef(),
new ReshadeHandheldColorLUTsGBAP3DarkPresetDef(),
new ReshadeHandheldColorLUTsGBAP3PresetDef(),
new ReshadeHandheldColorLUTsGBARec2020DarkPresetDef(),
new ReshadeHandheldColorLUTsGBARec2020PresetDef(),
new ReshadeHandheldColorLUTsGBASRGBDarkPresetDef(),
new ReshadeHandheldColorLUTsGBASRGBPresetDef(),
new ReshadeHandheldColorLUTsGBA_GBC2020PresetDef(),
new ReshadeHandheldColorLUTsGBA_GBCP3PresetDef(),
new ReshadeHandheldColorLUTsGBA_GBCSRGBPresetDef(),
new ReshadeHandheldColorLUTsGBCDevColorspacePresetDef(),
new ReshadeHandheldColorLUTsGBC2020PresetDef(),
new ReshadeHandheldColorLUTsGBCP3PresetDef(),
new ReshadeHandheldColorLUTsGBCRec2020PresetDef(),
new ReshadeHandheldColorLUTsGBCSRGBPresetDef(),
new ReshadeHandheldColorLUTsGBMicro2020PresetDef(),
new ReshadeHandheldColorLUTsGBMicroP3PresetDef(),
new ReshadeHandheldColorLUTsGBMicroSRGBPresetDef(),
new ReshadeHandheldColorLUTsNDS2020PresetDef(),
new ReshadeHandheldColorLUTsNDSP3PresetDef(),
new ReshadeHandheldColorLUTsNDSRec2020PresetDef(),
new ReshadeHandheldColorLUTsNDSSRGBPresetDef(),
new ReshadeHandheldColorLUTsNSOGBAPresetDef(),
new ReshadeHandheldColorLUTsNSOGBCPresetDef(),
new ReshadeHandheldColorLUTsPSP2020PresetDef(),
new ReshadeHandheldColorLUTsPSPP3PureGamma22PresetDef(),
new ReshadeHandheldColorLUTsPSPP3PresetDef(),
new ReshadeHandheldColorLUTsPSPRec2020SRGBGamma22PresetDef(),
new ReshadeHandheldColorLUTsPSPRec2020PresetDef(),
new ReshadeHandheldColorLUTsPSPSRGBSRGBGamma22PresetDef(),
new ReshadeHandheldColorLUTsPSPSRGBPresetDef(),
new ReshadeHandheldColorLUTsSP1012020PresetDef(),
new ReshadeHandheldColorLUTsSP101P3PresetDef(),
new ReshadeHandheldColorLUTsSP101SRGBPresetDef(),
new ReshadeHandheldColorLUTsSwitchOLEDP3SRGBGamma22PresetDef(),
new ReshadeHandheldColorLUTsSwitchOLEDP3PresetDef(),
new ReshadeHandheldColorLUTsSwitchOLEDRec2020SRGBGamma22PresetDef(),
new ReshadeHandheldColorLUTsSwitchOLEDRec2020PresetDef(),
new ReshadeHandheldColorLUTsSwitchOLEDSRGBSRGBGamma22PresetDef(),
new ReshadeHandheldColorLUTsSwitchOLEDSRGBPresetDef(),
new ReshadeHandheldColorLUTsSWOLED2020PresetDef(),
new ReshadeHandheldColorLUTsSWOLEDP3PresetDef(),
new ReshadeHandheldColorLUTsSWOLEDSRGBPresetDef(),
new ReshadeHandheldColorLUTsVBAColorspacePresetDef(),
new ReshadeLutPresetDef(),
new ReshadeMagicbloomPresetDef(),
new ReshadeNormalsDisplacementPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCArcadeCleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCArcadeDirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCDOSHighResCleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCDOSHighResDirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCDOSLowResCleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCDOSLowResDirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCDreamcastCleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCDreamcastDirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCGBACleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCGBADirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCMasterSystemCleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCMasterSystemDirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCMegaDriveCleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCMegaDriveDirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCMegaDriveRF100PresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCN64PresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCNESCleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCNESDirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCNESComposite100PresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCPCEComposite100PresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCPCERGB100PresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCPCEPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCPlayStationCleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCPlayStationDirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCPlayStationRGB100240pPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCPlayStationRGB100480iPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCPS2CleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCPS2DirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCPS2PresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCSaturnPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCSGBCleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCSGBDirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCSNESCleanPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCSNESDirtyPresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCSNESRF100PresetDef(),
new RetroCrisis1080pCurvedRCGDVNTSCSNESRGB100PresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCArcadeCleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCArcadeDirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCDOSHighResCleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCDOSHighResDirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCDOSLowResCleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCDOSLowResDirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCDreamcastCleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCDreamcastDirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCGBACleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCGBADirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCMasterSystemCleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCMasterSystemDirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCMegaDriveCleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCMegaDriveDirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCMegaDriveRF100PresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCN64PresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCNESCleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCNESDirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCNESComposite100PresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCPCEComposite100PresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCPCERGB100PresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCPCEPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCPlayStationCleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCPlayStationDirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCPlayStationRGB100240pPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCPlayStationRGB100480iPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCPS2CleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCPS2DirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCPS2PresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCSaturnPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCSGBCleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCSGBDirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCSNESCleanPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCSNESDirtyPresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCSNESRF100PresetDef(),
new RetroCrisis1080pFlatRCGDVNTSCSNESRGB100PresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCArcadeCleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCArcadeDirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCDOSHighResCleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCDOSHighResDirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCDOSLowResCleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCDOSLowResDirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCDreamcastCleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCDreamcastDirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCGBACleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCGBADirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCMasterSystemCleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCMasterSystemDirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCMegaDriveCleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCMegaDriveDirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCMegaDriveRF100PresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCN64PresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCNESCleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCNESDirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCNESComposite100PresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCPCEComposite100PresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCPCERGB100PresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCPCEPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCPlayStationCleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCPlayStationDirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCPlayStationRGB100240pPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCPlayStationRGB100480iPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCPS2CleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCPS2DirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCPS2PresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCSaturnPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCSGBCleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCSGBDirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCSNESCleanPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCSNESDirtyPresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCSNESRF100PresetDef(),
new RetroCrisis1440pCurvedRCGDVNTSCSNESRGB100PresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCArcadeCleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCArcadeDirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCDOSHighResCleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCDOSHighResDirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCDOSLowResCleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCDOSLowResDirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCDreamcastCleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCDreamcastDirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCGBACleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCGBADirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCMasterSystemCleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCMasterSystemDirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCMegaDriveCleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCMegaDriveDirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCMegaDriveRF100PresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCN64PresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCNESCleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCNESDirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCNESComposite100PresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCPCEComposite100PresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCPCERGB100PresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCPCEPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCPlayStationCleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCPlayStationDirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCPlayStationRGB100240pPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCPlayStationRGB100480iPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCPS2CleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCPS2DirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCPS2PresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCSaturnPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCSGBCleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCSGBDirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCSNESCleanPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCSNESDirtyPresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCSNESRF100PresetDef(),
new RetroCrisis1440pFlatRCGDVNTSCSNESRGB100PresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCArcadeCleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCArcadeDirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCDOSHighResCleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCDOSHighResDirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCDOSLowResCleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCDOSLowResDirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCDreamcastCleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCDreamcastDirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCGBACleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCGBADirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCMasterSystemCleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCMasterSystemDirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCMegaDriveCleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCMegaDriveDirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCMegaDriveRF100PresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCN64PresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCNESCleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCNESDirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCNESComposite100PresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCPCEComposite100PresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCPCERGB100PresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCPCEPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCPlayStationCleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCPlayStationDirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCPlayStationRGB100240pPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCPlayStationRGB100480iPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCPS2CleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCPS2DirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCPS2PresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCSaturnPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCSGBCleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCSGBDirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCSNESCleanPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCSNESDirtyPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCSNESRF100PresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCSNESRGB100PresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCVHS1080pCurvedPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCVHS2160pCurvedPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCVHS240pCurvedPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCVHS360pCurvedPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCVHS480pCurvedPresetDef(),
new RetroCrisis4KCurvedRCGDVNTSCVHS720pCurvedPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCArcadeCleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCArcadeDirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCDOSHighResCleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCDOSHighResDirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCDOSLowResCleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCDOSLowResDirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCDreamcastCleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCDreamcastDirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCGBACleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCGBADirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCMasterSystemCleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCMasterSystemDirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCMegaDriveCleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCMegaDriveDirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCMegaDriveRF100PresetDef(),
new RetroCrisis4KFlatRCGDVNTSCN64PresetDef(),
new RetroCrisis4KFlatRCGDVNTSCNESCleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCNESDirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCNESComposite100PresetDef(),
new RetroCrisis4KFlatRCGDVNTSCPCEComposite100PresetDef(),
new RetroCrisis4KFlatRCGDVNTSCPCERGB100PresetDef(),
new RetroCrisis4KFlatRCGDVNTSCPCEPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCPlayStationCleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCPlayStationDirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCPlayStationRGB100240pPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCPlayStationRGB100480iPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCPS2CleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCPS2DirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCPS2PresetDef(),
new RetroCrisis4KFlatRCGDVNTSCSaturnPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCSGBCleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCSGBDirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCSNESCleanPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCSNESDirtyPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCSNESRF100PresetDef(),
new RetroCrisis4KFlatRCGDVNTSCSNESRGB100PresetDef(),
new RetroCrisis4KFlatRCGDVNTSCVHS1080pPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCVHS2160pPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCVHS240pPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCVHS360pPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCVHS480pPresetDef(),
new RetroCrisis4KFlatRCGDVNTSCVHS720pPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCArcadeCleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCArcadeDirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCDOSHighResCleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCDOSHighResDirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCDOSLowResCleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCDOSLowResDirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCDreamcastCleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCDreamcastDirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCGBACleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCGBADirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCMasterSystemCleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCMasterSystemDirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCMegaDriveCleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCMegaDriveDirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCMegaDriveRF100PresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCN64PresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCNESCleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCNESDirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCNESComposite100PresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCPCEComposite100PresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCPCERGB100PresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCPCEPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCPlayStationCleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCPlayStationDirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCPlayStationRGB100240pPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCPlayStationRGB100480iPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCPS2CleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCPS2DirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCPS2PresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCSaturnPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCSGBCleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCSGBDirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCSNESCleanPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCSNESDirtyPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCSNESRF100PresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCSNESRGB100PresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCVHS1080pPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCVHS2160pPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCVHS240pPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCVHS360pPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCVHS480pPresetDef(),
new RetroCrisis720pSteamDeckRCGDVNTSCVHS720pPresetDef(),
new ScanlinesIntegerScalingScanlinesPresetDef(),
new ScanlinesOsscPresetDef(),
new ScanlinesOssc_slotPresetDef(),
new ScanlinesResIndependentScanlinesPresetDef(),
new ScanlinesScanlineFractPresetDef(),
new ScanlinesScanlinePresetDef(),
new ScanlinesScanlinesRerePresetDef(),
new ScanlinesScanlinesSineAbsPresetDef(),
new SharpenAdaptiveSharpenMultipassPresetDef(),
new SharpenAdaptiveSharpenPresetDef(),
new SharpenAnime4kPresetDef(),
new SharpenCheapSharpenPresetDef(),
new SharpenRca_sharpenPresetDef(),
new SharpenSuperXbrSuperResPresetDef(),
new Stereoscopic3dAnaglyphToSideBySidePresetDef(),
new Stereoscopic3dFubax_vrPresetDef(),
new Stereoscopic3dShutterToAnaglyphPresetDef(),
new Stereoscopic3dShutterToSideBySidePresetDef(),
new Stereoscopic3dSideBySideSimplePresetDef(),
new Stereoscopic3dSideBySideToInterlacedPresetDef(),
new Stereoscopic3dSideBySideToShutterPresetDef(),
new VhsGristleVHSPresetDef(),
new VhsMudlordPalVhsPresetDef(),
new VhsNtscVcrPresetDef(),
new VhsVhsPresetDef(),
new VhsVHSProPresetDef(),
new VhsVhs_and_crt_godotPresetDef(),
new VhsVhs_mpalkoPresetDef(),
new WarpDilationPresetDef(),
// %PRESET_CLASS%
};

std::vector<CachedShader> CachedShaders() {
    std::vector<CachedShader> cached;
 cached.emplace_back(RetroArchAnamorphicShadersAnamorphicShaderDefs::sVertexHash, RetroArchAnamorphicShadersAnamorphicShaderDefs::sVertexByteCode, sizeof(RetroArchAnamorphicShadersAnamorphicShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAnamorphicShadersAnamorphicShaderDefs::sFragmentHash, RetroArchAnamorphicShadersAnamorphicShaderDefs::sFragmentByteCode, sizeof(RetroArchAnamorphicShadersAnamorphicShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs::sVertexHash, RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass2ShaderDefs::sVertexHash, RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass2ShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass2ShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersAaShader40ShaderDefs::sVertexHash, RetroArchAntiAliasingShadersAaShader40ShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersAaShader40ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersAaShader40ShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersAaShader40ShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersAaShader40ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersAdaptiveSharpenShaderDefs::sVertexHash, RetroArchSharpenShadersAdaptiveSharpenShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersAdaptiveSharpenShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersAdaptiveSharpenShaderDefs::sFragmentHash, RetroArchSharpenShadersAdaptiveSharpenShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersAdaptiveSharpenShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersAdvancedAaShaderDefs::sVertexHash, RetroArchAntiAliasingShadersAdvancedAaShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersAdvancedAaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersAdvancedAaShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersAdvancedAaShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersAdvancedAaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersBicubicXShaderDefs::sVertexHash, RetroArchInterpolationShadersBicubicXShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersBicubicXShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersBicubicXShaderDefs::sFragmentHash, RetroArchInterpolationShadersBicubicXShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersBicubicXShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersBicubicYShaderDefs::sVertexHash, RetroArchInterpolationShadersBicubicYShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersBicubicYShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersBicubicYShaderDefs::sFragmentHash, RetroArchInterpolationShadersBicubicYShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersBicubicYShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersFxaaShaderDefs::sVertexHash, RetroArchAntiAliasingShadersFxaaShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersFxaaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersFxaaShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersFxaaShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersFxaaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStockStockShaderDefs::sVertexHash, RetroArchStockStockShaderDefs::sVertexByteCode, sizeof(RetroArchStockStockShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStockStockShaderDefs::sFragmentHash, RetroArchStockStockShaderDefs::sFragmentByteCode, sizeof(RetroArchStockStockShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersReverseAaShaderDefs::sVertexHash, RetroArchAntiAliasingShadersReverseAaShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersReverseAaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersReverseAaShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersReverseAaShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersReverseAaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersBicubicShaderDefs::sVertexHash, RetroArchInterpolationShadersBicubicShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersBicubicShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersBicubicShaderDefs::sFragmentHash, RetroArchInterpolationShadersBicubicShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersBicubicShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersSmaaSmaaPass0ShaderDefs::sVertexHash, RetroArchAntiAliasingShadersSmaaSmaaPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersSmaaSmaaPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersSmaaSmaaPass0ShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersSmaaSmaaPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersSmaaSmaaPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersSmaaSmaaPass1ShaderDefs::sVertexHash, RetroArchAntiAliasingShadersSmaaSmaaPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersSmaaSmaaPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersSmaaSmaaPass1ShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersSmaaSmaaPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersSmaaSmaaPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersSmaaSmaaPass2ShaderDefs::sVertexHash, RetroArchAntiAliasingShadersSmaaSmaaPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersSmaaSmaaPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersSmaaSmaaPass2ShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersSmaaSmaaPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersSmaaSmaaPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersFastSharpenShaderDefs::sVertexHash, RetroArchSharpenShadersFastSharpenShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersFastSharpenShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersFastSharpenShaderDefs::sFragmentHash, RetroArchSharpenShadersFastSharpenShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersFastSharpenShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgColortools_and_ntsc_passShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgColortools_and_ntsc_passShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgColortools_and_ntsc_passShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgColortools_and_ntsc_passShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgColortools_and_ntsc_passShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgColortools_and_ntsc_passShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgFxaaShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgFxaaShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgFxaaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgFxaaShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgFxaaShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgFxaaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgShift_and_bleedShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgShift_and_bleedShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgShift_and_bleedShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgShift_and_bleedShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgShift_and_bleedShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgShift_and_bleedShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgIn_glow_xShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgIn_glow_xShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgIn_glow_xShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgIn_glow_xShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgIn_glow_xShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgIn_glow_xShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgIn_glow_yShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgIn_glow_yShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgIn_glow_yShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgIn_glow_yShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgIn_glow_yShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgIn_glow_yShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgHalo_pre_gammaShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgHalo_pre_gammaShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgHalo_pre_gammaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgHalo_pre_gammaShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgHalo_pre_gammaShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgHalo_pre_gammaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgHaloShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgHaloShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgHaloShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgHaloShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgHaloShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgHaloShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgAvglum_passShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgAvglum_passShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgAvglum_passShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgAvglum_passShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgAvglum_passShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgAvglum_passShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgReflection_blur_preShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgReflection_blur_preShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgReflection_blur_preShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgReflection_blur_preShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgReflection_blur_preShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgReflection_blur_preShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgReflection_blurShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgReflection_blurShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgReflection_blurShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgReflection_blurShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgReflection_blurShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgReflection_blurShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgBloom_pass_1ShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgBloom_pass_1ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgBloom_pass_1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgBloom_pass_1ShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgBloom_pass_1ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgBloom_pass_1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgBloom_pass_2ShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgBloom_pass_2ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgBloom_pass_2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgBloom_pass_2ShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgBloom_pass_2ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgBloom_pass_2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgBloom_pass_3ShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgBloom_pass_3ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgBloom_pass_3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgBloom_pass_3ShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgBloom_pass_3ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgBloom_pass_3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgBloom_pass_4ShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgBloom_pass_4ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgBloom_pass_4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgBloom_pass_4ShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgBloom_pass_4ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgBloom_pass_4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgAmbi_temporal_passShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgAmbi_temporal_passShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgAmbi_temporal_passShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgAmbi_temporal_passShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgAmbi_temporal_passShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgAmbi_temporal_passShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgHelper_passShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgHelper_passShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgHelper_passShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgHelper_passShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgHelper_passShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgHelper_passShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelKokoAioShadersNgFinal_passShaderDefs::sVertexHash, RetroArchBezelKokoAioShadersNgFinal_passShaderDefs::sVertexByteCode, sizeof(RetroArchBezelKokoAioShadersNgFinal_passShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelKokoAioShadersNgFinal_passShaderDefs::sFragmentHash, RetroArchBezelKokoAioShadersNgFinal_passShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelKokoAioShadersNgFinal_passShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestExtrasHsmDrezNoneShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestExtrasHsmDrezNoneShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestExtrasHsmDrezNoneShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestExtrasHsmDrezNoneShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestExtrasHsmDrezNoneShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestExtrasHsmDrezNoneShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCacheInfoGlassParamsShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseCacheInfoGlassParamsShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCacheInfoGlassParamsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCacheInfoGlassParamsShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseCacheInfoGlassParamsShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCacheInfoGlassParamsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextAdvGlassShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseTextAdvGlassShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextAdvGlassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextAdvGlassShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseTextAdvGlassShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextAdvGlassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestExtrasHsmFetchDrezOutputShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestExtrasHsmFetchDrezOutputShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestExtrasHsmFetchDrezOutputShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestExtrasHsmFetchDrezOutputShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestExtrasHsmFetchDrezOutputShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestExtrasHsmFetchDrezOutputShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep1BeforeShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep1BeforeShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep1BeforeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep1BeforeShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep1BeforeShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep1BeforeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass1ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass1ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass2ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass2ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass3ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass3ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass4ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass4ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass4ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass4ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass5ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass5ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass5ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass5ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass5ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianSgenptMixSgenptMixPass5ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep2AfterShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep2AfterShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep2AfterShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep2AfterShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep2AfterShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersDeditherDeditherGammaPrep2AfterShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersPs1ditherHsmPS1UnditherBoxBlurShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersPs1ditherHsmPS1UnditherBoxBlurShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersPs1ditherHsmPS1UnditherBoxBlurShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersPs1ditherHsmPS1UnditherBoxBlurShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersPs1ditherHsmPS1UnditherBoxBlurShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersPs1ditherHsmPS1UnditherBoxBlurShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersFxaaFxaaShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersFxaaFxaaShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersFxaaFxaaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersFxaaFxaaShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersFxaaFxaaShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersFxaaFxaaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestExtrasHsmGSharp_resamplerShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestExtrasHsmGSharp_resamplerShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestExtrasHsmGSharp_resamplerShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestExtrasHsmGSharp_resamplerShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestExtrasHsmGSharp_resamplerShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestExtrasHsmGSharp_resamplerShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestExtrasHsmSharpsmootherShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestExtrasHsmSharpsmootherShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestExtrasHsmSharpsmootherShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestExtrasHsmSharpsmootherShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestExtrasHsmSharpsmootherShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestExtrasHsmSharpsmootherShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseStockShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseStockShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseStockShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseStockShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseStockShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseStockShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass0ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass0ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass1ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass1ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass2ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass2ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass3ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass3ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass4ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass4ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass4ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass4ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersScalefxHsmScalefxPass4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseIntroShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseIntroShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseIntroShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseIntroShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseIntroShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseIntroShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGtuHsmGtuPass1ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGtuHsmGtuPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGtuHsmGtuPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGtuHsmGtuPass1ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGtuHsmGtuPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGtuHsmGtuPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGtuHsmGtuPass2ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGtuHsmGtuPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGtuHsmGtuPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGtuHsmGtuPass2ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGtuHsmGtuPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGtuHsmGtuPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmAfterglow0ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmAfterglow0ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmAfterglow0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmAfterglow0ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmAfterglow0ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmAfterglow0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmPreShadersAfterglowShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmPreShadersAfterglowShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmPreShadersAfterglowShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmPreShadersAfterglowShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmPreShadersAfterglowShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmPreShadersAfterglowShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersDogwayHsmGradeShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersDogwayHsmGradeShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersDogwayHsmGradeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersDogwayHsmGradeShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersDogwayHsmGradeShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersDogwayHsmGradeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmAvgLumShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmAvgLumShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmAvgLumShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmAvgLumShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmAvgLumShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmAvgLumShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmInterlaceAndLinearizeShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmInterlaceAndLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmInterlaceAndLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmInterlaceAndLinearizeShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmInterlaceAndLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmInterlaceAndLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_horizShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_horizShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_horizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_horizShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_horizShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_horizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_vertShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_vertShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_vertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_vertShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_vertShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeBlur_vertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeThresholdShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeThresholdShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeThresholdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeThresholdShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeThresholdShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeThresholdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeHalationShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeHalationShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeHalationShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeHalationShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeHalationShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersEasymodeHsmCrtEasymodeHalationShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepGlassShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepGlassShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepGlassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepGlassShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepGlassShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepGlassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseLinearizeCrtShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseLinearizeCrtShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseLinearizeCrtShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseLinearizeCrtShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseLinearizeCrtShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseLinearizeCrtShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenHorizShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenHorizShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenHorizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenHorizShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenHorizShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenHorizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenVertShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenVertShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenVertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenVertShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenVertShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseBlurOutsideScreenVertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersRoyaleBlur9x9ShaderDefs::sVertexHash, RetroArchBlursShadersRoyaleBlur9x9ShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersRoyaleBlur9x9ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersRoyaleBlur9x9ShaderDefs::sFragmentHash, RetroArchBlursShadersRoyaleBlur9x9ShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersRoyaleBlur9x9ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseReflectionGlassShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseReflectionGlassShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseReflectionGlassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseReflectionGlassShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseReflectionGlassShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseReflectionGlassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseDelinearizeShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseDelinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseDelinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseDelinearizeShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseDelinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseDelinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass1ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass1ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass2ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass2ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass3ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass3ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestNtscHsmNtscPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenNtscShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenNtscShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenNtscShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenNtscShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenNtscShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCustomFastSharpenNtscShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass1ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass1ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmGaussian_horizontalShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmGaussian_horizontalShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmGaussian_horizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmGaussian_horizontalShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmGaussian_horizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmGaussian_horizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmGaussian_verticalShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmGaussian_verticalShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmGaussian_verticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmGaussian_verticalShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmGaussian_verticalShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmGaussian_verticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmBloom_horizontalShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmBloom_horizontalShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmBloom_horizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmBloom_horizontalShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmBloom_horizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmBloom_horizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmBloom_verticalShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmBloom_verticalShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmBloom_verticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmBloom_verticalShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmBloom_verticalShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmBloom_verticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmInterlaceShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmInterlaceShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmInterlaceShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmInterlaceShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmInterlaceShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmInterlaceShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronSourcePassShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronSourcePassShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronSourcePassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronSourcePassShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronSourcePassShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronSourcePassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronHdrPassShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronHdrPassShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronHdrPassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronHdrPassShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronHdrPassShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronHdrPassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseLinearizeCrtHdrShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseLinearizeCrtHdrShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseLinearizeCrtHdrShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseLinearizeCrtHdrShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseLinearizeCrtHdrShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseLinearizeCrtHdrShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseReflectionGlassHdrShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseReflectionGlassHdrShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseReflectionGlassHdrShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseReflectionGlassHdrShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseReflectionGlassHdrShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseReflectionGlassHdrShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseOutputHdrShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseOutputHdrShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseOutputHdrShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseOutputHdrShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseOutputHdrShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseOutputHdrShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCacheInfoNoReflectParamsShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseCacheInfoNoReflectParamsShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCacheInfoNoReflectParamsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCacheInfoNoReflectParamsShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseCacheInfoNoReflectParamsShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCacheInfoNoReflectParamsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextAdvNoReflectShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseTextAdvNoReflectShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextAdvNoReflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextAdvNoReflectShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseTextAdvNoReflectShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextAdvNoReflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2NoReflectShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2NoReflectShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2NoReflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2NoReflectShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2NoReflectShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2NoReflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepNoReflectShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepNoReflectShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepNoReflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepNoReflectShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepNoReflectShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepNoReflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseBezelImagesUnderCrtShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseBezelImagesUnderCrtShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseBezelImagesUnderCrtShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseBezelImagesUnderCrtShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseBezelImagesUnderCrtShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseBezelImagesUnderCrtShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseBezelImagesOverCrtShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseBezelImagesOverCrtShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseBezelImagesOverCrtShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseBezelImagesOverCrtShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseBezelImagesOverCrtShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseBezelImagesOverCrtShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNoReflectShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNoReflectShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNoReflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNoReflectShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNoReflectShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNoReflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceNoReflectShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceNoReflectShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceNoReflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceNoReflectShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceNoReflectShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmDeconvergenceNoReflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronNoReflectShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronNoReflectShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronNoReflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronNoReflectShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronNoReflectShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronNoReflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectHdrShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectHdrShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectHdrShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectHdrShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectHdrShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCombinePassesNoReflectHdrShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseOutputSdrShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseOutputSdrShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseOutputSdrShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseOutputSdrShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseOutputSdrShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseOutputSdrShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCacheInfoAllParamsShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseCacheInfoAllParamsShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCacheInfoAllParamsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCacheInfoAllParamsShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseCacheInfoAllParamsShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCacheInfoAllParamsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextAdvShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseTextAdvShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextAdvShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextAdvShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseTextAdvShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextAdvShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepImageLayersShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepImageLayersShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepImageLayersShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepImageLayersShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepImageLayersShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepImageLayersShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseReflectionShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseReflectionShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseReflectionShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseReflectionShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseReflectionShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseReflectionShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCombinePassesShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseCombinePassesShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCombinePassesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCombinePassesShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseCombinePassesShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCombinePassesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCombinePassesHdrShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseCombinePassesHdrShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCombinePassesHdrShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCombinePassesHdrShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseCombinePassesHdrShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCombinePassesHdrShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBloomBloomPass0ShaderDefs::sVertexHash, RetroArchReshadeShadersBloomBloomPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBloomBloomPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBloomBloomPass0ShaderDefs::sFragmentHash, RetroArchReshadeShadersBloomBloomPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBloomBloomPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBloomBloomPass1ShaderDefs::sVertexHash, RetroArchReshadeShadersBloomBloomPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBloomBloomPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBloomBloomPass1ShaderDefs::sFragmentHash, RetroArchReshadeShadersBloomBloomPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBloomBloomPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBloomBloomPass2ShaderDefs::sVertexHash, RetroArchReshadeShadersBloomBloomPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBloomBloomPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBloomBloomPass2ShaderDefs::sFragmentHash, RetroArchReshadeShadersBloomBloomPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBloomBloomPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBloomBloomPass3ShaderDefs::sVertexHash, RetroArchReshadeShadersBloomBloomPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBloomBloomPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBloomBloomPass3ShaderDefs::sFragmentHash, RetroArchReshadeShadersBloomBloomPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBloomBloomPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBloomBloomPass4ShaderDefs::sVertexHash, RetroArchReshadeShadersBloomBloomPass4ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBloomBloomPass4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBloomBloomPass4ShaderDefs::sFragmentHash, RetroArchReshadeShadersBloomBloomPass4ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBloomBloomPass4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBloomLensFlarePass0ShaderDefs::sVertexHash, RetroArchReshadeShadersBloomLensFlarePass0ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBloomLensFlarePass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBloomLensFlarePass0ShaderDefs::sFragmentHash, RetroArchReshadeShadersBloomLensFlarePass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBloomLensFlarePass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBloomLensFlarePass1ShaderDefs::sVertexHash, RetroArchReshadeShadersBloomLensFlarePass1ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBloomLensFlarePass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBloomLensFlarePass1ShaderDefs::sFragmentHash, RetroArchReshadeShadersBloomLensFlarePass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBloomLensFlarePass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs::sVertexHash, RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs::sFragmentHash, RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBloomLightingCombineShaderDefs::sVertexHash, RetroArchReshadeShadersBloomLightingCombineShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBloomLightingCombineShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBloomLightingCombineShaderDefs::sFragmentHash, RetroArchReshadeShadersBloomLightingCombineShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBloomLightingCombineShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass0ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass0ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass1ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass1ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass2ShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass2ShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrSuperXbrPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicXShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicXShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicXShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicXShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicXShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicXShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicYShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicYShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicYShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicYShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicYShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCustomBicubicYShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepMinimumNoReflectShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepMinimumNoReflectShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepMinimumNoReflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepMinimumNoReflectShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepMinimumNoReflectShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepMinimumNoReflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniPotatoShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniPotatoShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniPotatoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniPotatoShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniPotatoShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtDariusgGdvMiniPotatoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextStdGlassShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseTextStdGlassShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextStdGlassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextStdGlassShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseTextStdGlassShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextStdGlassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseLinearizeShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseLinearizeShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextStdShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseTextStdShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextStdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextStdShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseTextStdShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextStdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextStdNoReflectShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseTextStdNoReflectShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextStdNoReflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseTextStdNoReflectShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseTextStdNoReflectShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseTextStdNoReflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2NoReflectShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2NoReflectShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2NoReflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2NoReflectShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2NoReflectShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2NoReflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCacheInfoPotatoParamsShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBaseCacheInfoPotatoParamsShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCacheInfoPotatoParamsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBaseCacheInfoPotatoParamsShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBaseCacheInfoPotatoParamsShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBaseCacheInfoPotatoParamsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2PotatoShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2PotatoShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2PotatoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2PotatoShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2PotatoShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedNtscPass2PotatoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedPotatoShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedPotatoShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedPotatoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedPotatoShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedPotatoShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmCrtGuestAdvancedPotatoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmDeconvergencePotatoShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersGuestHsmDeconvergencePotatoShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmDeconvergencePotatoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersGuestHsmDeconvergencePotatoShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersGuestHsmDeconvergencePotatoShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersGuestHsmDeconvergencePotatoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2PotatoShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2PotatoShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2PotatoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2PotatoShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2PotatoShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersLcdCgwgHsmLcdGridV2PotatoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronPotatoShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronPotatoShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronPotatoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronPotatoShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronPotatoShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersMegatronCrtSonyMegatronPotatoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoMegatronShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoMegatronShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoMegatronShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoMegatronShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoMegatronShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersBasePostCrtPrepPotatoMegatronShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrLinearizeShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrLinearizeShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCrtHyllianSincCurvatureShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCrtHyllianSincCurvatureShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCrtHyllianSincCurvatureShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCrtHyllianSincCurvatureShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCrtHyllianSincCurvatureShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrCrtHyllianSincCurvatureShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrThresholdShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrThresholdShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrThresholdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrThresholdShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrThresholdShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrThresholdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_horizShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_horizShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_horizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_horizShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_horizShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_horizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_vertShaderDefs::sVertexHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_vertShaderDefs::sVertexByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_vertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_vertShaderDefs::sFragmentHash, RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_vertShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelMega_BezelShadersHyllianCrtSuperXbrBlur_vertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelUborderShadersUborderBezelReflectionsShaderDefs::sVertexHash, RetroArchBezelUborderShadersUborderBezelReflectionsShaderDefs::sVertexByteCode, sizeof(RetroArchBezelUborderShadersUborderBezelReflectionsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelUborderShadersUborderBezelReflectionsShaderDefs::sFragmentHash, RetroArchBezelUborderShadersUborderBezelReflectionsShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelUborderShadersUborderBezelReflectionsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone0_kokoAmbiStockShaderDefs::sVertexHash, RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone0_kokoAmbiStockShaderDefs::sVertexByteCode, sizeof(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone0_kokoAmbiStockShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone0_kokoAmbiStockShaderDefs::sFragmentHash, RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone0_kokoAmbiStockShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone0_kokoAmbiStockShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone1_kokoAmbiAvglumShaderDefs::sVertexHash, RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone1_kokoAmbiAvglumShaderDefs::sVertexByteCode, sizeof(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone1_kokoAmbiAvglumShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone1_kokoAmbiAvglumShaderDefs::sFragmentHash, RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone1_kokoAmbiAvglumShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone1_kokoAmbiAvglumShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone2_kokoAmbiTemporalShaderDefs::sVertexHash, RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone2_kokoAmbiTemporalShaderDefs::sVertexByteCode, sizeof(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone2_kokoAmbiTemporalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone2_kokoAmbiTemporalShaderDefs::sFragmentHash, RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone2_kokoAmbiTemporalShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelUborderShadersSupport_shadersKokoAmbiStandalone2_kokoAmbiTemporalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelUborderShadersSupport_shadersOriginalShaderDefs::sVertexHash, RetroArchBezelUborderShadersSupport_shadersOriginalShaderDefs::sVertexByteCode, sizeof(RetroArchBezelUborderShadersSupport_shadersOriginalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelUborderShadersSupport_shadersOriginalShaderDefs::sFragmentHash, RetroArchBezelUborderShadersSupport_shadersOriginalShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelUborderShadersSupport_shadersOriginalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelUborderShadersContent_shadersCrtNobodyShaderDefs::sVertexHash, RetroArchBezelUborderShadersContent_shadersCrtNobodyShaderDefs::sVertexByteCode, sizeof(RetroArchBezelUborderShadersContent_shadersCrtNobodyShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelUborderShadersContent_shadersCrtNobodyShaderDefs::sFragmentHash, RetroArchBezelUborderShadersContent_shadersCrtNobodyShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelUborderShadersContent_shadersCrtNobodyShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelUborderShadersUborderShaderDefs::sVertexHash, RetroArchBezelUborderShadersUborderShaderDefs::sVertexByteCode, sizeof(RetroArchBezelUborderShadersUborderShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelUborderShadersUborderShaderDefs::sFragmentHash, RetroArchBezelUborderShadersUborderShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelUborderShadersUborderShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelUborderShadersContent_bezel_shadersCrtNobodyBezelReflectionsShaderDefs::sVertexHash, RetroArchBezelUborderShadersContent_bezel_shadersCrtNobodyBezelReflectionsShaderDefs::sVertexByteCode, sizeof(RetroArchBezelUborderShadersContent_bezel_shadersCrtNobodyBezelReflectionsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelUborderShadersContent_bezel_shadersCrtNobodyBezelReflectionsShaderDefs::sFragmentHash, RetroArchBezelUborderShadersContent_bezel_shadersCrtNobodyBezelReflectionsShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelUborderShadersContent_bezel_shadersCrtNobodyBezelReflectionsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBezelUborderShadersContent_koko_ambiCrtNobodyShaderDefs::sVertexHash, RetroArchBezelUborderShadersContent_koko_ambiCrtNobodyShaderDefs::sVertexByteCode, sizeof(RetroArchBezelUborderShadersContent_koko_ambiCrtNobodyShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBezelUborderShadersContent_koko_ambiCrtNobodyShaderDefs::sFragmentHash, RetroArchBezelUborderShadersContent_koko_ambiCrtNobodyShaderDefs::sFragmentByteCode, sizeof(RetroArchBezelUborderShadersContent_koko_ambiCrtNobodyShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseLinearizeShaderDefs::sVertexHash, RetroArchBlursShadersKawaseLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseLinearizeShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersDual_filterDownsampleShaderDefs::sVertexHash, RetroArchBlursShadersDual_filterDownsampleShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersDual_filterDownsampleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersDual_filterDownsampleShaderDefs::sFragmentHash, RetroArchBlursShadersDual_filterDownsampleShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersDual_filterDownsampleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersDual_filterUpsampleShaderDefs::sVertexHash, RetroArchBlursShadersDual_filterUpsampleShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersDual_filterUpsampleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersDual_filterUpsampleShaderDefs::sFragmentHash, RetroArchBlursShadersDual_filterUpsampleShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersDual_filterUpsampleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseDelinearizeShaderDefs::sVertexHash, RetroArchBlursShadersKawaseDelinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseDelinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseDelinearizeShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseDelinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseDelinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersDual_filterDownsample_bloomShaderDefs::sVertexHash, RetroArchBlursShadersDual_filterDownsample_bloomShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersDual_filterDownsample_bloomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersDual_filterDownsample_bloomShaderDefs::sFragmentHash, RetroArchBlursShadersDual_filterDownsample_bloomShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersDual_filterDownsample_bloomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersDual_filterNaive_resampleShaderDefs::sVertexHash, RetroArchBlursShadersDual_filterNaive_resampleShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersDual_filterNaive_resampleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersDual_filterNaive_resampleShaderDefs::sFragmentHash, RetroArchBlursShadersDual_filterNaive_resampleShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersDual_filterNaive_resampleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersDual_filterMoving_avgShaderDefs::sVertexHash, RetroArchBlursShadersDual_filterMoving_avgShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersDual_filterMoving_avgShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersDual_filterMoving_avgShaderDefs::sFragmentHash, RetroArchBlursShadersDual_filterMoving_avgShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersDual_filterMoving_avgShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersDual_filterBloom_blendShaderDefs::sVertexHash, RetroArchBlursShadersDual_filterBloom_blendShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersDual_filterBloom_blendShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersDual_filterBloom_blendShaderDefs::sFragmentHash, RetroArchBlursShadersDual_filterBloom_blendShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersDual_filterBloom_blendShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersDual_filterBloom_blend_fastShaderDefs::sVertexHash, RetroArchBlursShadersDual_filterBloom_blend_fastShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersDual_filterBloom_blend_fastShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersDual_filterBloom_blend_fastShaderDefs::sFragmentHash, RetroArchBlursShadersDual_filterBloom_blend_fastShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersDual_filterBloom_blend_fastShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersDual_filterBloom_blend_fastestShaderDefs::sVertexHash, RetroArchBlursShadersDual_filterBloom_blend_fastestShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersDual_filterBloom_blend_fastestShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersDual_filterBloom_blend_fastestShaderDefs::sFragmentHash, RetroArchBlursShadersDual_filterBloom_blend_fastestShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersDual_filterBloom_blend_fastestShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussianSharpShaderDefs::sVertexHash, RetroArchBlursShadersGaussian_blur_filteringGaussianSharpShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussianSharpShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussianSharpShaderDefs::sFragmentHash, RetroArchBlursShadersGaussian_blur_filteringGaussianSharpShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussianSharpShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussianShaderDefs::sVertexHash, RetroArchBlursShadersGaussian_blur_filteringGaussianShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussianShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussianShaderDefs::sFragmentHash, RetroArchBlursShadersGaussian_blur_filteringGaussianShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussianShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalSharpShaderDefs::sVertexHash, RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalSharpShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalSharpShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalSharpShaderDefs::sFragmentHash, RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalSharpShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalSharpShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalSharpShaderDefs::sVertexHash, RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalSharpShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalSharpShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalSharpShaderDefs::sFragmentHash, RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalSharpShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalSharpShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalShaderDefs::sVertexHash, RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalShaderDefs::sFragmentHash, RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussian_horizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalShaderDefs::sVertexHash, RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalShaderDefs::sFragmentHash, RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersGaussian_blur_filteringGaussian_verticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersGauss_4tapGauss_2tap_hShaderDefs::sVertexHash, RetroArchBlursShadersGauss_4tapGauss_2tap_hShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersGauss_4tapGauss_2tap_hShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersGauss_4tapGauss_2tap_hShaderDefs::sFragmentHash, RetroArchBlursShadersGauss_4tapGauss_2tap_hShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersGauss_4tapGauss_2tap_hShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersGauss_4tapGauss_2tap_vShaderDefs::sVertexHash, RetroArchBlursShadersGauss_4tapGauss_2tap_vShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersGauss_4tapGauss_2tap_vShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersGauss_4tapGauss_2tap_vShaderDefs::sFragmentHash, RetroArchBlursShadersGauss_4tapGauss_2tap_vShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersGauss_4tapGauss_2tap_vShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersGizmoBlurShaderDefs::sVertexHash, RetroArchBlursShadersGizmoBlurShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersGizmoBlurShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersGizmoBlurShaderDefs::sFragmentHash, RetroArchBlursShadersGizmoBlurShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersGizmoBlurShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseKawase0ShaderDefs::sVertexHash, RetroArchBlursShadersKawaseKawase0ShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseKawase0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseKawase0ShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseKawase0ShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseKawase0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseKawase1ShaderDefs::sVertexHash, RetroArchBlursShadersKawaseKawase1ShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseKawase1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseKawase1ShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseKawase1ShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseKawase1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseKawase2ShaderDefs::sVertexHash, RetroArchBlursShadersKawaseKawase2ShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseKawase2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseKawase2ShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseKawase2ShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseKawase2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseKawase3ShaderDefs::sVertexHash, RetroArchBlursShadersKawaseKawase3ShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseKawase3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseKawase3ShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseKawase3ShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseKawase3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseKawase4ShaderDefs::sVertexHash, RetroArchBlursShadersKawaseKawase4ShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseKawase4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseKawase4ShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseKawase4ShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseKawase4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseKawase5ShaderDefs::sVertexHash, RetroArchBlursShadersKawaseKawase5ShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseKawase5ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseKawase5ShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseKawase5ShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseKawase5ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseKawase6ShaderDefs::sVertexHash, RetroArchBlursShadersKawaseKawase6ShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseKawase6ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseKawase6ShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseKawase6ShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseKawase6ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseKawase7ShaderDefs::sVertexHash, RetroArchBlursShadersKawaseKawase7ShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseKawase7ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseKawase7ShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseKawase7ShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseKawase7ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersKawaseScreen_combineShaderDefs::sVertexHash, RetroArchBlursShadersKawaseScreen_combineShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersKawaseScreen_combineShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersKawaseScreen_combineShaderDefs::sFragmentHash, RetroArchBlursShadersKawaseScreen_combineShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersKawaseScreen_combineShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersSharpsmootherShaderDefs::sVertexHash, RetroArchBlursShadersSharpsmootherShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersSharpsmootherShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersSharpsmootherShaderDefs::sFragmentHash, RetroArchBlursShadersSharpsmootherShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersSharpsmootherShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersSmartBlurShaderDefs::sVertexHash, RetroArchBlursShadersSmartBlurShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersSmartBlurShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersSmartBlurShaderDefs::sFragmentHash, RetroArchBlursShadersSmartBlurShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersSmartBlurShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMotionblurShadersFeedbackShaderDefs::sVertexHash, RetroArchMotionblurShadersFeedbackShaderDefs::sVertexByteCode, sizeof(RetroArchMotionblurShadersFeedbackShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMotionblurShadersFeedbackShaderDefs::sFragmentHash, RetroArchMotionblurShadersFeedbackShaderDefs::sFragmentByteCode, sizeof(RetroArchMotionblurShadersFeedbackShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersAmbientGlowShaderDefs::sVertexHash, RetroArchBorderShadersAmbientGlowShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersAmbientGlowShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersAmbientGlowShaderDefs::sFragmentHash, RetroArchBorderShadersAmbientGlowShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersAmbientGlowShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersAutocropKokoAutocrop0_precutShaderDefs::sVertexHash, RetroArchBorderShadersAutocropKokoAutocrop0_precutShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersAutocropKokoAutocrop0_precutShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersAutocropKokoAutocrop0_precutShaderDefs::sFragmentHash, RetroArchBorderShadersAutocropKokoAutocrop0_precutShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersAutocropKokoAutocrop0_precutShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersAutocropKokoAutocrop1_computeShaderDefs::sVertexHash, RetroArchBorderShadersAutocropKokoAutocrop1_computeShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersAutocropKokoAutocrop1_computeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersAutocropKokoAutocrop1_computeShaderDefs::sFragmentHash, RetroArchBorderShadersAutocropKokoAutocrop1_computeShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersAutocropKokoAutocrop1_computeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersAutocropKokoAutocrop2_displayShaderDefs::sVertexHash, RetroArchBorderShadersAutocropKokoAutocrop2_displayShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersAutocropKokoAutocrop2_displayShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersAutocropKokoAutocrop2_displayShaderDefs::sFragmentHash, RetroArchBorderShadersAutocropKokoAutocrop2_displayShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersAutocropKokoAutocrop2_displayShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersAverage_fillCrop_and_sample_topShaderDefs::sVertexHash, RetroArchBorderShadersAverage_fillCrop_and_sample_topShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersAverage_fillCrop_and_sample_topShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersAverage_fillCrop_and_sample_topShaderDefs::sFragmentHash, RetroArchBorderShadersAverage_fillCrop_and_sample_topShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersAverage_fillCrop_and_sample_topShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersAverage_fillCrop_and_sample_bottomShaderDefs::sVertexHash, RetroArchBorderShadersAverage_fillCrop_and_sample_bottomShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersAverage_fillCrop_and_sample_bottomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersAverage_fillCrop_and_sample_bottomShaderDefs::sFragmentHash, RetroArchBorderShadersAverage_fillCrop_and_sample_bottomShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersAverage_fillCrop_and_sample_bottomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersAverage_fillCrop_and_sample_leftShaderDefs::sVertexHash, RetroArchBorderShadersAverage_fillCrop_and_sample_leftShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersAverage_fillCrop_and_sample_leftShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersAverage_fillCrop_and_sample_leftShaderDefs::sFragmentHash, RetroArchBorderShadersAverage_fillCrop_and_sample_leftShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersAverage_fillCrop_and_sample_leftShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersAverage_fillCrop_and_sample_rightShaderDefs::sVertexHash, RetroArchBorderShadersAverage_fillCrop_and_sample_rightShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersAverage_fillCrop_and_sample_rightShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersAverage_fillCrop_and_sample_rightShaderDefs::sFragmentHash, RetroArchBorderShadersAverage_fillCrop_and_sample_rightShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersAverage_fillCrop_and_sample_rightShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersAverage_fillComposeShaderDefs::sVertexHash, RetroArchBorderShadersAverage_fillComposeShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersAverage_fillComposeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersAverage_fillComposeShaderDefs::sFragmentHash, RetroArchBorderShadersAverage_fillComposeShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersAverage_fillComposeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersBigblurShaderDefs::sVertexHash, RetroArchBorderShadersBigblurShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersBigblurShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersBigblurShaderDefs::sFragmentHash, RetroArchBorderShadersBigblurShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersBigblurShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersBlur_fillRender_sampling_areasShaderDefs::sVertexHash, RetroArchBorderShadersBlur_fillRender_sampling_areasShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersBlur_fillRender_sampling_areasShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersBlur_fillRender_sampling_areasShaderDefs::sFragmentHash, RetroArchBorderShadersBlur_fillRender_sampling_areasShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersBlur_fillRender_sampling_areasShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersBlur_fillComposeShaderDefs::sVertexHash, RetroArchBorderShadersBlur_fillComposeShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersBlur_fillComposeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersBlur_fillComposeShaderDefs::sFragmentHash, RetroArchBorderShadersBlur_fillComposeShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersBlur_fillComposeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersEffectBorderIqShaderDefs::sVertexHash, RetroArchBorderShadersEffectBorderIqShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersEffectBorderIqShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersEffectBorderIqShaderDefs::sFragmentHash, RetroArchBorderShadersEffectBorderIqShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersEffectBorderIqShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersImgborderGbpShaderDefs::sVertexHash, RetroArchBorderShadersImgborderGbpShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersImgborderGbpShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersImgborderGbpShaderDefs::sFragmentHash, RetroArchBorderShadersImgborderGbpShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersImgborderGbpShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtEasymodeShaderDefs::sVertexHash, RetroArchCrtShadersCrtEasymodeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtEasymodeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtEasymodeShaderDefs::sFragmentHash, RetroArchCrtShadersCrtEasymodeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtEasymodeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtGeomShaderDefs::sVertexHash, RetroArchCrtShadersCrtGeomShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtGeomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtGeomShaderDefs::sFragmentHash, RetroArchCrtShadersCrtGeomShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtGeomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersRoyaleBlur9fastVerticalShaderDefs::sVertexHash, RetroArchBlursShadersRoyaleBlur9fastVerticalShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersRoyaleBlur9fastVerticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersRoyaleBlur9fastVerticalShaderDefs::sFragmentHash, RetroArchBlursShadersRoyaleBlur9fastVerticalShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersRoyaleBlur9fastVerticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersRoyaleBlur9fastHorizontalShaderDefs::sVertexHash, RetroArchBlursShadersRoyaleBlur9fastHorizontalShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersRoyaleBlur9fastHorizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersRoyaleBlur9fastHorizontalShaderDefs::sFragmentHash, RetroArchBlursShadersRoyaleBlur9fastHorizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersRoyaleBlur9fastHorizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeVerticalShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeVerticalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeVerticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeVerticalShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeVerticalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeVerticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeHorizontalShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeHorizontalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeHorizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeHorizontalShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeHorizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleMaskResizeHorizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBrightpassShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBrightpassShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBrightpassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBrightpassShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBrightpassShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBrightpassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomVerticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomHorizontalReconstituteShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomHorizontalReconstituteShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomHorizontalReconstituteShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomHorizontalReconstituteShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomHorizontalReconstituteShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomHorizontalReconstituteShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorGbaColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorGbaColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorGbaColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorGbaColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorGbaColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorGbaColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersTvoutTweaksShaderDefs::sVertexHash, RetroArchCrtShadersTvoutTweaksShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersTvoutTweaksShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersTvoutTweaksShaderDefs::sFragmentHash, RetroArchCrtShadersTvoutTweaksShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersTvoutTweaksShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersImageAdjustmentShaderDefs::sVertexHash, RetroArchMiscShadersImageAdjustmentShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersImageAdjustmentShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersImageAdjustmentShaderDefs::sFragmentHash, RetroArchMiscShadersImageAdjustmentShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersImageAdjustmentShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersInterlacingShaderDefs::sVertexHash, RetroArchMiscShadersInterlacingShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersInterlacingShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersInterlacingShaderDefs::sFragmentHash, RetroArchMiscShadersInterlacingShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersInterlacingShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAutoBoxBoxCenterShaderDefs::sVertexHash, RetroArchAutoBoxBoxCenterShaderDefs::sVertexByteCode, sizeof(RetroArchAutoBoxBoxCenterShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAutoBoxBoxCenterShaderDefs::sFragmentHash, RetroArchAutoBoxBoxCenterShaderDefs::sFragmentByteCode, sizeof(RetroArchAutoBoxBoxCenterShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersImgborderShaderDefs::sVertexHash, RetroArchBorderShadersImgborderShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersImgborderShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersImgborderShaderDefs::sFragmentHash, RetroArchBorderShadersImgborderShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersImgborderShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtConsumerShaderDefs::sVertexHash, RetroArchCrtShadersCrtConsumerShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtConsumerShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtConsumerShaderDefs::sFragmentHash, RetroArchCrtShadersCrtConsumerShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtConsumerShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersDotShaderDefs::sVertexHash, RetroArchHandheldShadersDotShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersDotShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersDotShaderDefs::sFragmentHash, RetroArchHandheldShadersDotShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersDotShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersLcdCgwgLcdGridV2ShaderDefs::sVertexHash, RetroArchHandheldShadersLcdCgwgLcdGridV2ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersLcdCgwgLcdGridV2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersLcdCgwgLcdGridV2ShaderDefs::sFragmentHash, RetroArchHandheldShadersLcdCgwgLcdGridV2ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersLcdCgwgLcdGridV2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersLightgunBorderShaderDefs::sVertexHash, RetroArchBorderShadersLightgunBorderShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersLightgunBorderShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersLightgunBorderShaderDefs::sFragmentHash, RetroArchBorderShadersLightgunBorderShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersLightgunBorderShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersImgborderSgbShaderDefs::sVertexHash, RetroArchBorderShadersImgborderSgbShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersImgborderSgbShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersImgborderSgbShaderDefs::sFragmentHash, RetroArchBorderShadersImgborderSgbShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersImgborderSgbShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorGbcColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorGbcColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorGbcColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorGbcColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorGbcColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorGbcColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBorderShadersImgborderSgbaShaderDefs::sVertexHash, RetroArchBorderShadersImgborderSgbaShaderDefs::sVertexByteCode, sizeof(RetroArchBorderShadersImgborderSgbaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBorderShadersImgborderSgbaShaderDefs::sFragmentHash, RetroArchBorderShadersImgborderSgbaShaderDefs::sFragmentByteCode, sizeof(RetroArchBorderShadersImgborderSgbaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCelShadersAdvcartoonShaderDefs::sVertexHash, RetroArchCelShadersAdvcartoonShaderDefs::sVertexByteCode, sizeof(RetroArchCelShadersAdvcartoonShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCelShadersAdvcartoonShaderDefs::sFragmentHash, RetroArchCelShadersAdvcartoonShaderDefs::sFragmentByteCode, sizeof(RetroArchCelShadersAdvcartoonShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs::sVertexHash, RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs::sVertexByteCode, sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs::sFragmentHash, RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs::sFragmentByteCode, sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_ShaderShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_HShaderDefs::sVertexHash, RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_HShaderDefs::sVertexByteCode, sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_HShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_HShaderDefs::sFragmentHash, RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_HShaderDefs::sFragmentByteCode, sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_HShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs::sVertexHash, RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs::sVertexByteCode, sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs::sFragmentHash, RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs::sFragmentByteCode, sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_Blur_VShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs::sVertexHash, RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs::sVertexByteCode, sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs::sFragmentHash, RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs::sFragmentByteCode, sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_ColorShaderDefs::sVertexHash, RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_ColorShaderDefs::sVertexByteCode, sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_ColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_ColorShaderDefs::sFragmentHash, RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_ColorShaderDefs::sFragmentByteCode, sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_ColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersAdvanced_CRT_shader_whkrmrgks0ShaderDefs::sVertexHash, RetroArchCrtShadersAdvanced_CRT_shader_whkrmrgks0ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersAdvanced_CRT_shader_whkrmrgks0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersAdvanced_CRT_shader_whkrmrgks0ShaderDefs::sFragmentHash, RetroArchCrtShadersAdvanced_CRT_shader_whkrmrgks0ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersAdvanced_CRT_shader_whkrmrgks0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilCopyShaderDefs::sVertexHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilCopyShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilCopyShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilCopyShaderDefs::sFragmentHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilCopyShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilCopyShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xHorzShaderDefs::sVertexHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xHorzShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xHorzShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xHorzShaderDefs::sFragmentHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xHorzShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xHorzShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xVertShaderDefs::sVertexHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xVertShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xVertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xVertShaderDefs::sFragmentHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xVertShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilDownsample2xVertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleHorzShaderDefs::sVertexHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleHorzShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleHorzShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleHorzShaderDefs::sFragmentHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleHorzShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleHorzShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleVertShaderDefs::sVertexHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleVertShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleVertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleVertShaderDefs::sFragmentHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleVertShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilTonemapAndDownsampleVertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurHorzShaderDefs::sVertexHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurHorzShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurHorzShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurHorzShaderDefs::sFragmentHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurHorzShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurHorzShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurVertShaderDefs::sVertexHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurVertShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurVertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurVertShaderDefs::sFragmentHash, RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurVertShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroUtilGaussianBlurVertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateMasksShaderDefs::sVertexHash, RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateMasksShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateMasksShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateMasksShaderDefs::sFragmentHash, RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateMasksShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateMasksShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateScreenTextureShaderDefs::sVertexHash, RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateScreenTextureShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateScreenTextureShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateScreenTextureShaderDefs::sFragmentHash, RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateScreenTextureShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroCrtGenerateScreenTextureShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroCrtRgbToCrt_noSignalShaderDefs::sVertexHash, RetroArchCrtShadersCathodeRetroCathodeRetroCrtRgbToCrt_noSignalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroCrtRgbToCrt_noSignalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCathodeRetroCathodeRetroCrtRgbToCrt_noSignalShaderDefs::sFragmentHash, RetroArchCrtShadersCathodeRetroCathodeRetroCrtRgbToCrt_noSignalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCathodeRetroCathodeRetroCrtRgbToCrt_noSignalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrt1tapShaderDefs::sVertexHash, RetroArchCrtShadersCrt1tapShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrt1tapShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrt1tapShaderDefs::sFragmentHash, RetroArchCrtShadersCrt1tapShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrt1tapShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersRcasShaderDefs::sVertexHash, RetroArchSharpenShadersRcasShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersRcasShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersRcasShaderDefs::sFragmentHash, RetroArchSharpenShadersRcasShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersRcasShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtApertureShaderDefs::sVertexHash, RetroArchCrtShadersCrtApertureShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtApertureShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtApertureShaderDefs::sFragmentHash, RetroArchCrtShadersCrtApertureShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtApertureShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtBlurPiShaderDefs::sVertexHash, RetroArchCrtShadersCrtBlurPiShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtBlurPiShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtBlurPiShaderDefs::sFragmentHash, RetroArchCrtShadersCrtBlurPiShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtBlurPiShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtCaligariShaderDefs::sVertexHash, RetroArchCrtShadersCrtCaligariShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtCaligariShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtCaligariShaderDefs::sFragmentHash, RetroArchCrtShadersCrtCaligariShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtCaligariShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtCgwgFastShaderDefs::sVertexHash, RetroArchCrtShadersCrtCgwgFastShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtCgwgFastShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtCgwgFastShaderDefs::sFragmentHash, RetroArchCrtShadersCrtCgwgFastShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtCgwgFastShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtCyclonShaderDefs::sVertexHash, RetroArchCrtShadersCrtCyclonShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtCyclonShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtCyclonShaderDefs::sFragmentHash, RetroArchCrtShadersCrtCyclonShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtCyclonShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtEasymodeHalationLinearizeShaderDefs::sVertexHash, RetroArchCrtShadersCrtEasymodeHalationLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtEasymodeHalationLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtEasymodeHalationLinearizeShaderDefs::sFragmentHash, RetroArchCrtShadersCrtEasymodeHalationLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtEasymodeHalationLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtEasymodeHalationBlur_horizShaderDefs::sVertexHash, RetroArchCrtShadersCrtEasymodeHalationBlur_horizShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtEasymodeHalationBlur_horizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtEasymodeHalationBlur_horizShaderDefs::sFragmentHash, RetroArchCrtShadersCrtEasymodeHalationBlur_horizShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtEasymodeHalationBlur_horizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtEasymodeHalationBlur_vertShaderDefs::sVertexHash, RetroArchCrtShadersCrtEasymodeHalationBlur_vertShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtEasymodeHalationBlur_vertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtEasymodeHalationBlur_vertShaderDefs::sFragmentHash, RetroArchCrtShadersCrtEasymodeHalationBlur_vertShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtEasymodeHalationBlur_vertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtEasymodeHalationThresholdShaderDefs::sVertexHash, RetroArchCrtShadersCrtEasymodeHalationThresholdShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtEasymodeHalationThresholdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtEasymodeHalationThresholdShaderDefs::sFragmentHash, RetroArchCrtShadersCrtEasymodeHalationThresholdShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtEasymodeHalationThresholdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtEasymodeHalationCrtEasymodeHalationShaderDefs::sVertexHash, RetroArchCrtShadersCrtEasymodeHalationCrtEasymodeHalationShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtEasymodeHalationCrtEasymodeHalationShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtEasymodeHalationCrtEasymodeHalationShaderDefs::sFragmentHash, RetroArchCrtShadersCrtEasymodeHalationCrtEasymodeHalationShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtEasymodeHalationCrtEasymodeHalationShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtFrutbunnShaderDefs::sVertexHash, RetroArchCrtShadersCrtFrutbunnShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtFrutbunnShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtFrutbunnShaderDefs::sFragmentHash, RetroArchCrtShadersCrtFrutbunnShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtFrutbunnShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtGdvMiniUltraShaderDefs::sVertexHash, RetroArchCrtShadersCrtGdvMiniUltraShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtGdvMiniUltraShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtGdvMiniUltraShaderDefs::sFragmentHash, RetroArchCrtShadersCrtGdvMiniUltraShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtGdvMiniUltraShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtGdvMiniShaderDefs::sVertexHash, RetroArchCrtShadersCrtGdvMiniShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtGdvMiniShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtGdvMiniShaderDefs::sFragmentHash, RetroArchCrtShadersCrtGdvMiniShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtGdvMiniShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGeomDeluxePhosphor_applyShaderDefs::sVertexHash, RetroArchCrtShadersGeomDeluxePhosphor_applyShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGeomDeluxePhosphor_applyShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGeomDeluxePhosphor_applyShaderDefs::sFragmentHash, RetroArchCrtShadersGeomDeluxePhosphor_applyShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGeomDeluxePhosphor_applyShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGeomDeluxePhosphor_updateShaderDefs::sVertexHash, RetroArchCrtShadersGeomDeluxePhosphor_updateShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGeomDeluxePhosphor_updateShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGeomDeluxePhosphor_updateShaderDefs::sFragmentHash, RetroArchCrtShadersGeomDeluxePhosphor_updateShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGeomDeluxePhosphor_updateShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGeomDeluxeGaussxShaderDefs::sVertexHash, RetroArchCrtShadersGeomDeluxeGaussxShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGeomDeluxeGaussxShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGeomDeluxeGaussxShaderDefs::sFragmentHash, RetroArchCrtShadersGeomDeluxeGaussxShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGeomDeluxeGaussxShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGeomDeluxeGaussyShaderDefs::sVertexHash, RetroArchCrtShadersGeomDeluxeGaussyShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGeomDeluxeGaussyShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGeomDeluxeGaussyShaderDefs::sFragmentHash, RetroArchCrtShadersGeomDeluxeGaussyShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGeomDeluxeGaussyShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGeomDeluxeCrtGeomDeluxeShaderDefs::sVertexHash, RetroArchCrtShadersGeomDeluxeCrtGeomDeluxeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGeomDeluxeCrtGeomDeluxeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGeomDeluxeCrtGeomDeluxeShaderDefs::sFragmentHash, RetroArchCrtShadersGeomDeluxeCrtGeomDeluxeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGeomDeluxeCrtGeomDeluxeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtConsumerLinearizeShaderDefs::sVertexHash, RetroArchCrtShadersCrtConsumerLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtConsumerLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtConsumerLinearizeShaderDefs::sFragmentHash, RetroArchCrtShadersCrtConsumerLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtConsumerLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtGeomMiniShaderDefs::sVertexHash, RetroArchCrtShadersCrtGeomMiniShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtGeomMiniShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtGeomMiniShaderDefs::sFragmentHash, RetroArchCrtShadersCrtGeomMiniShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtGeomMiniShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastStockShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastStockShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastStockShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastStockShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastStockShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastStockShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastPreShadersShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastPreShadersShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastPreShadersShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastPreShadersShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastPreShadersShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastPreShadersShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastLinearizeShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastLinearizeShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1ShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastBloom_horizontalShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastBloom_horizontalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastBloom_horizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastBloom_horizontalShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastBloom_horizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastBloom_horizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastBloom_verticalShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastBloom_verticalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastBloom_verticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastBloom_verticalShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastBloom_verticalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastBloom_verticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2ShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastDeconvergenceFShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastDeconvergenceFShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastDeconvergenceFShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastDeconvergenceFShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastDeconvergenceFShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastDeconvergenceFShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastPerfPassShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastPerfPassShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastPerfPassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastPerfPassShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastPerfPassShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastPerfPassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastPreShadersfShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastPreShadersfShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastPreShadersfShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastPreShadersfShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastPreShadersfShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastPreShadersfShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastLinearizefShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastLinearizefShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastLinearizefShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastLinearizefShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastLinearizefShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastLinearizefShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1fShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1fShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1fShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1fShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1fShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass1fShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2fShaderDefs::sVertexHash, RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2fShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2fShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2fShaderDefs::sFragmentHash, RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2fShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestFastCrtGuestAdvancedPass2fShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdStockShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdStockShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdStockShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdStockShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdStockShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdStockShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdAfterglow0ShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdAfterglow0ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdAfterglow0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdAfterglow0ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdAfterglow0ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdAfterglow0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdPreShadersAfterglowShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdPreShadersAfterglowShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdPreShadersAfterglowShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdPreShadersAfterglowShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdPreShadersAfterglowShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdPreShadersAfterglowShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdLinearizeHdShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdLinearizeHdShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdLinearizeHdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdLinearizeHdShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdLinearizeHdShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdLinearizeHdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass1ShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass1ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdGaussian_horizontalShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdGaussian_horizontalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdGaussian_horizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdGaussian_horizontalShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdGaussian_horizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdGaussian_horizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdGaussian_verticalShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdGaussian_verticalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdGaussian_verticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdGaussian_verticalShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdGaussian_verticalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdGaussian_verticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdBloom_horizontalShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdBloom_horizontalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdBloom_horizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdBloom_horizontalShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdBloom_horizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdBloom_horizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdBloom_verticalShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdBloom_verticalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdBloom_verticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdBloom_verticalShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdBloom_verticalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdBloom_verticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass2ShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass2ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdCrtGuestAdvancedHdPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestHdDeconvergenceHdShaderDefs::sVertexHash, RetroArchCrtShadersGuestHdDeconvergenceHdShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestHdDeconvergenceHdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestHdDeconvergenceHdShaderDefs::sFragmentHash, RetroArchCrtShadersGuestHdDeconvergenceHdShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestHdDeconvergenceHdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedStockShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedStockShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedStockShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedStockShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedStockShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedStockShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedAfterglow0ShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedAfterglow0ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedAfterglow0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedAfterglow0ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedAfterglow0ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedAfterglow0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedPreShadersAfterglowShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedPreShadersAfterglowShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedPreShadersAfterglowShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedPreShadersAfterglowShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedPreShadersAfterglowShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedPreShadersAfterglowShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedNtscNtscPass1ShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedNtscNtscPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedNtscNtscPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedNtscNtscPass1ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedNtscNtscPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedNtscNtscPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedNtscNtscPass2ShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedNtscNtscPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedNtscNtscPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedNtscNtscPass2ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedNtscNtscPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedNtscNtscPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedNtscNtscPass3ShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedNtscNtscPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedNtscNtscPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedNtscNtscPass3ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedNtscNtscPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedNtscNtscPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedCustomFastSharpenShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedCustomFastSharpenShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedCustomFastSharpenShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedCustomFastSharpenShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedCustomFastSharpenShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedCustomFastSharpenShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedAvgLumNtscShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedLinearizeNtscShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedLinearizeNtscShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedLinearizeNtscShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedLinearizeNtscShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedLinearizeNtscShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedLinearizeNtscShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass1ShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass1ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedGaussian_verticalShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedGaussian_verticalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedGaussian_verticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedGaussian_verticalShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedGaussian_verticalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedGaussian_verticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedBloom_verticalShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedBloom_verticalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedBloom_verticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedBloom_verticalShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedBloom_verticalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedBloom_verticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass2ShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass2ShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedNtscPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedDeconvergenceNtscShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedDeconvergenceNtscShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedDeconvergenceNtscShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedDeconvergenceNtscShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedDeconvergenceNtscShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedDeconvergenceNtscShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedAvgLumShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedAvgLumShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedAvgLumShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedAvgLumShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedAvgLumShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedAvgLumShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedLinearizeShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedLinearizeShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedGaussian_horizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedBloom_horizontalShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedBloom_horizontalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedBloom_horizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedBloom_horizontalShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedBloom_horizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedBloom_horizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedCrtGuestAdvancedShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGuestAdvancedDeconvergenceShaderDefs::sVertexHash, RetroArchCrtShadersGuestAdvancedDeconvergenceShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGuestAdvancedDeconvergenceShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGuestAdvancedDeconvergenceShaderDefs::sFragmentHash, RetroArchCrtShadersGuestAdvancedDeconvergenceShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGuestAdvancedDeconvergenceShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllian3dShaderDefs::sVertexHash, RetroArchCrtShadersHyllianCrtHyllian3dShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllian3dShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllian3dShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianCrtHyllian3dShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllian3dShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllianFastShaderDefs::sVertexHash, RetroArchCrtShadersHyllianCrtHyllianFastShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllianFastShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllianFastShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianCrtHyllianFastShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllianFastShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianSupportMultiLUTModifiedShaderDefs::sVertexHash, RetroArchCrtShadersHyllianSupportMultiLUTModifiedShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianSupportMultiLUTModifiedShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianSupportMultiLUTModifiedShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianSupportMultiLUTModifiedShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianSupportMultiLUTModifiedShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass1ShaderDefs::sVertexHash, RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass1ShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass2ShaderDefs::sVertexHash, RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass2ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass2ShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianSupportNtscShadersNtscAdaptiveLiteNtscLitePass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianSupportLinearizeShaderDefs::sVertexHash, RetroArchCrtShadersHyllianSupportLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianSupportLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianSupportLinearizeShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianSupportLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianSupportLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllianPass1ShaderDefs::sVertexHash, RetroArchCrtShadersHyllianCrtHyllianPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllianPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllianPass1ShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianCrtHyllianPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllianPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllianSincPass0ShaderDefs::sVertexHash, RetroArchCrtShadersHyllianCrtHyllianSincPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllianSincPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllianSincPass0ShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianCrtHyllianSincPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllianSincPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianSupportMultiLUTLinearShaderDefs::sVertexHash, RetroArchCrtShadersHyllianSupportMultiLUTLinearShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianSupportMultiLUTLinearShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianSupportMultiLUTLinearShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianSupportMultiLUTLinearShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianSupportMultiLUTLinearShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllianBaseShaderDefs::sVertexHash, RetroArchCrtShadersHyllianCrtHyllianBaseShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllianBaseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllianBaseShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianCrtHyllianBaseShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllianBaseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianSupportGlowThresholdShaderDefs::sVertexHash, RetroArchCrtShadersHyllianSupportGlowThresholdShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianSupportGlowThresholdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianSupportGlowThresholdShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianSupportGlowThresholdShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianSupportGlowThresholdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianSupportGlowBlur_horizShaderDefs::sVertexHash, RetroArchCrtShadersHyllianSupportGlowBlur_horizShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianSupportGlowBlur_horizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianSupportGlowBlur_horizShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianSupportGlowBlur_horizShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianSupportGlowBlur_horizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianSupportGlowBlurGlowMaskGeomShaderDefs::sVertexHash, RetroArchCrtShadersHyllianSupportGlowBlurGlowMaskGeomShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianSupportGlowBlurGlowMaskGeomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianSupportGlowBlurGlowMaskGeomShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianSupportGlowBlurGlowMaskGeomShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianSupportGlowBlurGlowMaskGeomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass0ShaderDefs::sVertexHash, RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass0ShaderDefs::sFragmentHash, RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs::sVertexHash, RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs::sFragmentHash, RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass2ShaderDefs::sVertexHash, RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass2ShaderDefs::sFragmentHash, RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtInterlacedHalationCrtInterlacedHalationPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtLottesFastShaderDefs::sVertexHash, RetroArchCrtShadersCrtLottesFastShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtLottesFastShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtLottesFastShaderDefs::sFragmentHash, RetroArchCrtShadersCrtLottesFastShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtLottesFastShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtLottesMultipassBloompassShaderDefs::sVertexHash, RetroArchCrtShadersCrtLottesMultipassBloompassShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtLottesMultipassBloompassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtLottesMultipassBloompassShaderDefs::sFragmentHash, RetroArchCrtShadersCrtLottesMultipassBloompassShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtLottesMultipassBloompassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs::sVertexHash, RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs::sFragmentHash, RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtLottesMultipassScanpassShaderDefs::sVertexHash, RetroArchCrtShadersCrtLottesMultipassScanpassShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtLottesMultipassScanpassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtLottesMultipassScanpassShaderDefs::sFragmentHash, RetroArchCrtShadersCrtLottesMultipassScanpassShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtLottesMultipassScanpassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtLottesShaderDefs::sVertexHash, RetroArchCrtShadersCrtLottesShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtLottesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtLottesShaderDefs::sFragmentHash, RetroArchCrtShadersCrtLottesShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtLottesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMattiasShaderDefs::sVertexHash, RetroArchCrtShadersCrtMattiasShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMattiasShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMattiasShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMattiasShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMattiasShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcH_blurShaderDefs::sVertexHash, RetroArchCrtShadersCrtMaximusRoyaleSrcH_blurShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcH_blurShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcH_blurShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMaximusRoyaleSrcH_blurShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcH_blurShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcResizeShaderDefs::sVertexHash, RetroArchCrtShadersCrtMaximusRoyaleSrcResizeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcResizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcResizeShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMaximusRoyaleSrcResizeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcResizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcCrt_reflectShaderDefs::sVertexHash, RetroArchCrtShadersCrtMaximusRoyaleSrcCrt_reflectShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcCrt_reflectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcCrt_reflectShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMaximusRoyaleSrcCrt_reflectShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcCrt_reflectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass1ShaderDefs::sVertexHash, RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass1ShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass2ShaderDefs::sVertexHash, RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass2ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass2ShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcBGcolor_pass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcImgborderShaderDefs::sVertexHash, RetroArchCrtShadersCrtMaximusRoyaleSrcImgborderShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcImgborderShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcImgborderShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMaximusRoyaleSrcImgborderShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcImgborderShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcTv_reflectionShaderDefs::sVertexHash, RetroArchCrtShadersCrtMaximusRoyaleSrcTv_reflectionShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcTv_reflectionShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcTv_reflectionShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMaximusRoyaleSrcTv_reflectionShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcTv_reflectionShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcHorizontal_ringingShaderDefs::sVertexHash, RetroArchCrtShadersCrtMaximusRoyaleSrcHorizontal_ringingShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcHorizontal_ringingShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcHorizontal_ringingShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMaximusRoyaleSrcHorizontal_ringingShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcHorizontal_ringingShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass1ShaderDefs::sVertexHash, RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass1ShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass2ShaderDefs::sVertexHash, RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass2ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass2ShaderDefs::sFragmentHash, RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtMaximusRoyaleSrcNtsc_pass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtNesMiniShaderDefs::sVertexHash, RetroArchCrtShadersCrtNesMiniShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtNesMiniShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtNesMiniShaderDefs::sFragmentHash, RetroArchCrtShadersCrtNesMiniShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtNesMiniShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtNobodyShaderDefs::sVertexHash, RetroArchCrtShadersCrtNobodyShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtNobodyShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtNobodyShaderDefs::sFragmentHash, RetroArchCrtShadersCrtNobodyShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtNobodyShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtPiShaderDefs::sVertexHash, RetroArchCrtShadersCrtPiShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtPiShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtPiShaderDefs::sFragmentHash, RetroArchCrtShadersCrtPiShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtPiShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtPocketShaderDefs::sVertexHash, RetroArchCrtShadersCrtPocketShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtPocketShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtPocketShaderDefs::sFragmentHash, RetroArchCrtShadersCrtPocketShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtPocketShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtPotatoShaderFilesUltra_potatoShaderDefs::sVertexHash, RetroArchCrtShadersCrtPotatoShaderFilesUltra_potatoShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtPotatoShaderFilesUltra_potatoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtPotatoShaderFilesUltra_potatoShaderDefs::sFragmentHash, RetroArchCrtShadersCrtPotatoShaderFilesUltra_potatoShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtPotatoShaderFilesUltra_potatoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs::sVertexHash, RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs::sFragmentHash, RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtResswitchGlitchKokoShaderDefs::sVertexHash, RetroArchCrtShadersCrtResswitchGlitchKokoShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtResswitchGlitchKokoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtResswitchGlitchKokoShaderDefs::sFragmentHash, RetroArchCrtShadersCrtResswitchGlitchKokoShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtResswitchGlitchKokoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomIntelShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomIntelShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomIntelShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomIntelShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomIntelShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomIntelShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomIntelShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomIntelShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomIntelShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomIntelShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomIntelShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomIntelShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassIntelShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassIntelShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassIntelShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassIntelShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassIntelShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleGeometryAaLastPassIntelShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxFakeBloomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskFakeBloomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleFirstPassLinearizeCrtGammaBobFieldsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesVerticalInterlacingShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeVerticalShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeVerticalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeVerticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeVerticalShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeVerticalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeVerticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeHorizontalShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeHorizontalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeHorizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeHorizontalShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeHorizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleMaskResizeHorizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleScanlinesHorizontalApplyMaskShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBrightpassShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBrightpassShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBrightpassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBrightpassShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBrightpassShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBrightpassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomVerticalShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomVerticalShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomVerticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomVerticalShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomVerticalShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomVerticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomHorizontalReconstituteShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomHorizontalReconstituteShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomHorizontalReconstituteShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomHorizontalReconstituteShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomHorizontalReconstituteShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcFastCrtRoyaleBloomHorizontalReconstituteShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxIntelShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxIntelShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxIntelShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxIntelShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxIntelShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleBloomApproxIntelShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskIntelShaderDefs::sVertexHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskIntelShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskIntelShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskIntelShaderDefs::sFragmentHash, RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskIntelShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtRoyaleSrcCrtRoyaleScanlinesHorizontalApplyMaskIntelShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSimpleShaderDefs::sVertexHash, RetroArchCrtShadersCrtSimpleShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSimpleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSimpleShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSimpleShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSimpleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSinesShaderDefs::sVertexHash, RetroArchCrtShadersCrtSinesShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSinesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSinesShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSinesShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSinesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSlangtestLinearizeShaderDefs::sVertexHash, RetroArchCrtShadersCrtSlangtestLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSlangtestLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSlangtestLinearizeShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSlangtestLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSlangtestLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSlangtestCubicShaderDefs::sVertexHash, RetroArchCrtShadersCrtSlangtestCubicShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSlangtestCubicShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSlangtestCubicShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSlangtestCubicShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSlangtestCubicShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSlangtestScanlineShaderDefs::sVertexHash, RetroArchCrtShadersCrtSlangtestScanlineShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSlangtestScanlineShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSlangtestScanlineShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSlangtestScanlineShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSlangtestScanlineShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSlangtestSincShaderDefs::sVertexHash, RetroArchCrtShadersCrtSlangtestSincShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSlangtestSincShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSlangtestSincShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSlangtestSincShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSlangtestSincShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrLinearizeShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrLinearizeShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrSuperXbrPass0ShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrSuperXbrPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrSuperXbrPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrSuperXbrPass0ShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrSuperXbrPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrSuperXbrPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrSuperXbrPass1ShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrSuperXbrPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrSuperXbrPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrSuperXbrPass1ShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrSuperXbrPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrSuperXbrPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrSuperXbrPass2ShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrSuperXbrPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrSuperXbrPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrSuperXbrPass2ShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrSuperXbrPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrSuperXbrPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrCustomBicubicXShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrCustomBicubicXShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrCustomBicubicXShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrCustomBicubicXShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrCustomBicubicXShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrCustomBicubicXShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrCustomBicubicYShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrCustomBicubicYShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrCustomBicubicYShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrCustomBicubicYShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrCustomBicubicYShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrCustomBicubicYShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrCrtCustomShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrCrtCustomShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrCrtCustomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrCrtCustomShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrCrtCustomShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrCrtCustomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrThresholdShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrThresholdShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrThresholdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrThresholdShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrThresholdShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrThresholdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrBlur_horizShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrBlur_horizShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrBlur_horizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrBlur_horizShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrBlur_horizShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrBlur_horizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrBlur_vertShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrBlur_vertShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrBlur_vertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrBlur_vertShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrBlur_vertShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrBlur_vertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtSuperXbrCustomResolveShaderDefs::sVertexHash, RetroArchCrtShadersCrtSuperXbrCustomResolveShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrCustomResolveShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtSuperXbrCustomResolveShaderDefs::sFragmentHash, RetroArchCrtShadersCrtSuperXbrCustomResolveShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtSuperXbrCustomResolveShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersTorridgristleScanlineInterpolationShaderDefs::sVertexHash, RetroArchCrtShadersTorridgristleScanlineInterpolationShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersTorridgristleScanlineInterpolationShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersTorridgristleScanlineInterpolationShaderDefs::sFragmentHash, RetroArchCrtShadersTorridgristleScanlineInterpolationShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersTorridgristleScanlineInterpolationShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersTorridgristleScanlineSimpleShaderDefs::sVertexHash, RetroArchCrtShadersTorridgristleScanlineSimpleShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersTorridgristleScanlineSimpleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersTorridgristleScanlineSimpleShaderDefs::sFragmentHash, RetroArchCrtShadersTorridgristleScanlineSimpleShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersTorridgristleScanlineSimpleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs::sVertexHash, RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs::sFragmentHash, RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBlendoverlayBlendoverlayShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersTorridgristleBrightenShaderDefs::sVertexHash, RetroArchCrtShadersTorridgristleBrightenShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersTorridgristleBrightenShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersTorridgristleBrightenShaderDefs::sFragmentHash, RetroArchCrtShadersTorridgristleBrightenShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersTorridgristleBrightenShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersTorridgristleSunsetGaussianVertShaderDefs::sVertexHash, RetroArchCrtShadersTorridgristleSunsetGaussianVertShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersTorridgristleSunsetGaussianVertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersTorridgristleSunsetGaussianVertShaderDefs::sFragmentHash, RetroArchCrtShadersTorridgristleSunsetGaussianVertShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersTorridgristleSunsetGaussianVertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersTorridgristleSunsetGaussianHorizShaderDefs::sVertexHash, RetroArchCrtShadersTorridgristleSunsetGaussianHorizShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersTorridgristleSunsetGaussianHorizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersTorridgristleSunsetGaussianHorizShaderDefs::sFragmentHash, RetroArchCrtShadersTorridgristleSunsetGaussianHorizShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersTorridgristleSunsetGaussianHorizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersTorridgristleCandyBloomShaderDefs::sVertexHash, RetroArchCrtShadersTorridgristleCandyBloomShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersTorridgristleCandyBloomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersTorridgristleCandyBloomShaderDefs::sFragmentHash, RetroArchCrtShadersTorridgristleCandyBloomShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersTorridgristleCandyBloomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtYo6CrtYo6FlatTrinitronTvShaderDefs::sVertexHash, RetroArchCrtShadersCrtYo6CrtYo6FlatTrinitronTvShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtYo6CrtYo6FlatTrinitronTvShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtYo6CrtYo6FlatTrinitronTvShaderDefs::sFragmentHash, RetroArchCrtShadersCrtYo6CrtYo6FlatTrinitronTvShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtYo6CrtYo6FlatTrinitronTvShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtYo6CrtYo6NativeResolutionShaderDefs::sVertexHash, RetroArchCrtShadersCrtYo6CrtYo6NativeResolutionShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtYo6CrtYo6NativeResolutionShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtYo6CrtYo6NativeResolutionShaderDefs::sFragmentHash, RetroArchCrtShadersCrtYo6CrtYo6NativeResolutionShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtYo6CrtYo6NativeResolutionShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtYo6CrtYo6WarpShaderDefs::sVertexHash, RetroArchCrtShadersCrtYo6CrtYo6WarpShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtYo6CrtYo6WarpShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtYo6CrtYo6WarpShaderDefs::sFragmentHash, RetroArchCrtShadersCrtYo6CrtYo6WarpShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtYo6CrtYo6WarpShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersJinc2ShaderDefs::sVertexHash, RetroArchInterpolationShadersJinc2ShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersJinc2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersJinc2ShaderDefs::sFragmentHash, RetroArchInterpolationShadersJinc2ShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersJinc2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowLinearizeShaderDefs::sVertexHash, RetroArchCrtShadersGlowLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowLinearizeShaderDefs::sFragmentHash, RetroArchCrtShadersGlowLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowGauss_horizShaderDefs::sVertexHash, RetroArchCrtShadersGlowGauss_horizShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowGauss_horizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowGauss_horizShaderDefs::sFragmentHash, RetroArchCrtShadersGlowGauss_horizShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowGauss_horizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowGauss_vertShaderDefs::sVertexHash, RetroArchCrtShadersGlowGauss_vertShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowGauss_vertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowGauss_vertShaderDefs::sFragmentHash, RetroArchCrtShadersGlowGauss_vertShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowGauss_vertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowThresholdShaderDefs::sVertexHash, RetroArchCrtShadersGlowThresholdShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowThresholdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowThresholdShaderDefs::sFragmentHash, RetroArchCrtShadersGlowThresholdShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowThresholdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowBlur_horizShaderDefs::sVertexHash, RetroArchCrtShadersGlowBlur_horizShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowBlur_horizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowBlur_horizShaderDefs::sFragmentHash, RetroArchCrtShadersGlowBlur_horizShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowBlur_horizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowBlur_vertShaderDefs::sVertexHash, RetroArchCrtShadersGlowBlur_vertShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowBlur_vertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowBlur_vertShaderDefs::sFragmentHash, RetroArchCrtShadersGlowBlur_vertShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowBlur_vertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowResolveShaderDefs::sVertexHash, RetroArchCrtShadersGlowResolveShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowResolveShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowResolveShaderDefs::sFragmentHash, RetroArchCrtShadersGlowResolveShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowResolveShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowLanczos_horizShaderDefs::sVertexHash, RetroArchCrtShadersGlowLanczos_horizShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowLanczos_horizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowLanczos_horizShaderDefs::sFragmentHash, RetroArchCrtShadersGlowLanczos_horizShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowLanczos_horizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtsimCompositeShaderDefs::sVertexHash, RetroArchCrtShadersCrtsimCompositeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtsimCompositeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtsimCompositeShaderDefs::sFragmentHash, RetroArchCrtShadersCrtsimCompositeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtsimCompositeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtsimScreenShaderDefs::sVertexHash, RetroArchCrtShadersCrtsimScreenShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtsimScreenShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtsimScreenShaderDefs::sFragmentHash, RetroArchCrtShadersCrtsimScreenShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtsimScreenShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtsimPostDownsampleShaderDefs::sVertexHash, RetroArchCrtShadersCrtsimPostDownsampleShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtsimPostDownsampleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtsimPostDownsampleShaderDefs::sFragmentHash, RetroArchCrtShadersCrtsimPostDownsampleShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtsimPostDownsampleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtsimPostUpsampleShaderDefs::sVertexHash, RetroArchCrtShadersCrtsimPostUpsampleShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtsimPostUpsampleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtsimPostUpsampleShaderDefs::sFragmentHash, RetroArchCrtShadersCrtsimPostUpsampleShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtsimPostUpsampleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtsimPresentShaderDefs::sVertexHash, RetroArchCrtShadersCrtsimPresentShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtsimPresentShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtsimPresentShaderDefs::sFragmentHash, RetroArchCrtShadersCrtsimPresentShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtsimPresentShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersFakeCrtGeomPotatoShaderDefs::sVertexHash, RetroArchCrtShadersFakeCrtGeomPotatoShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersFakeCrtGeomPotatoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersFakeCrtGeomPotatoShaderDefs::sFragmentHash, RetroArchCrtShadersFakeCrtGeomPotatoShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersFakeCrtGeomPotatoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersFakeCrtGeomShaderDefs::sVertexHash, RetroArchCrtShadersFakeCrtGeomShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersFakeCrtGeomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersFakeCrtGeomShaderDefs::sFragmentHash, RetroArchCrtShadersFakeCrtGeomShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersFakeCrtGeomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersFakelottesShaderDefs::sVertexHash, RetroArchCrtShadersFakelottesShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersFakelottesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersFakelottesShaderDefs::sFragmentHash, RetroArchCrtShadersFakelottesShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersFakelottesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGizmoCrtShaderDefs::sVertexHash, RetroArchCrtShadersGizmoCrtShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGizmoCrtShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGizmoCrtShaderDefs::sFragmentHash, RetroArchCrtShadersGizmoCrtShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGizmoCrtShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGizmoSlotmaskCrtShaderDefs::sVertexHash, RetroArchCrtShadersGizmoSlotmaskCrtShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGizmoSlotmaskCrtShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGizmoSlotmaskCrtShaderDefs::sFragmentHash, RetroArchCrtShadersGizmoSlotmaskCrtShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGizmoSlotmaskCrtShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowTrailsGlowTrails0ShaderDefs::sVertexHash, RetroArchCrtShadersGlowTrailsGlowTrails0ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowTrailsGlowTrails0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowTrailsGlowTrails0ShaderDefs::sFragmentHash, RetroArchCrtShadersGlowTrailsGlowTrails0ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowTrailsGlowTrails0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowTrailsGlowTrails1ShaderDefs::sVertexHash, RetroArchCrtShadersGlowTrailsGlowTrails1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowTrailsGlowTrails1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowTrailsGlowTrails1ShaderDefs::sFragmentHash, RetroArchCrtShadersGlowTrailsGlowTrails1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowTrailsGlowTrails1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGritsScanlinesGritsScanlinesShaderDefs::sVertexHash, RetroArchCrtShadersGritsScanlinesGritsScanlinesShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGritsScanlinesGritsScanlinesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGritsScanlinesGritsScanlinesShaderDefs::sFragmentHash, RetroArchCrtShadersGritsScanlinesGritsScanlinesShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGritsScanlinesGritsScanlinesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGtuV050Pass1ShaderDefs::sVertexHash, RetroArchCrtShadersGtuV050Pass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGtuV050Pass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGtuV050Pass1ShaderDefs::sFragmentHash, RetroArchCrtShadersGtuV050Pass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGtuV050Pass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGtuV050Pass2ShaderDefs::sVertexHash, RetroArchCrtShadersGtuV050Pass2ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGtuV050Pass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGtuV050Pass2ShaderDefs::sFragmentHash, RetroArchCrtShadersGtuV050Pass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGtuV050Pass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGtuV050Pass3ShaderDefs::sVertexHash, RetroArchCrtShadersGtuV050Pass3ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGtuV050Pass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGtuV050Pass3ShaderDefs::sFragmentHash, RetroArchCrtShadersGtuV050Pass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGtuV050Pass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_ntsc_encodeShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_ntsc_encodeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_ntsc_encodeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_ntsc_encodeShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_ntsc_encodeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_ntsc_encodeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_ntsc_decodeShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_ntsc_decodeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_ntsc_decodeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_ntsc_decodeShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_ntsc_decodeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_ntsc_decodeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_colorShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_colorShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_colorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_colorShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_colorShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_colorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_prescaleShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_prescaleShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_prescaleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_prescaleShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_prescaleShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_prescaleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_deconvergeShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_deconvergeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_deconvergeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_deconvergeShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_deconvergeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_deconvergeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_scanlineShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_scanlineShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_scanlineShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_scanlineShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_scanlineShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_scanlineShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_defocusShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_defocusShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_defocusShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_defocusShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_defocusShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_defocusShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_postShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_postShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_postShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_postShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_postShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_postShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_phosphorShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_phosphorShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_phosphorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_phosphorShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_phosphorShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_phosphorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_chromaShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_chromaShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_chromaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_chromaShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_chromaShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_chromaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_distortionShaderDefs::sVertexHash, RetroArchCrtShadersMame_hlslShadersMame_distortionShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_distortionShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMame_hlslShadersMame_distortionShaderDefs::sFragmentHash, RetroArchCrtShadersMame_hlslShadersMame_distortionShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMame_hlslShadersMame_distortionShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMetacrtBufCShaderDefs::sVertexHash, RetroArchCrtShadersMetacrtBufCShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMetacrtBufCShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMetacrtBufCShaderDefs::sFragmentHash, RetroArchCrtShadersMetacrtBufCShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMetacrtBufCShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMetacrtBufDShaderDefs::sVertexHash, RetroArchCrtShadersMetacrtBufDShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMetacrtBufDShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMetacrtBufDShaderDefs::sFragmentHash, RetroArchCrtShadersMetacrtBufDShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMetacrtBufDShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersMetacrtImageShaderDefs::sVertexHash, RetroArchCrtShadersMetacrtImageShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersMetacrtImageShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersMetacrtImageShaderDefs::sFragmentHash, RetroArchCrtShadersMetacrtImageShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersMetacrtImageShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersNewpixieAccumulateShaderDefs::sVertexHash, RetroArchCrtShadersNewpixieAccumulateShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersNewpixieAccumulateShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersNewpixieAccumulateShaderDefs::sFragmentHash, RetroArchCrtShadersNewpixieAccumulateShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersNewpixieAccumulateShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersNewpixieBlur_horizShaderDefs::sVertexHash, RetroArchCrtShadersNewpixieBlur_horizShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersNewpixieBlur_horizShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersNewpixieBlur_horizShaderDefs::sFragmentHash, RetroArchCrtShadersNewpixieBlur_horizShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersNewpixieBlur_horizShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersNewpixieBlur_vertShaderDefs::sVertexHash, RetroArchCrtShadersNewpixieBlur_vertShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersNewpixieBlur_vertShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersNewpixieBlur_vertShaderDefs::sFragmentHash, RetroArchCrtShadersNewpixieBlur_vertShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersNewpixieBlur_vertShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersNewpixieNewpixieCrtShaderDefs::sVertexHash, RetroArchCrtShadersNewpixieNewpixieCrtShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersNewpixieNewpixieCrtShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersNewpixieNewpixieCrtShaderDefs::sFragmentHash, RetroArchCrtShadersNewpixieNewpixieCrtShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersNewpixieNewpixieCrtShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersNewpixieMiniNewpixieMiniShaderDefs::sVertexHash, RetroArchCrtShadersNewpixieMiniNewpixieMiniShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersNewpixieMiniNewpixieMiniShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersNewpixieMiniNewpixieMiniShaderDefs::sFragmentHash, RetroArchCrtShadersNewpixieMiniNewpixieMiniShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersNewpixieMiniNewpixieMiniShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersPhosphorlutScanlinesInterlaceLinearizeShaderDefs::sVertexHash, RetroArchCrtShadersPhosphorlutScanlinesInterlaceLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersPhosphorlutScanlinesInterlaceLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersPhosphorlutScanlinesInterlaceLinearizeShaderDefs::sFragmentHash, RetroArchCrtShadersPhosphorlutScanlinesInterlaceLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersPhosphorlutScanlinesInterlaceLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersRoyaleBlur5fastVerticalShaderDefs::sVertexHash, RetroArchBlursShadersRoyaleBlur5fastVerticalShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersRoyaleBlur5fastVerticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersRoyaleBlur5fastVerticalShaderDefs::sFragmentHash, RetroArchBlursShadersRoyaleBlur5fastVerticalShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersRoyaleBlur5fastVerticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersRoyaleBlur5fastHorizontalShaderDefs::sVertexHash, RetroArchBlursShadersRoyaleBlur5fastHorizontalShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersRoyaleBlur5fastHorizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersRoyaleBlur5fastHorizontalShaderDefs::sFragmentHash, RetroArchBlursShadersRoyaleBlur5fastHorizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersRoyaleBlur5fastHorizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersPhosphorlutPhosphorlutPass0ShaderDefs::sVertexHash, RetroArchCrtShadersPhosphorlutPhosphorlutPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersPhosphorlutPhosphorlutPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersPhosphorlutPhosphorlutPass0ShaderDefs::sFragmentHash, RetroArchCrtShadersPhosphorlutPhosphorlutPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersPhosphorlutPhosphorlutPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersPhosphorlutPhosphorlutPass1ShaderDefs::sVertexHash, RetroArchCrtShadersPhosphorlutPhosphorlutPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersPhosphorlutPhosphorlutPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersPhosphorlutPhosphorlutPass1ShaderDefs::sFragmentHash, RetroArchCrtShadersPhosphorlutPhosphorlutPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersPhosphorlutPhosphorlutPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersRt_curvatureRt_curvatureShaderDefs::sVertexHash, RetroArchCrtShadersRt_curvatureRt_curvatureShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersRt_curvatureRt_curvatureShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersRt_curvatureRt_curvatureShaderDefs::sFragmentHash, RetroArchCrtShadersRt_curvatureRt_curvatureShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersRt_curvatureRt_curvatureShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersRoyaleBlur43fastVerticalShaderDefs::sVertexHash, RetroArchBlursShadersRoyaleBlur43fastVerticalShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersRoyaleBlur43fastVerticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersRoyaleBlur43fastVerticalShaderDefs::sFragmentHash, RetroArchBlursShadersRoyaleBlur43fastVerticalShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersRoyaleBlur43fastVerticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersRoyaleBlur43fastHorizontalShaderDefs::sVertexHash, RetroArchBlursShadersRoyaleBlur43fastHorizontalShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersRoyaleBlur43fastHorizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersRoyaleBlur43fastHorizontalShaderDefs::sFragmentHash, RetroArchBlursShadersRoyaleBlur43fastHorizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersRoyaleBlur43fastHorizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersGlowTrailsCombineShaderDefs::sVertexHash, RetroArchCrtShadersGlowTrailsCombineShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersGlowTrailsCombineShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersGlowTrailsCombineShaderDefs::sFragmentHash, RetroArchCrtShadersGlowTrailsCombineShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersGlowTrailsCombineShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersVt220Vt220ShaderDefs::sVertexHash, RetroArchCrtShadersVt220Vt220ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersVt220Vt220ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersVt220Vt220ShaderDefs::sFragmentHash, RetroArchCrtShadersVt220Vt220ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersVt220Vt220ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersYee64ShaderDefs::sVertexHash, RetroArchCrtShadersYee64ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersYee64ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersYee64ShaderDefs::sFragmentHash, RetroArchCrtShadersYee64ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersYee64ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersYeetronShaderDefs::sVertexHash, RetroArchCrtShadersYeetronShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersYeetronShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersYeetronShaderDefs::sFragmentHash, RetroArchCrtShadersYeetronShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersYeetronShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersZfast_crtZfast_crt_compositeShaderDefs::sVertexHash, RetroArchCrtShadersZfast_crtZfast_crt_compositeShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersZfast_crtZfast_crt_compositeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersZfast_crtZfast_crt_compositeShaderDefs::sFragmentHash, RetroArchCrtShadersZfast_crtZfast_crt_compositeShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersZfast_crtZfast_crt_compositeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersZfast_crtZfast_crt_curvatureShaderDefs::sVertexHash, RetroArchCrtShadersZfast_crtZfast_crt_curvatureShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersZfast_crtZfast_crt_curvatureShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersZfast_crtZfast_crt_curvatureShaderDefs::sFragmentHash, RetroArchCrtShadersZfast_crtZfast_crt_curvatureShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersZfast_crtZfast_crt_curvatureShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersZfast_crtZfast_crt_geoShaderDefs::sVertexHash, RetroArchCrtShadersZfast_crtZfast_crt_geoShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersZfast_crtZfast_crt_geoShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersZfast_crtZfast_crt_geoShaderDefs::sFragmentHash, RetroArchCrtShadersZfast_crtZfast_crt_geoShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersZfast_crtZfast_crt_geoShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersZfast_crtZfast_crt_coarsemaskShaderDefs::sVertexHash, RetroArchCrtShadersZfast_crtZfast_crt_coarsemaskShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersZfast_crtZfast_crt_coarsemaskShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersZfast_crtZfast_crt_coarsemaskShaderDefs::sFragmentHash, RetroArchCrtShadersZfast_crtZfast_crt_coarsemaskShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersZfast_crtZfast_crt_coarsemaskShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersZfast_crtZfast_crt_finemaskShaderDefs::sVertexHash, RetroArchCrtShadersZfast_crtZfast_crt_finemaskShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersZfast_crtZfast_crt_finemaskShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersZfast_crtZfast_crt_finemaskShaderDefs::sFragmentHash, RetroArchCrtShadersZfast_crtZfast_crt_finemaskShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersZfast_crtZfast_crt_finemaskShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDeblurShadersDeblurLumaShaderDefs::sVertexHash, RetroArchDeblurShadersDeblurLumaShaderDefs::sVertexByteCode, sizeof(RetroArchDeblurShadersDeblurLumaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDeblurShadersDeblurLumaShaderDefs::sFragmentHash, RetroArchDeblurShadersDeblurLumaShaderDefs::sFragmentByteCode, sizeof(RetroArchDeblurShadersDeblurLumaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDeblurShadersDeblurShaderDefs::sVertexHash, RetroArchDeblurShadersDeblurShaderDefs::sVertexByteCode, sizeof(RetroArchDeblurShadersDeblurShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDeblurShadersDeblurShaderDefs::sFragmentHash, RetroArchDeblurShadersDeblurShaderDefs::sFragmentByteCode, sizeof(RetroArchDeblurShadersDeblurShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDenoisersShadersBilateralHorizontalShaderDefs::sVertexHash, RetroArchDenoisersShadersBilateralHorizontalShaderDefs::sVertexByteCode, sizeof(RetroArchDenoisersShadersBilateralHorizontalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDenoisersShadersBilateralHorizontalShaderDefs::sFragmentHash, RetroArchDenoisersShadersBilateralHorizontalShaderDefs::sFragmentByteCode, sizeof(RetroArchDenoisersShadersBilateralHorizontalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDenoisersShadersBilateralVerticalShaderDefs::sVertexHash, RetroArchDenoisersShadersBilateralVerticalShaderDefs::sVertexByteCode, sizeof(RetroArchDenoisersShadersBilateralVerticalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDenoisersShadersBilateralVerticalShaderDefs::sFragmentHash, RetroArchDenoisersShadersBilateralVerticalShaderDefs::sFragmentByteCode, sizeof(RetroArchDenoisersShadersBilateralVerticalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDenoisersShadersBilateralShaderDefs::sVertexHash, RetroArchDenoisersShadersBilateralShaderDefs::sVertexByteCode, sizeof(RetroArchDenoisersShadersBilateralShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDenoisersShadersBilateralShaderDefs::sFragmentHash, RetroArchDenoisersShadersBilateralShaderDefs::sFragmentByteCode, sizeof(RetroArchDenoisersShadersBilateralShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDenoisersShadersFastBilateralShaderDefs::sVertexHash, RetroArchDenoisersShadersFastBilateralShaderDefs::sVertexByteCode, sizeof(RetroArchDenoisersShadersFastBilateralShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDenoisersShadersFastBilateralShaderDefs::sFragmentHash, RetroArchDenoisersShadersFastBilateralShaderDefs::sFragmentByteCode, sizeof(RetroArchDenoisersShadersFastBilateralShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass2ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass2ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllianPass0ShaderDefs::sVertexHash, RetroArchCrtShadersHyllianCrtHyllianPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllianPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersHyllianCrtHyllianPass0ShaderDefs::sFragmentHash, RetroArchCrtShadersHyllianCrtHyllianPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersHyllianCrtHyllianPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDenoisersShadersMedian_3x3ShaderDefs::sVertexHash, RetroArchDenoisersShadersMedian_3x3ShaderDefs::sVertexByteCode, sizeof(RetroArchDenoisersShadersMedian_3x3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDenoisersShadersMedian_3x3ShaderDefs::sFragmentHash, RetroArchDenoisersShadersMedian_3x3ShaderDefs::sFragmentByteCode, sizeof(RetroArchDenoisersShadersMedian_3x3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDenoisersShadersMedian_5x5ShaderDefs::sVertexHash, RetroArchDenoisersShadersMedian_5x5ShaderDefs::sVertexByteCode, sizeof(RetroArchDenoisersShadersMedian_5x5ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDenoisersShadersMedian_5x5ShaderDefs::sFragmentHash, RetroArchDenoisersShadersMedian_5x5ShaderDefs::sFragmentByteCode, sizeof(RetroArchDenoisersShadersMedian_5x5ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDenoisersShadersSlowBilateralShaderDefs::sVertexHash, RetroArchDenoisersShadersSlowBilateralShaderDefs::sVertexByteCode, sizeof(RetroArchDenoisersShadersSlowBilateralShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDenoisersShadersSlowBilateralShaderDefs::sFragmentHash, RetroArchDenoisersShadersSlowBilateralShaderDefs::sFragmentByteCode, sizeof(RetroArchDenoisersShadersSlowBilateralShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersBayerMatrixDitheringShaderDefs::sVertexHash, RetroArchDitheringShadersBayerMatrixDitheringShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersBayerMatrixDitheringShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersBayerMatrixDitheringShaderDefs::sFragmentHash, RetroArchDitheringShadersBayerMatrixDitheringShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersBayerMatrixDitheringShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersBayer_4x4ShaderDefs::sVertexHash, RetroArchDitheringShadersBayer_4x4ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersBayer_4x4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersBayer_4x4ShaderDefs::sFragmentHash, RetroArchDitheringShadersBayer_4x4ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersBayer_4x4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersBlue_noiseShaderDefs::sVertexHash, RetroArchDitheringShadersBlue_noiseShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersBlue_noiseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersBlue_noiseShaderDefs::sFragmentHash, RetroArchDitheringShadersBlue_noiseShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersBlue_noiseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersBlue_noise_dynamicShaderDefs::sVertexHash, RetroArchDitheringShadersBlue_noise_dynamicShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersBlue_noise_dynamicShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersBlue_noise_dynamicShaderDefs::sFragmentHash, RetroArchDitheringShadersBlue_noise_dynamicShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersBlue_noise_dynamicShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersCbodV1CbodV1Pass1ShaderDefs::sVertexHash, RetroArchDitheringShadersCbodV1CbodV1Pass1ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersCbodV1CbodV1Pass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersCbodV1CbodV1Pass1ShaderDefs::sFragmentHash, RetroArchDitheringShadersCbodV1CbodV1Pass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersCbodV1CbodV1Pass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersCbodV1CbodV1Pass2ShaderDefs::sVertexHash, RetroArchDitheringShadersCbodV1CbodV1Pass2ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersCbodV1CbodV1Pass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersCbodV1CbodV1Pass2ShaderDefs::sFragmentHash, RetroArchDitheringShadersCbodV1CbodV1Pass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersCbodV1CbodV1Pass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersCheckerboardDeditherLinearizeShaderDefs::sVertexHash, RetroArchDitheringShadersCheckerboardDeditherLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersCheckerboardDeditherLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersCheckerboardDeditherLinearizeShaderDefs::sFragmentHash, RetroArchDitheringShadersCheckerboardDeditherLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersCheckerboardDeditherLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass1ShaderDefs::sVertexHash, RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass1ShaderDefs::sFragmentHash, RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass2ShaderDefs::sVertexHash, RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass2ShaderDefs::sFragmentHash, RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass3ShaderDefs::sVertexHash, RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass3ShaderDefs::sFragmentHash, RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersCheckerboardDeditherCheckerboardDeditherPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersGSharp_resamplerShaderDefs::sVertexHash, RetroArchDitheringShadersGSharp_resamplerShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersGSharp_resamplerShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersGSharp_resamplerShaderDefs::sFragmentHash, RetroArchDitheringShadersGSharp_resamplerShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersGSharp_resamplerShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs::sVertexHash, RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs::sFragmentHash, RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersGdaptGdaptPass1ShaderDefs::sVertexHash, RetroArchDitheringShadersGdaptGdaptPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersGdaptGdaptPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersGdaptGdaptPass1ShaderDefs::sFragmentHash, RetroArchDitheringShadersGdaptGdaptPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersGdaptGdaptPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersGenditherShaderDefs::sVertexHash, RetroArchDitheringShadersGenditherShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersGenditherShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersGenditherShaderDefs::sFragmentHash, RetroArchDitheringShadersGenditherShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersGenditherShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersJinc2DeditherShaderDefs::sVertexHash, RetroArchDitheringShadersJinc2DeditherShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersJinc2DeditherShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersJinc2DeditherShaderDefs::sFragmentHash, RetroArchDitheringShadersJinc2DeditherShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersJinc2DeditherShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersMdaptPassesMdaptPass0ShaderDefs::sVertexHash, RetroArchDitheringShadersMdaptPassesMdaptPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersMdaptPassesMdaptPass0ShaderDefs::sFragmentHash, RetroArchDitheringShadersMdaptPassesMdaptPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs::sVertexHash, RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs::sFragmentHash, RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersMdaptPassesMdaptPass2ShaderDefs::sVertexHash, RetroArchDitheringShadersMdaptPassesMdaptPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersMdaptPassesMdaptPass2ShaderDefs::sFragmentHash, RetroArchDitheringShadersMdaptPassesMdaptPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersMdaptPassesMdaptPass3ShaderDefs::sVertexHash, RetroArchDitheringShadersMdaptPassesMdaptPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersMdaptPassesMdaptPass3ShaderDefs::sFragmentHash, RetroArchDitheringShadersMdaptPassesMdaptPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersMdaptPassesMdaptPass4ShaderDefs::sVertexHash, RetroArchDitheringShadersMdaptPassesMdaptPass4ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersMdaptPassesMdaptPass4ShaderDefs::sFragmentHash, RetroArchDitheringShadersMdaptPassesMdaptPass4ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersMdaptPassesMdaptPass4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersPs1ditherPS1UnditherBoxBlurShaderDefs::sVertexHash, RetroArchDitheringShadersPs1ditherPS1UnditherBoxBlurShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersPs1ditherPS1UnditherBoxBlurShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersPs1ditherPS1UnditherBoxBlurShaderDefs::sFragmentHash, RetroArchDitheringShadersPs1ditherPS1UnditherBoxBlurShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersPs1ditherPS1UnditherBoxBlurShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersPs1ditherPS1UnditherAntiBayerShaderDefs::sVertexHash, RetroArchDitheringShadersPs1ditherPS1UnditherAntiBayerShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersPs1ditherPS1UnditherAntiBayerShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersPs1ditherPS1UnditherAntiBayerShaderDefs::sFragmentHash, RetroArchDitheringShadersPs1ditherPS1UnditherAntiBayerShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersPs1ditherPS1UnditherAntiBayerShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersPs1ditherPS1UnditherComparisonMkIIShaderDefs::sVertexHash, RetroArchDitheringShadersPs1ditherPS1UnditherComparisonMkIIShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersPs1ditherPS1UnditherComparisonMkIIShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersPs1ditherPS1UnditherComparisonMkIIShaderDefs::sFragmentHash, RetroArchDitheringShadersPs1ditherPS1UnditherComparisonMkIIShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersPs1ditherPS1UnditherComparisonMkIIShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersSgenptMixLinearizeShaderDefs::sVertexHash, RetroArchDitheringShadersSgenptMixLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersSgenptMixLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersSgenptMixLinearizeShaderDefs::sFragmentHash, RetroArchDitheringShadersSgenptMixLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersSgenptMixLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersSgenptMixSgenptMixPass1ShaderDefs::sVertexHash, RetroArchDitheringShadersSgenptMixSgenptMixPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersSgenptMixSgenptMixPass1ShaderDefs::sFragmentHash, RetroArchDitheringShadersSgenptMixSgenptMixPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersSgenptMixSgenptMixPass2ShaderDefs::sVertexHash, RetroArchDitheringShadersSgenptMixSgenptMixPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersSgenptMixSgenptMixPass2ShaderDefs::sFragmentHash, RetroArchDitheringShadersSgenptMixSgenptMixPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersSgenptMixSgenptMixPass3ShaderDefs::sVertexHash, RetroArchDitheringShadersSgenptMixSgenptMixPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersSgenptMixSgenptMixPass3ShaderDefs::sFragmentHash, RetroArchDitheringShadersSgenptMixSgenptMixPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersSgenptMixSgenptMixPass4ShaderDefs::sVertexHash, RetroArchDitheringShadersSgenptMixSgenptMixPass4ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersSgenptMixSgenptMixPass4ShaderDefs::sFragmentHash, RetroArchDitheringShadersSgenptMixSgenptMixPass4ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs::sVertexHash, RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs::sFragmentHash, RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersSgenptMixSgenptMixPass5ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDitheringShadersSgenptMixShaderDefs::sVertexHash, RetroArchDitheringShadersSgenptMixShaderDefs::sVertexByteCode, sizeof(RetroArchDitheringShadersSgenptMixShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDitheringShadersSgenptMixShaderDefs::sFragmentHash, RetroArchDitheringShadersSgenptMixShaderDefs::sFragmentByteCode, sizeof(RetroArchDitheringShadersSgenptMixShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingCleanEdgeShadersCleanEdgeScaleShaderDefs::sVertexHash, RetroArchEdgeSmoothingCleanEdgeShadersCleanEdgeScaleShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingCleanEdgeShadersCleanEdgeScaleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingCleanEdgeShadersCleanEdgeScaleShaderDefs::sFragmentHash, RetroArchEdgeSmoothingCleanEdgeShadersCleanEdgeScaleShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingCleanEdgeShadersCleanEdgeScaleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingDdtShaders3PointShaderDefs::sVertexHash, RetroArchEdgeSmoothingDdtShaders3PointShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingDdtShaders3PointShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingDdtShaders3PointShaderDefs::sFragmentHash, RetroArchEdgeSmoothingDdtShaders3PointShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingDdtShaders3PointShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingDdtShadersCutShaderDefs::sVertexHash, RetroArchEdgeSmoothingDdtShadersCutShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingDdtShadersCutShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingDdtShadersCutShaderDefs::sFragmentHash, RetroArchEdgeSmoothingDdtShadersCutShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingDdtShadersCutShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingDdtShadersDdtExtendedShaderDefs::sVertexHash, RetroArchEdgeSmoothingDdtShadersDdtExtendedShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingDdtShadersDdtExtendedShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingDdtShadersDdtExtendedShaderDefs::sFragmentHash, RetroArchEdgeSmoothingDdtShadersDdtExtendedShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingDdtShadersDdtExtendedShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSupportLinearizeShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSupportLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSupportLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSupportLinearizeShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSupportLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSupportLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingDdtShadersDdtJincShaderDefs::sVertexHash, RetroArchEdgeSmoothingDdtShadersDdtJincShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingDdtShadersDdtJincShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingDdtShadersDdtJincShaderDefs::sFragmentHash, RetroArchEdgeSmoothingDdtShadersDdtJincShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingDdtShadersDdtJincShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSupportDelinearizeShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSupportDelinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSupportDelinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSupportDelinearizeShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSupportDelinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSupportDelinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingDdtShadersDdtXbrLv1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingDdtShadersDdtXbrLv1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingDdtShadersDdtXbrLv1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingDdtShadersDdtXbrLv1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingDdtShadersDdtXbrLv1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingDdtShadersDdtXbrLv1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingDdtShadersDdtShaderDefs::sVertexHash, RetroArchEdgeSmoothingDdtShadersDdtShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingDdtShadersDdtShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingDdtShadersDdtShaderDefs::sFragmentHash, RetroArchEdgeSmoothingDdtShadersDdtShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingDdtShadersDdtShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingEagleShaders2xsaiShaderDefs::sVertexHash, RetroArchEdgeSmoothingEagleShaders2xsaiShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingEagleShaders2xsaiShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingEagleShaders2xsaiShaderDefs::sFragmentHash, RetroArchEdgeSmoothingEagleShaders2xsaiShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingEagleShaders2xsaiShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftRgbShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftRgbShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftRgbShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftRgbShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftRgbShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftRgbShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingEagleShadersSuper2xsaiShaderDefs::sVertexHash, RetroArchEdgeSmoothingEagleShadersSuper2xsaiShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingEagleShadersSuper2xsaiShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingEagleShadersSuper2xsaiShaderDefs::sFragmentHash, RetroArchEdgeSmoothingEagleShadersSuper2xsaiShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingEagleShadersSuper2xsaiShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingEagleShadersSupereagleShaderDefs::sVertexHash, RetroArchEdgeSmoothingEagleShadersSupereagleShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingEagleShadersSupereagleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingEagleShadersSupereagleShaderDefs::sFragmentHash, RetroArchEdgeSmoothingEagleShadersSupereagleShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingEagleShadersSupereagleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingFsrShadersFsrPass0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingFsrShadersFsrPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingFsrShadersFsrPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingFsrShadersFsrPass0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingFsrShadersFsrPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingFsrShadersFsrPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingFsrShadersFsrPass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingFsrShadersFsrPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingFsrShadersFsrPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingFsrShadersFsrPass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingFsrShadersFsrPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingFsrShadersFsrPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingHqxShadersHq2xHalphonShaderDefs::sVertexHash, RetroArchEdgeSmoothingHqxShadersHq2xHalphonShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingHqxShadersHq2xHalphonShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingHqxShadersHq2xHalphonShaderDefs::sFragmentHash, RetroArchEdgeSmoothingHqxShadersHq2xHalphonShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingHqxShadersHq2xHalphonShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingHqxShadersPass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingHqxShadersPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingHqxShadersPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingHqxShadersPass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingHqxShadersPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingHqxShadersPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingHqxShadersHq2xShaderDefs::sVertexHash, RetroArchEdgeSmoothingHqxShadersHq2xShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingHqxShadersHq2xShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingHqxShadersHq2xShaderDefs::sFragmentHash, RetroArchEdgeSmoothingHqxShadersHq2xShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingHqxShadersHq2xShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingHqxShadersHq3xShaderDefs::sVertexHash, RetroArchEdgeSmoothingHqxShadersHq3xShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingHqxShadersHq3xShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingHqxShadersHq3xShaderDefs::sFragmentHash, RetroArchEdgeSmoothingHqxShadersHq3xShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingHqxShadersHq3xShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersBSplineXShaderDefs::sVertexHash, RetroArchInterpolationShadersBSplineXShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersBSplineXShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersBSplineXShaderDefs::sFragmentHash, RetroArchInterpolationShadersBSplineXShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersBSplineXShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersBSplineYShaderDefs::sVertexHash, RetroArchInterpolationShadersBSplineYShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersBSplineYShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersBSplineYShaderDefs::sFragmentHash, RetroArchInterpolationShadersBSplineYShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersBSplineYShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingHqxShadersHq4xShaderDefs::sVertexHash, RetroArchEdgeSmoothingHqxShadersHq4xShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingHqxShadersHq4xShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingHqxShadersHq4xShaderDefs::sFragmentHash, RetroArchEdgeSmoothingHqxShadersHq4xShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingHqxShadersHq4xShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediPass0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingNediShadersNediPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediPass0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNediShadersNediPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediPass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingNediShadersNediPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediPass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNediShadersNediPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediPass2ShaderDefs::sVertexHash, RetroArchEdgeSmoothingNediShadersNediPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediPass2ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNediShadersNediPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediJincShaderDefs::sVertexHash, RetroArchEdgeSmoothingNediShadersNediJincShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediJincShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediJincShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNediShadersNediJincShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediJincShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersCheapSharpenShaderDefs::sVertexHash, RetroArchSharpenShadersCheapSharpenShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersCheapSharpenShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersCheapSharpenShaderDefs::sFragmentHash, RetroArchSharpenShadersCheapSharpenShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersCheapSharpenShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediHybridPass0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingNediShadersNediHybridPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediHybridPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediHybridPass0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNediShadersNediHybridPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediHybridPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediHybridPass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingNediShadersNediHybridPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediHybridPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediHybridPass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNediShadersNediHybridPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediHybridPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediHybridPass2ShaderDefs::sVertexHash, RetroArchEdgeSmoothingNediShadersNediHybridPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediHybridPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNediShadersNediHybridPass2ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNediShadersNediHybridPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNediShadersNediHybridPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVhsShaderDefs::sVertexHash, RetroArchVhsShadersVhsShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVhsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVhsShaderDefs::sFragmentHash, RetroArchVhsShadersVhsShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVhsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersNaturalVisionShaderDefs::sVertexHash, RetroArchMiscShadersNaturalVisionShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersNaturalVisionShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersNaturalVisionShaderDefs::sFragmentHash, RetroArchMiscShadersNaturalVisionShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersNaturalVisionShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersVibrancePassSh1nra358ShaderDefs::sVertexHash, RetroArchReshadeShadersVibrancePassSh1nra358ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersVibrancePassSh1nra358ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersVibrancePassSh1nra358ShaderDefs::sFragmentHash, RetroArchReshadeShadersVibrancePassSh1nra358ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersVibrancePassSh1nra358ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersRgbToYuvShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersRgbToYuvShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersRgbToYuvShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersRgbToYuvShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersRgbToYuvShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersRgbToYuvShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1LumaShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1LumaShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1LumaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1LumaShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1LumaShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1LumaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2LumaShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2LumaShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2LumaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2LumaShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2LumaShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2LumaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftLumaShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftLumaShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftLumaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftLumaShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftLumaShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersJinc2CshiftLumaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb2xShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb2xShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb2xShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb2xShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb2xShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb2xShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1RgbShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1RgbShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1RgbShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1RgbShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1RgbShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass1RgbShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2RgbShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2RgbShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2RgbShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2RgbShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2RgbShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns16Win8x4Pass2RgbShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb4xShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb4xShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb4xShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb4xShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb4xShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersYuvToRgb4xShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1RgbShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1RgbShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1RgbShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1RgbShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1RgbShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1RgbShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2RgbShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2RgbShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2RgbShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2RgbShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2RgbShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2RgbShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1LumaShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1LumaShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1LumaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1LumaShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1LumaShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass1LumaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2LumaShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2LumaShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2LumaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2LumaShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2LumaShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns32Win8x4Pass2LumaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput3ShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput3ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput3ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput3ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersJinc2OnPassoutput3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass1RgbShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass1RgbShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass1RgbShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass1RgbShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass1RgbShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass1RgbShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass2RgbShaderDefs::sVertexHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass2RgbShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass2RgbShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass2RgbShaderDefs::sFragmentHash, RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass2RgbShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingNnedi3ShadersNnedi3Nns64Win8x4Pass2RgbShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingOmniscaleShadersOmniscaleLegacyShaderDefs::sVertexHash, RetroArchEdgeSmoothingOmniscaleShadersOmniscaleLegacyShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingOmniscaleShadersOmniscaleLegacyShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingOmniscaleShadersOmniscaleLegacyShaderDefs::sFragmentHash, RetroArchEdgeSmoothingOmniscaleShadersOmniscaleLegacyShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingOmniscaleShadersOmniscaleLegacyShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingOmniscaleShadersOmniscaleShaderDefs::sVertexHash, RetroArchEdgeSmoothingOmniscaleShadersOmniscaleShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingOmniscaleShadersOmniscaleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingOmniscaleShadersOmniscaleShaderDefs::sFragmentHash, RetroArchEdgeSmoothingOmniscaleShadersOmniscaleShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingOmniscaleShadersOmniscaleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingSabrShadersSabrHybridDeposterizeShaderDefs::sVertexHash, RetroArchEdgeSmoothingSabrShadersSabrHybridDeposterizeShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingSabrShadersSabrHybridDeposterizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingSabrShadersSabrHybridDeposterizeShaderDefs::sFragmentHash, RetroArchEdgeSmoothingSabrShadersSabrHybridDeposterizeShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingSabrShadersSabrHybridDeposterizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingSabrShadersSabrV30ShaderDefs::sVertexHash, RetroArchEdgeSmoothingSabrShadersSabrV30ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingSabrShadersSabrV30ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingSabrShadersSabrV30ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingSabrShadersSabrV30ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingSabrShadersSabrV30ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass2ShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass2ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass3ShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass3ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass4ShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass4ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass4ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass4ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass0ShaderDefs::sVertexHash, RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass0ShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass1ShaderDefs::sVertexHash, RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass1ShaderDefs::sFragmentHash, RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchAntiAliasingShadersReverseAaPost3xReverseAaPost3xPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersOldScalefxPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersOldScalefxPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersOldScalefxPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersOldScalefxPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass2ShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersOldScalefxPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass2ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersOldScalefxPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass3ShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersOldScalefxPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass3ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersOldScalefxPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass7ShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersOldScalefxPass7ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass7ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass7ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersOldScalefxPass7ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersOldScalefxPass7ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass4HybridShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass4HybridShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass4HybridShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalefxShadersScalefxPass4HybridShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalefxShadersScalefxPass4HybridShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalefxShadersScalefxPass4HybridShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalehqShaders2xScaleHQShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalehqShaders2xScaleHQShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalehqShaders2xScaleHQShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalehqShaders2xScaleHQShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalehqShaders2xScaleHQShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalehqShaders2xScaleHQShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalehqShaders4xScaleHQShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalehqShaders4xScaleHQShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalehqShaders4xScaleHQShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalehqShaders4xScaleHQShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalehqShaders4xScaleHQShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalehqShaders4xScaleHQShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersEpxShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalenxShadersEpxShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersEpxShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersEpxShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalenxShadersEpxShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersEpxShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersMmpxShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalenxShadersMmpxShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersMmpxShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersMmpxShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalenxShadersMmpxShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersMmpxShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersScale2xShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalenxShadersScale2xShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersScale2xShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersScale2xShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalenxShadersScale2xShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersScale2xShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersScale2xplusShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalenxShadersScale2xplusShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersScale2xplusShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersScale2xplusShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalenxShadersScale2xplusShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersScale2xplusShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersScale2xSFXShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalenxShadersScale2xSFXShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersScale2xSFXShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersScale2xSFXShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalenxShadersScale2xSFXShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersScale2xSFXShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersScale3xShaderDefs::sVertexHash, RetroArchEdgeSmoothingScalenxShadersScale3xShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersScale3xShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingScalenxShadersScale3xShaderDefs::sFragmentHash, RetroArchEdgeSmoothingScalenxShadersScale3xShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingScalenxShadersScale3xShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass2ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass2ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrFastPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrCustomJinc2SharperShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSuperXbrCustomJinc2SharperShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrCustomJinc2SharperShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrCustomJinc2SharperShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSuperXbrCustomJinc2SharperShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrCustomJinc2SharperShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersXbrLv2MultipassXbrLv2Pass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSupportBSplineXShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSupportBSplineXShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSupportBSplineXShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSupportBSplineXShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSupportBSplineXShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSupportBSplineXShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSupportBSplineYShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSupportBSplineYShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSupportBSplineYShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSupportBSplineYShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSupportBSplineYShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSupportBSplineYShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrzShaders2xbrzShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrzShaders2xbrzShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrzShaders2xbrzShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrzShaders2xbrzShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrzShaders2xbrzShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrzShaders2xbrzShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrzShaders4xbrzShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrzShaders4xbrzShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrzShaders4xbrzShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrzShaders4xbrzShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrzShaders4xbrzShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrzShaders4xbrzShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrzShaders5xbrzShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrzShaders5xbrzShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrzShaders5xbrzShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrzShaders5xbrzShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrzShaders5xbrzShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrzShaders5xbrzShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrzShaders6xbrzShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrzShaders6xbrzShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrzShaders6xbrzShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrzShaders6xbrzShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrzShaders6xbrzShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrzShaders6xbrzShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass0ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass0ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass0ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass1ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass1ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass1ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleMultipassXbrzFreescalePass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrzShadersXbrzFreescaleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXsalShaders2xsalLevel2ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXsalShaders2xsalLevel2ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXsalShaders2xsalLevel2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXsalShaders2xsalLevel2ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXsalShaders2xsalLevel2ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXsalShaders2xsalLevel2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersDotmaskShaderDefs::sVertexHash, RetroArchCrtShadersDotmaskShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersDotmaskShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersDotmaskShaderDefs::sFragmentHash, RetroArchCrtShadersDotmaskShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersDotmaskShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXsalShaders2xsalShaderDefs::sVertexHash, RetroArchEdgeSmoothingXsalShaders2xsalShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXsalShaders2xsalShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXsalShaders2xsalShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXsalShaders2xsalShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXsalShaders2xsalShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersSpline16XShaderDefs::sVertexHash, RetroArchInterpolationShadersSpline16XShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersSpline16XShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersSpline16XShaderDefs::sFragmentHash, RetroArchInterpolationShadersSpline16XShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersSpline16XShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersSpline16YShaderDefs::sVertexHash, RetroArchInterpolationShadersSpline16YShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersSpline16YShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersSpline16YShaderDefs::sFragmentHash, RetroArchInterpolationShadersSpline16YShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersSpline16YShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXsalShaders2xsalLevel2Pass2ShaderDefs::sVertexHash, RetroArchEdgeSmoothingXsalShaders2xsalLevel2Pass2ShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXsalShaders2xsalLevel2Pass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXsalShaders2xsalLevel2Pass2ShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXsalShaders2xsalLevel2Pass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXsalShaders2xsalLevel2Pass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXsalShaders2xsalLevel2HqShaderDefs::sVertexHash, RetroArchEdgeSmoothingXsalShaders2xsalLevel2HqShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXsalShaders2xsalLevel2HqShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXsalShaders2xsalLevel2HqShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXsalShaders2xsalLevel2HqShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXsalShaders2xsalLevel2HqShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXsoftShaders4xsoftShaderDefs::sVertexHash, RetroArchEdgeSmoothingXsoftShaders4xsoftShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXsoftShaders4xsoftShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXsoftShaders4xsoftShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXsoftShaders4xsoftShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXsoftShaders4xsoftShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXsoftShaders4xsoftSdBShaderDefs::sVertexHash, RetroArchEdgeSmoothingXsoftShaders4xsoftSdBShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXsoftShaders4xsoftSdBShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXsoftShaders4xsoftSdBShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXsoftShaders4xsoftSdBShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXsoftShaders4xsoftSdBShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchFilmShadersFilmGrainShaderDefs::sVertexHash, RetroArchFilmShadersFilmGrainShaderDefs::sVertexByteCode, sizeof(RetroArchFilmShadersFilmGrainShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchFilmShadersFilmGrainShaderDefs::sFragmentHash, RetroArchFilmShadersFilmGrainShaderDefs::sFragmentByteCode, sizeof(RetroArchFilmShadersFilmGrainShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersLUTLUTShaderDefs::sVertexHash, RetroArchReshadeShadersLUTLUTShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersLUTLUTShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersLUTLUTShaderDefs::sFragmentHash, RetroArchReshadeShadersLUTLUTShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersLUTLUTShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchFilmShadersFilm_noiseShaderDefs::sVertexHash, RetroArchFilmShadersFilm_noiseShaderDefs::sVertexByteCode, sizeof(RetroArchFilmShadersFilm_noiseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchFilmShadersFilm_noiseShaderDefs::sFragmentHash, RetroArchFilmShadersFilm_noiseShaderDefs::sFragmentByteCode, sizeof(RetroArchFilmShadersFilm_noiseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchGpuShaders3dfx3dfx_pass_0ShaderDefs::sVertexHash, RetroArchGpuShaders3dfx3dfx_pass_0ShaderDefs::sVertexByteCode, sizeof(RetroArchGpuShaders3dfx3dfx_pass_0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchGpuShaders3dfx3dfx_pass_0ShaderDefs::sFragmentHash, RetroArchGpuShaders3dfx3dfx_pass_0ShaderDefs::sFragmentByteCode, sizeof(RetroArchGpuShaders3dfx3dfx_pass_0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchGpuShaders3dfx3dfx_pass_1ShaderDefs::sVertexHash, RetroArchGpuShaders3dfx3dfx_pass_1ShaderDefs::sVertexByteCode, sizeof(RetroArchGpuShaders3dfx3dfx_pass_1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchGpuShaders3dfx3dfx_pass_1ShaderDefs::sFragmentHash, RetroArchGpuShaders3dfx3dfx_pass_1ShaderDefs::sFragmentByteCode, sizeof(RetroArchGpuShaders3dfx3dfx_pass_1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchGpuShaders3dfx3dfx_pass_2ShaderDefs::sVertexHash, RetroArchGpuShaders3dfx3dfx_pass_2ShaderDefs::sVertexByteCode, sizeof(RetroArchGpuShaders3dfx3dfx_pass_2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchGpuShaders3dfx3dfx_pass_2ShaderDefs::sFragmentHash, RetroArchGpuShaders3dfx3dfx_pass_2ShaderDefs::sFragmentByteCode, sizeof(RetroArchGpuShaders3dfx3dfx_pass_2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchGpuShadersPowervr2ShaderDefs::sVertexHash, RetroArchGpuShadersPowervr2ShaderDefs::sVertexByteCode, sizeof(RetroArchGpuShadersPowervr2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchGpuShadersPowervr2ShaderDefs::sFragmentHash, RetroArchGpuShadersPowervr2ShaderDefs::sFragmentByteCode, sizeof(RetroArchGpuShadersPowervr2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersMgbaAgb001ShaderDefs::sVertexHash, RetroArchHandheldShadersMgbaAgb001ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersMgbaAgb001ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersMgbaAgb001ShaderDefs::sFragmentHash, RetroArchHandheldShadersMgbaAgb001ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersMgbaAgb001ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersMgbaAgs001ShaderDefs::sVertexHash, RetroArchHandheldShadersMgbaAgs001ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersMgbaAgs001ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersMgbaAgs001ShaderDefs::sFragmentHash, RetroArchHandheldShadersMgbaAgs001ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersMgbaAgs001ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersMgbaAgs001LightShaderDefs::sVertexHash, RetroArchHandheldShadersMgbaAgs001LightShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersMgbaAgs001LightShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersMgbaAgs001LightShaderDefs::sFragmentHash, RetroArchHandheldShadersMgbaAgs001LightShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersMgbaAgs001LightShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersAuthentic_gbcTo_linShaderDefs::sVertexHash, RetroArchHandheldShadersAuthentic_gbcTo_linShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersAuthentic_gbcTo_linShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersAuthentic_gbcTo_linShaderDefs::sFragmentHash, RetroArchHandheldShadersAuthentic_gbcTo_linShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersAuthentic_gbcTo_linShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbcShaderDefs::sVertexHash, RetroArchHandheldShadersAuthentic_gbcAuthentic_gbcShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbcShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbcShaderDefs::sFragmentHash, RetroArchHandheldShadersAuthentic_gbcAuthentic_gbcShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbcShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersAuthentic_gbcTo_lin_fastShaderDefs::sVertexHash, RetroArchHandheldShadersAuthentic_gbcTo_lin_fastShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersAuthentic_gbcTo_lin_fastShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersAuthentic_gbcTo_lin_fastShaderDefs::sFragmentHash, RetroArchHandheldShadersAuthentic_gbcTo_lin_fastShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersAuthentic_gbcTo_lin_fastShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_fastShaderDefs::sVertexHash, RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_fastShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_fastShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_fastShaderDefs::sFragmentHash, RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_fastShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_fastShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_single_passShaderDefs::sVertexHash, RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_single_passShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_single_passShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_single_passShaderDefs::sFragmentHash, RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_single_passShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersAuthentic_gbcAuthentic_gbc_single_passShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersBevelShaderDefs::sVertexHash, RetroArchHandheldShadersBevelShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersBevelShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersBevelShaderDefs::sFragmentHash, RetroArchHandheldShadersBevelShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersBevelShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersLUTMultiLUTShaderDefs::sVertexHash, RetroArchReshadeShadersLUTMultiLUTShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersLUTMultiLUTShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersLUTMultiLUTShaderDefs::sFragmentHash, RetroArchReshadeShadersLUTMultiLUTShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersLUTMultiLUTShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorDsliteColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorDsliteColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorDsliteColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorDsliteColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorDsliteColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorDsliteColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorLutGBALUTShaderDefs::sVertexHash, RetroArchHandheldShadersColorLutGBALUTShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorLutGBALUTShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorLutGBALUTShaderDefs::sFragmentHash, RetroArchHandheldShadersColorLutGBALUTShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorLutGBALUTShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorLutGBCLUTShaderDefs::sVertexHash, RetroArchHandheldShadersColorLutGBCLUTShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorLutGBCLUTShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorLutGBCLUTShaderDefs::sFragmentHash, RetroArchHandheldShadersColorLutGBCLUTShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorLutGBCLUTShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorGbcGambatteColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorGbcGambatteColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorGbcGambatteColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorGbcGambatteColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorGbcGambatteColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorGbcGambatteColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorLutGBMLUTShaderDefs::sVertexHash, RetroArchHandheldShadersColorLutGBMLUTShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorLutGBMLUTShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorLutGBMLUTShaderDefs::sFragmentHash, RetroArchHandheldShadersColorLutGBMLUTShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorLutGBMLUTShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorGbMicroColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorGbMicroColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorGbMicroColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorGbMicroColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorGbMicroColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorGbMicroColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorNdsColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorNdsColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorNdsColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorNdsColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorNdsColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorNdsColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorNSOGbaColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorNSOGbaColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorNSOGbaColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorNSOGbaColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorNSOGbaColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorNSOGbaColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorNSOGbcColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorNSOGbcColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorNSOGbcColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorNSOGbcColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorNSOGbcColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorNSOGbcColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorPalmColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorPalmColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorPalmColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorPalmColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorPalmColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorPalmColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorPspColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorPspColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorPspColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorPspColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorPspColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorPspColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorSp101ColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorSp101ColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorSp101ColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorSp101ColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorSp101ColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorSp101ColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorSwitchOLEDColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorSwitchOLEDColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorSwitchOLEDColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorSwitchOLEDColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorSwitchOLEDColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorSwitchOLEDColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorVbaColorShaderDefs::sVertexHash, RetroArchHandheldShadersColorVbaColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorVbaColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorVbaColorShaderDefs::sFragmentHash, RetroArchHandheldShadersColorVbaColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorVbaColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass0ShaderDefs::sVertexHash, RetroArchHandheldConsoleBorderShaderFilesGbPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass0ShaderDefs::sFragmentHash, RetroArchHandheldConsoleBorderShaderFilesGbPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass1ShaderDefs::sVertexHash, RetroArchHandheldConsoleBorderShaderFilesGbPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass1ShaderDefs::sFragmentHash, RetroArchHandheldConsoleBorderShaderFilesGbPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass2ShaderDefs::sVertexHash, RetroArchHandheldConsoleBorderShaderFilesGbPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass2ShaderDefs::sFragmentHash, RetroArchHandheldConsoleBorderShaderFilesGbPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass3ShaderDefs::sVertexHash, RetroArchHandheldConsoleBorderShaderFilesGbPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass3ShaderDefs::sFragmentHash, RetroArchHandheldConsoleBorderShaderFilesGbPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass4ShaderDefs::sVertexHash, RetroArchHandheldConsoleBorderShaderFilesGbPass4ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass4ShaderDefs::sFragmentHash, RetroArchHandheldConsoleBorderShaderFilesGbPass4ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass5ShaderDefs::sVertexHash, RetroArchHandheldConsoleBorderShaderFilesGbPass5ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass5ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesGbPass5ShaderDefs::sFragmentHash, RetroArchHandheldConsoleBorderShaderFilesGbPass5ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesGbPass5ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersGameboyShaderFilesGbPass1ShaderDefs::sVertexHash, RetroArchHandheldShadersGameboyShaderFilesGbPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersGameboyShaderFilesGbPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersGameboyShaderFilesGbPass1ShaderDefs::sFragmentHash, RetroArchHandheldShadersGameboyShaderFilesGbPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersGameboyShaderFilesGbPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersGameboyShaderFilesGbPass2ShaderDefs::sVertexHash, RetroArchHandheldShadersGameboyShaderFilesGbPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersGameboyShaderFilesGbPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersGameboyShaderFilesGbPass2ShaderDefs::sFragmentHash, RetroArchHandheldShadersGameboyShaderFilesGbPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersGameboyShaderFilesGbPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersGameboyShaderFilesGbPass3ShaderDefs::sVertexHash, RetroArchHandheldShadersGameboyShaderFilesGbPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersGameboyShaderFilesGbPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersGameboyShaderFilesGbPass3ShaderDefs::sFragmentHash, RetroArchHandheldShadersGameboyShaderFilesGbPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersGameboyShaderFilesGbPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersGameboyShaderFilesGbPass4ShaderDefs::sVertexHash, RetroArchHandheldShadersGameboyShaderFilesGbPass4ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersGameboyShaderFilesGbPass4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersGameboyShaderFilesGbPass4ShaderDefs::sFragmentHash, RetroArchHandheldShadersGameboyShaderFilesGbPass4ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersGameboyShaderFilesGbPass4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMotionblurShadersResponseTimeShaderDefs::sVertexHash, RetroArchMotionblurShadersResponseTimeShaderDefs::sVertexByteCode, sizeof(RetroArchMotionblurShadersResponseTimeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMotionblurShadersResponseTimeShaderDefs::sFragmentHash, RetroArchMotionblurShadersResponseTimeShaderDefs::sFragmentByteCode, sizeof(RetroArchMotionblurShadersResponseTimeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesBorderAutoScaleShaderDefs::sVertexHash, RetroArchHandheldConsoleBorderShaderFilesBorderAutoScaleShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesBorderAutoScaleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesBorderAutoScaleShaderDefs::sFragmentHash, RetroArchHandheldConsoleBorderShaderFilesBorderAutoScaleShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesBorderAutoScaleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridV2ShaderDefs::sVertexHash, RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridV2ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridV2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridV2ShaderDefs::sFragmentHash, RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridV2ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridV2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridShaderDefs::sVertexHash, RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridShaderDefs::sFragmentHash, RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldConsoleBorderShaderFilesLcdCgwgLcdGridShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersDsHybridViewShaderDefs::sVertexHash, RetroArchHandheldShadersDsHybridViewShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersDsHybridViewShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersDsHybridViewShaderDefs::sFragmentHash, RetroArchHandheldShadersDsHybridViewShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersDsHybridViewShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersGameboyShaderFilesGbPass0ShaderDefs::sVertexHash, RetroArchHandheldShadersGameboyShaderFilesGbPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersGameboyShaderFilesGbPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersGameboyShaderFilesGbPass0ShaderDefs::sFragmentHash, RetroArchHandheldShadersGameboyShaderFilesGbPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersGameboyShaderFilesGbPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersGbPaletteGbPaletteShaderDefs::sVertexHash, RetroArchHandheldShadersGbPaletteGbPaletteShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersGbPaletteGbPaletteShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersGbPaletteGbPaletteShaderDefs::sFragmentHash, RetroArchHandheldShadersGbPaletteGbPaletteShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersGbPaletteGbPaletteShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersColorGbcDevShaderDefs::sVertexHash, RetroArchHandheldShadersColorGbcDevShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersColorGbcDevShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersColorGbcDevShaderDefs::sFragmentHash, RetroArchHandheldShadersColorGbcDevShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersColorGbcDevShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersLcdCgwgLcdGridShaderDefs::sVertexHash, RetroArchHandheldShadersLcdCgwgLcdGridShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersLcdCgwgLcdGridShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersLcdCgwgLcdGridShaderDefs::sFragmentHash, RetroArchHandheldShadersLcdCgwgLcdGridShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersLcdCgwgLcdGridShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersLcdShaderLcdPass0ShaderDefs::sVertexHash, RetroArchHandheldShadersLcdShaderLcdPass0ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersLcdShaderLcdPass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersLcdShaderLcdPass0ShaderDefs::sFragmentHash, RetroArchHandheldShadersLcdShaderLcdPass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersLcdShaderLcdPass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs::sVertexHash, RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs::sFragmentHash, RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersLcdShaderLcdPass2ShaderDefs::sVertexHash, RetroArchHandheldShadersLcdShaderLcdPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersLcdShaderLcdPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersLcdShaderLcdPass2ShaderDefs::sFragmentHash, RetroArchHandheldShadersLcdShaderLcdPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersLcdShaderLcdPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs::sVertexHash, RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs::sFragmentHash, RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersLcd1xShaderDefs::sVertexHash, RetroArchHandheldShadersLcd1xShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersLcd1xShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersLcd1xShaderDefs::sFragmentHash, RetroArchHandheldShadersLcd1xShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersLcd1xShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersLcd1x_ndsShaderDefs::sVertexHash, RetroArchHandheldShadersLcd1x_ndsShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersLcd1x_ndsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersLcd1x_ndsShaderDefs::sFragmentHash, RetroArchHandheldShadersLcd1x_ndsShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersLcd1x_ndsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersLcd1x_pspShaderDefs::sVertexHash, RetroArchHandheldShadersLcd1x_pspShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersLcd1x_pspShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersLcd1x_pspShaderDefs::sFragmentHash, RetroArchHandheldShadersLcd1x_pspShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersLcd1x_pspShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersLcd3xShaderDefs::sVertexHash, RetroArchHandheldShadersLcd3xShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersLcd3xShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersLcd3xShaderDefs::sFragmentHash, RetroArchHandheldShadersLcd3xShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersLcd3xShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersRetroTilesShaderDefs::sVertexHash, RetroArchHandheldShadersRetroTilesShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersRetroTilesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersRetroTilesShaderDefs::sFragmentHash, RetroArchHandheldShadersRetroTilesShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersRetroTilesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersRetroV2ShaderDefs::sVertexHash, RetroArchHandheldShadersRetroV2ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersRetroV2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersRetroV2ShaderDefs::sFragmentHash, RetroArchHandheldShadersRetroV2ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersRetroV2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersRetroV3ShaderDefs::sVertexHash, RetroArchHandheldShadersRetroV3ShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersRetroV3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersRetroV3ShaderDefs::sFragmentHash, RetroArchHandheldShadersRetroV3ShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersRetroV3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersSameboyLcdShaderDefs::sVertexHash, RetroArchHandheldShadersSameboyLcdShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersSameboyLcdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersSameboyLcdShaderDefs::sFragmentHash, RetroArchHandheldShadersSameboyLcdShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersSameboyLcdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd4kShaderDefs::sVertexHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd4kShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd4kShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd4kShaderDefs::sFragmentHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd4kShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd4kShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdShaderDefs::sVertexHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdShaderDefs::sFragmentHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pShaderDefs::sVertexHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pShaderDefs::sFragmentHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersZfast_lcdShaderDefs::sVertexHash, RetroArchHandheldShadersZfast_lcdShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersZfast_lcdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersZfast_lcdShaderDefs::sFragmentHash, RetroArchHandheldShadersZfast_lcdShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersZfast_lcdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersBSpline4TapsShaderDefs::sVertexHash, RetroArchInterpolationShadersBSpline4TapsShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersBSpline4TapsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersBSpline4TapsShaderDefs::sFragmentHash, RetroArchInterpolationShadersBSpline4TapsShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersBSpline4TapsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersBicubic5TapsShaderDefs::sVertexHash, RetroArchInterpolationShadersBicubic5TapsShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersBicubic5TapsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersBicubic5TapsShaderDefs::sFragmentHash, RetroArchInterpolationShadersBicubic5TapsShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersBicubic5TapsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersCatmullRom5TapsShaderDefs::sVertexHash, RetroArchInterpolationShadersCatmullRom5TapsShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersCatmullRom5TapsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersCatmullRom5TapsShaderDefs::sFragmentHash, RetroArchInterpolationShadersCatmullRom5TapsShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersCatmullRom5TapsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersCatmullRomXShaderDefs::sVertexHash, RetroArchInterpolationShadersCatmullRomXShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersCatmullRomXShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersCatmullRomXShaderDefs::sFragmentHash, RetroArchInterpolationShadersCatmullRomXShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersCatmullRomXShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersCatmullRomYShaderDefs::sVertexHash, RetroArchInterpolationShadersCatmullRomYShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersCatmullRomYShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersCatmullRomYShaderDefs::sFragmentHash, RetroArchInterpolationShadersCatmullRomYShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersCatmullRomYShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersCatmullRomShaderDefs::sVertexHash, RetroArchInterpolationShadersCatmullRomShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersCatmullRomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersCatmullRomShaderDefs::sFragmentHash, RetroArchInterpolationShadersCatmullRomShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersCatmullRomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersLinearizeShaderDefs::sVertexHash, RetroArchInterpolationShadersLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersLinearizeShaderDefs::sFragmentHash, RetroArchInterpolationShadersLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersCubicGammaCorrectShaderDefs::sVertexHash, RetroArchInterpolationShadersCubicGammaCorrectShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersCubicGammaCorrectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersCubicGammaCorrectShaderDefs::sFragmentHash, RetroArchInterpolationShadersCubicGammaCorrectShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersCubicGammaCorrectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersCubicShaderDefs::sVertexHash, RetroArchInterpolationShadersCubicShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersCubicShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersCubicShaderDefs::sFragmentHash, RetroArchInterpolationShadersCubicShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersCubicShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersHermiteShaderDefs::sVertexHash, RetroArchInterpolationShadersHermiteShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersHermiteShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersHermiteShaderDefs::sFragmentHash, RetroArchInterpolationShadersHermiteShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersHermiteShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersLanczos16ShaderDefs::sVertexHash, RetroArchInterpolationShadersLanczos16ShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersLanczos16ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersLanczos16ShaderDefs::sFragmentHash, RetroArchInterpolationShadersLanczos16ShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersLanczos16ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersLanczos25TapsShaderDefs::sVertexHash, RetroArchInterpolationShadersLanczos25TapsShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersLanczos25TapsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersLanczos25TapsShaderDefs::sFragmentHash, RetroArchInterpolationShadersLanczos25TapsShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersLanczos25TapsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersLanczos3XShaderDefs::sVertexHash, RetroArchInterpolationShadersLanczos3XShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersLanczos3XShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersLanczos3XShaderDefs::sFragmentHash, RetroArchInterpolationShadersLanczos3XShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersLanczos3XShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersLanczos3YShaderDefs::sVertexHash, RetroArchInterpolationShadersLanczos3YShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersLanczos3YShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersLanczos3YShaderDefs::sFragmentHash, RetroArchInterpolationShadersLanczos3YShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersLanczos3YShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersQuilezShaderDefs::sVertexHash, RetroArchInterpolationShadersQuilezShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersQuilezShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersQuilezShaderDefs::sFragmentHash, RetroArchInterpolationShadersQuilezShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersQuilezShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersSpline36XShaderDefs::sVertexHash, RetroArchInterpolationShadersSpline36XShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersSpline36XShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersSpline36XShaderDefs::sFragmentHash, RetroArchInterpolationShadersSpline36XShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersSpline36XShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchInterpolationShadersSpline36YShaderDefs::sVertexHash, RetroArchInterpolationShadersSpline36YShaderDefs::sVertexByteCode, sizeof(RetroArchInterpolationShadersSpline36YShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchInterpolationShadersSpline36YShaderDefs::sFragmentHash, RetroArchInterpolationShadersSpline36YShaderDefs::sFragmentByteCode, sizeof(RetroArchInterpolationShadersSpline36YShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchLinearLinearizeShaderDefs::sVertexHash, RetroArchLinearLinearizeShaderDefs::sVertexByteCode, sizeof(RetroArchLinearLinearizeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchLinearLinearizeShaderDefs::sFragmentHash, RetroArchLinearLinearizeShaderDefs::sFragmentByteCode, sizeof(RetroArchLinearLinearizeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchLinearLinearGammaCorrectShaderDefs::sVertexHash, RetroArchLinearLinearGammaCorrectShaderDefs::sVertexByteCode, sizeof(RetroArchLinearLinearGammaCorrectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchLinearLinearGammaCorrectShaderDefs::sFragmentHash, RetroArchLinearLinearGammaCorrectShaderDefs::sFragmentByteCode, sizeof(RetroArchLinearLinearGammaCorrectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersAccessibility_modsShaderDefs::sVertexHash, RetroArchMiscShadersAccessibility_modsShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersAccessibility_modsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersAccessibility_modsShaderDefs::sFragmentHash, RetroArchMiscShadersAccessibility_modsShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersAccessibility_modsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersAntiFlickerShaderDefs::sVertexHash, RetroArchMiscShadersAntiFlickerShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersAntiFlickerShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersAntiFlickerShaderDefs::sFragmentHash, RetroArchMiscShadersAntiFlickerShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersAntiFlickerShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersAsciiShaderDefs::sVertexHash, RetroArchMiscShadersAsciiShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersAsciiShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersAsciiShaderDefs::sFragmentHash, RetroArchMiscShadersAsciiShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersAsciiShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersBeadShaderDefs::sVertexHash, RetroArchMiscShadersBeadShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersBeadShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersBeadShaderDefs::sFragmentHash, RetroArchMiscShadersBeadShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersBeadShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersBobDeinterlacingShaderDefs::sVertexHash, RetroArchMiscShadersBobDeinterlacingShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersBobDeinterlacingShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersBobDeinterlacingShaderDefs::sFragmentHash, RetroArchMiscShadersBobDeinterlacingShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersBobDeinterlacingShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersChromaShaderDefs::sVertexHash, RetroArchMiscShadersChromaShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersChromaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersChromaShaderDefs::sFragmentHash, RetroArchMiscShadersChromaShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersChromaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersChromaticityShaderDefs::sVertexHash, RetroArchMiscShadersChromaticityShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersChromaticityShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersChromaticityShaderDefs::sFragmentHash, RetroArchMiscShadersChromaticityShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersChromaticityShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersCmykHalftoneDotShaderDefs::sVertexHash, RetroArchMiscShadersCmykHalftoneDotShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersCmykHalftoneDotShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersCmykHalftoneDotShaderDefs::sFragmentHash, RetroArchMiscShadersCmykHalftoneDotShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersCmykHalftoneDotShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersCocktailCabinetShaderDefs::sVertexHash, RetroArchMiscShadersCocktailCabinetShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersCocktailCabinetShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersCocktailCabinetShaderDefs::sFragmentHash, RetroArchMiscShadersCocktailCabinetShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersCocktailCabinetShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersColorManglerShaderDefs::sVertexHash, RetroArchMiscShadersColorManglerShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersColorManglerShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersColorManglerShaderDefs::sFragmentHash, RetroArchMiscShadersColorManglerShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersColorManglerShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersColorimetryShaderDefs::sVertexHash, RetroArchMiscShadersColorimetryShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersColorimetryShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersColorimetryShaderDefs::sFragmentHash, RetroArchMiscShadersColorimetryShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersColorimetryShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersConvergenceShaderDefs::sVertexHash, RetroArchMiscShadersConvergenceShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersConvergenceShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersConvergenceShaderDefs::sFragmentHash, RetroArchMiscShadersConvergenceShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersConvergenceShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersDebandShaderDefs::sVertexHash, RetroArchMiscShadersDebandShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersDebandShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersDebandShaderDefs::sFragmentHash, RetroArchMiscShadersDebandShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersDebandShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersDeinterlaceShaderDefs::sVertexHash, RetroArchMiscShadersDeinterlaceShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersDeinterlaceShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersDeinterlaceShaderDefs::sFragmentHash, RetroArchMiscShadersDeinterlaceShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersDeinterlaceShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersEdgeDetectShaderDefs::sVertexHash, RetroArchMiscShadersEdgeDetectShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersEdgeDetectShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersEdgeDetectShaderDefs::sFragmentHash, RetroArchMiscShadersEdgeDetectShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersEdgeDetectShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersEgaShaderDefs::sVertexHash, RetroArchMiscShadersEgaShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersEgaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersEgaShaderDefs::sFragmentHash, RetroArchMiscShadersEgaShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersEgaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersGeomShaderDefs::sVertexHash, RetroArchMiscShadersGeomShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersGeomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersGeomShaderDefs::sFragmentHash, RetroArchMiscShadersGeomShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersGeomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersGlassShaderDefs::sVertexHash, RetroArchMiscShadersGlassShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersGlassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersGlassShaderDefs::sFragmentHash, RetroArchMiscShadersGlassShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersGlassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersGradeNoLUTShaderDefs::sVertexHash, RetroArchMiscShadersGradeNoLUTShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersGradeNoLUTShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersGradeNoLUTShaderDefs::sFragmentHash, RetroArchMiscShadersGradeNoLUTShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersGradeNoLUTShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersGradeShaderDefs::sVertexHash, RetroArchMiscShadersGradeShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersGradeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersGradeShaderDefs::sFragmentHash, RetroArchMiscShadersGradeShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersGradeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersImg_modShaderDefs::sVertexHash, RetroArchMiscShadersImg_modShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersImg_modShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersImg_modShaderDefs::sFragmentHash, RetroArchMiscShadersImg_modShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersImg_modShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersNight_modeShaderDefs::sVertexHash, RetroArchMiscShadersNight_modeShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersNight_modeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersNight_modeShaderDefs::sFragmentHash, RetroArchMiscShadersNight_modeShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersNight_modeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersNtscColorsShaderDefs::sVertexHash, RetroArchMiscShadersNtscColorsShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersNtscColorsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersNtscColorsShaderDefs::sFragmentHash, RetroArchMiscShadersNtscColorsShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersNtscColorsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyColorShaderDefs::sVertexHash, RetroArchNtscShadersPatchyNtscPatchyColorShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyColorShaderDefs::sFragmentHash, RetroArchNtscShadersPatchyNtscPatchyColorShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersPatchyNtscTrilinearLUTSwitchableShaderDefs::sVertexHash, RetroArchNtscShadersPatchyNtscTrilinearLUTSwitchableShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersPatchyNtscTrilinearLUTSwitchableShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersPatchyNtscTrilinearLUTSwitchableShaderDefs::sFragmentHash, RetroArchNtscShadersPatchyNtscTrilinearLUTSwitchableShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersPatchyNtscTrilinearLUTSwitchableShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersPatchyNtscLinearToSrgbShaderDefs::sVertexHash, RetroArchNtscShadersPatchyNtscLinearToSrgbShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersPatchyNtscLinearToSrgbShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersPatchyNtscLinearToSrgbShaderDefs::sFragmentHash, RetroArchNtscShadersPatchyNtscLinearToSrgbShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersPatchyNtscLinearToSrgbShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersReliefShaderDefs::sVertexHash, RetroArchMiscShadersReliefShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersReliefShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersReliefShaderDefs::sFragmentHash, RetroArchMiscShadersReliefShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersReliefShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersRetroPalettesShaderDefs::sVertexHash, RetroArchMiscShadersRetroPalettesShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersRetroPalettesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersRetroPalettesShaderDefs::sFragmentHash, RetroArchMiscShadersRetroPalettesShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersRetroPalettesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersSimple_color_controlsShaderDefs::sVertexHash, RetroArchMiscShadersSimple_color_controlsShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersSimple_color_controlsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersSimple_color_controlsShaderDefs::sFragmentHash, RetroArchMiscShadersSimple_color_controlsShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersSimple_color_controlsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersSsGammaRampShaderDefs::sVertexHash, RetroArchMiscShadersSsGammaRampShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersSsGammaRampShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersSsGammaRampShaderDefs::sFragmentHash, RetroArchMiscShadersSsGammaRampShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersSsGammaRampShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersTonemappingShaderDefs::sVertexHash, RetroArchMiscShadersTonemappingShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersTonemappingShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersTonemappingShaderDefs::sFragmentHash, RetroArchMiscShadersTonemappingShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersTonemappingShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersWhite_pointShaderDefs::sVertexHash, RetroArchMiscShadersWhite_pointShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersWhite_pointShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersWhite_pointShaderDefs::sFragmentHash, RetroArchMiscShadersWhite_pointShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersWhite_pointShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersYiqHueAdjustmentShaderDefs::sVertexHash, RetroArchMiscShadersYiqHueAdjustmentShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersYiqHueAdjustmentShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersYiqHueAdjustmentShaderDefs::sFragmentHash, RetroArchMiscShadersYiqHueAdjustmentShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersYiqHueAdjustmentShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass0ShaderDefs::sVertexHash, RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass0ShaderDefs::sVertexByteCode, sizeof(RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass0ShaderDefs::sFragmentHash, RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass3ShaderDefs::sVertexHash, RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass3ShaderDefs::sVertexByteCode, sizeof(RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass3ShaderDefs::sFragmentHash, RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass3ShaderDefs::sFragmentByteCode, sizeof(RetroArchMotionInterpolationShadersMotion_interpolationMotion_interpolation_pass3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMotionblurShadersBraidRewindShaderDefs::sVertexHash, RetroArchMotionblurShadersBraidRewindShaderDefs::sVertexByteCode, sizeof(RetroArchMotionblurShadersBraidRewindShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMotionblurShadersBraidRewindShaderDefs::sFragmentHash, RetroArchMotionblurShadersBraidRewindShaderDefs::sFragmentByteCode, sizeof(RetroArchMotionblurShadersBraidRewindShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMotionblurShadersMix_framesShaderDefs::sVertexHash, RetroArchMotionblurShadersMix_framesShaderDefs::sVertexByteCode, sizeof(RetroArchMotionblurShadersMix_framesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMotionblurShadersMix_framesShaderDefs::sFragmentHash, RetroArchMotionblurShadersMix_framesShaderDefs::sFragmentByteCode, sizeof(RetroArchMotionblurShadersMix_framesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMotionblurShadersMix_frames_smartShaderDefs::sVertexHash, RetroArchMotionblurShadersMix_frames_smartShaderDefs::sVertexByteCode, sizeof(RetroArchMotionblurShadersMix_frames_smartShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMotionblurShadersMix_frames_smartShaderDefs::sFragmentHash, RetroArchMotionblurShadersMix_frames_smartShaderDefs::sFragmentByteCode, sizeof(RetroArchMotionblurShadersMix_frames_smartShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMotionblurShadersMotionblurBlueShaderDefs::sVertexHash, RetroArchMotionblurShadersMotionblurBlueShaderDefs::sVertexByteCode, sizeof(RetroArchMotionblurShadersMotionblurBlueShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMotionblurShadersMotionblurBlueShaderDefs::sFragmentHash, RetroArchMotionblurShadersMotionblurBlueShaderDefs::sFragmentByteCode, sizeof(RetroArchMotionblurShadersMotionblurBlueShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMotionblurShadersMotionblurColorShaderDefs::sVertexHash, RetroArchMotionblurShadersMotionblurColorShaderDefs::sVertexByteCode, sizeof(RetroArchMotionblurShadersMotionblurColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMotionblurShadersMotionblurColorShaderDefs::sFragmentHash, RetroArchMotionblurShadersMotionblurColorShaderDefs::sFragmentByteCode, sizeof(RetroArchMotionblurShadersMotionblurColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMotionblurShadersMotionblurSimpleShaderDefs::sVertexHash, RetroArchMotionblurShadersMotionblurSimpleShaderDefs::sVertexByteCode, sizeof(RetroArchMotionblurShadersMotionblurSimpleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMotionblurShadersMotionblurSimpleShaderDefs::sFragmentHash, RetroArchMotionblurShadersMotionblurSimpleShaderDefs::sFragmentByteCode, sizeof(RetroArchMotionblurShadersMotionblurSimpleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomCompositeEncodeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassNotchDecodeYiqShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassNotchDecodeYiqShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassNotchDecodeYiqShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassNotchDecodeYiqShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassNotchDecodeYiqShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassNotchDecodeYiqShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersCgwgFamicomGeomAdaptiveCombDecodeShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersCgwgFamicomGeomAdaptiveCombDecodeShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomAdaptiveCombDecodeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersCgwgFamicomGeomAdaptiveCombDecodeShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersCgwgFamicomGeomAdaptiveCombDecodeShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomAdaptiveCombDecodeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersCgwgFamicomGeomCrtGeomFamicomShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersCgwgFamicomGeomCrtGeomFamicomShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomCrtGeomFamicomShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersCgwgFamicomGeomCrtGeomFamicomShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersCgwgFamicomGeomCrtGeomFamicomShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomCrtGeomFamicomShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersGtuFamicomDAC_LUTShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersGtuFamicomDAC_LUTShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersGtuFamicomDAC_LUTShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersGtuFamicomDAC_LUTShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersGtuFamicomDAC_LUTShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersGtuFamicomDAC_LUTShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersGtuFamicomLowPassShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersGtuFamicomLowPassShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersGtuFamicomLowPassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersGtuFamicomLowPassShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersGtuFamicomLowPassShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersGtuFamicomLowPassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersGtuFamicomCombFilterShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersGtuFamicomCombFilterShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersGtuFamicomCombFilterShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersGtuFamicomCombFilterShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersGtuFamicomCombFilterShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersGtuFamicomCombFilterShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersGtuFamicomScaleXShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersGtuFamicomScaleXShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersGtuFamicomScaleXShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersGtuFamicomScaleXShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersGtuFamicomScaleXShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersGtuFamicomScaleXShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersGtuFamicomScaleYShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersGtuFamicomScaleYShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersGtuFamicomScaleYShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersGtuFamicomScaleYShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersGtuFamicomScaleYShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersGtuFamicomScaleYShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs::sVertexHash, RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs::sVertexByteCode, sizeof(RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs::sFragmentHash, RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs::sFragmentByteCode, sizeof(RetroArchNes_raw_paletteShadersNesColorDecoderShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscPass1Composite3phaseShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscPass1Composite3phaseShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass1Composite3phaseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscPass1Composite3phaseShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscPass1Composite3phaseShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass1Composite3phaseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscPass23phaseShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscPass23phaseShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass23phaseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscPass23phaseShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscPass23phaseShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass23phaseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPalShadersPalR57shellShaderDefs::sVertexHash, RetroArchPalShadersPalR57shellShaderDefs::sVertexByteCode, sizeof(RetroArchPalShadersPalR57shellShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPalShadersPalR57shellShaderDefs::sFragmentHash, RetroArchPalShadersPalR57shellShaderDefs::sFragmentByteCode, sizeof(RetroArchPalShadersPalR57shellShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyNtscEncodeYCShaderDefs::sVertexHash, RetroArchNtscShadersPatchyNtscPatchyNtscEncodeYCShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyNtscEncodeYCShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyNtscEncodeYCShaderDefs::sFragmentHash, RetroArchNtscShadersPatchyNtscPatchyNtscEncodeYCShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyNtscEncodeYCShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyNtscCombineYCShaderDefs::sVertexHash, RetroArchNtscShadersPatchyNtscPatchyNtscCombineYCShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyNtscCombineYCShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyNtscCombineYCShaderDefs::sFragmentHash, RetroArchNtscShadersPatchyNtscPatchyNtscCombineYCShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyNtscCombineYCShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyNtscNoiseShaderDefs::sVertexHash, RetroArchNtscShadersPatchyNtscPatchyNtscNoiseShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyNtscNoiseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyNtscNoiseShaderDefs::sFragmentHash, RetroArchNtscShadersPatchyNtscPatchyNtscNoiseShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyNtscNoiseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyNtscSeparateYCShaderDefs::sVertexHash, RetroArchNtscShadersPatchyNtscPatchyNtscSeparateYCShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyNtscSeparateYCShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyNtscSeparateYCShaderDefs::sFragmentHash, RetroArchNtscShadersPatchyNtscPatchyNtscSeparateYCShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyNtscSeparateYCShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyNtscDecodeYRmyBmyShaderDefs::sVertexHash, RetroArchNtscShadersPatchyNtscPatchyNtscDecodeYRmyBmyShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyNtscDecodeYRmyBmyShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersPatchyNtscPatchyNtscDecodeYRmyBmyShaderDefs::sFragmentHash, RetroArchNtscShadersPatchyNtscPatchyNtscDecodeYRmyBmyShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersPatchyNtscPatchyNtscDecodeYRmyBmyShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersArtifactColorsArtifactColors0ShaderDefs::sVertexHash, RetroArchNtscShadersArtifactColorsArtifactColors0ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersArtifactColorsArtifactColors0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersArtifactColorsArtifactColors0ShaderDefs::sFragmentHash, RetroArchNtscShadersArtifactColorsArtifactColors0ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersArtifactColorsArtifactColors0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersArtifactColorsArtifactColors1ShaderDefs::sVertexHash, RetroArchNtscShadersArtifactColorsArtifactColors1ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersArtifactColorsArtifactColors1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersArtifactColorsArtifactColors1ShaderDefs::sFragmentHash, RetroArchNtscShadersArtifactColorsArtifactColors1ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersArtifactColorsArtifactColors1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersArtifactColorsArtifactColors2ShaderDefs::sVertexHash, RetroArchNtscShadersArtifactColorsArtifactColors2ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersArtifactColorsArtifactColors2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersArtifactColorsArtifactColors2ShaderDefs::sFragmentHash, RetroArchNtscShadersArtifactColorsArtifactColors2ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersArtifactColorsArtifactColors2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersBlarggBlargg0ShaderDefs::sVertexHash, RetroArchNtscShadersBlarggBlargg0ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersBlarggBlargg0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersBlarggBlargg0ShaderDefs::sFragmentHash, RetroArchNtscShadersBlarggBlargg0ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersBlarggBlargg0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersBlarggBlargg1ShaderDefs::sVertexHash, RetroArchNtscShadersBlarggBlargg1ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersBlarggBlargg1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersBlarggBlargg1ShaderDefs::sFragmentHash, RetroArchNtscShadersBlarggBlargg1ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersBlarggBlargg1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMameNtscMameNtscShaderDefs::sVertexHash, RetroArchNtscShadersMameNtscMameNtscShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMameNtscMameNtscShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMameNtscMameNtscShaderDefs::sFragmentHash, RetroArchNtscShadersMameNtscMameNtscShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMameNtscMameNtscShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMameNtscMamePostprocShaderDefs::sVertexHash, RetroArchNtscShadersMameNtscMamePostprocShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMameNtscMamePostprocShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMameNtscMamePostprocShaderDefs::sFragmentHash, RetroArchNtscShadersMameNtscMamePostprocShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMameNtscMamePostprocShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscGaussPassShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscGaussPassShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscGaussPassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscGaussPassShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscGaussPassShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscGaussPassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscStockShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscStockShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscStockShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscStockShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscStockShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscStockShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscPass23phaseGammaShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscPass23phaseGammaShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass23phaseGammaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscPass23phaseGammaShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscPass23phaseGammaShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass23phaseGammaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscPass1Svideo3phaseShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscPass1Svideo3phaseShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass1Svideo3phaseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscPass1Svideo3phaseShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscPass1Svideo3phaseShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass1Svideo3phaseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscPass1Composite2phaseShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscPass1Composite2phaseShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass1Composite2phaseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscPass1Composite2phaseShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscPass1Composite2phaseShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass1Composite2phaseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscPass22phaseShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscPass22phaseShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass22phaseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscPass22phaseShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscPass22phaseShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass22phaseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscPass22phaseGammaShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscPass22phaseGammaShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass22phaseGammaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscPass22phaseGammaShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscPass22phaseGammaShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass22phaseGammaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscPass1Svideo2phaseShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscPass1Svideo2phaseShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass1Svideo2phaseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscPass1Svideo2phaseShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscPass1Svideo2phaseShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass1Svideo2phaseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersNtscAdaptiveNtscPass1ShaderDefs::sVertexHash, RetroArchNtscShadersNtscAdaptiveNtscPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersNtscAdaptiveNtscPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersNtscAdaptiveNtscPass1ShaderDefs::sFragmentHash, RetroArchNtscShadersNtscAdaptiveNtscPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersNtscAdaptiveNtscPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersNtscAdaptiveNtscPass2ShaderDefs::sVertexHash, RetroArchNtscShadersNtscAdaptiveNtscPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersNtscAdaptiveNtscPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersNtscAdaptiveNtscPass2ShaderDefs::sFragmentHash, RetroArchNtscShadersNtscAdaptiveNtscPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersNtscAdaptiveNtscPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs::sVertexHash, RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs::sFragmentHash, RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersNtscAdaptiveTateNtscTatePass2ShaderDefs::sVertexHash, RetroArchNtscShadersNtscAdaptiveTateNtscTatePass2ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersNtscAdaptiveTateNtscTatePass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersNtscAdaptiveTateNtscTatePass2ShaderDefs::sFragmentHash, RetroArchNtscShadersNtscAdaptiveTateNtscTatePass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersNtscAdaptiveTateNtscTatePass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersNtscBlastemShaderDefs::sVertexHash, RetroArchNtscShadersNtscBlastemShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersNtscBlastemShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersNtscBlastemShaderDefs::sFragmentHash, RetroArchNtscShadersNtscBlastemShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersNtscBlastemShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersNtscSimpleNtscMiniShaderDefs::sVertexHash, RetroArchNtscShadersNtscSimpleNtscMiniShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersNtscSimpleNtscMiniShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersNtscSimpleNtscMiniShaderDefs::sFragmentHash, RetroArchNtscShadersNtscSimpleNtscMiniShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersNtscSimpleNtscMiniShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersNtscSimpleNtscSimple1ShaderDefs::sVertexHash, RetroArchNtscShadersNtscSimpleNtscSimple1ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersNtscSimpleNtscSimple1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersNtscSimpleNtscSimple1ShaderDefs::sFragmentHash, RetroArchNtscShadersNtscSimpleNtscSimple1ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersNtscSimpleNtscSimple1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersNtscSimpleNtscSimple2ShaderDefs::sVertexHash, RetroArchNtscShadersNtscSimpleNtscSimple2ShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersNtscSimpleNtscSimple2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersNtscSimpleNtscSimple2ShaderDefs::sFragmentHash, RetroArchNtscShadersNtscSimpleNtscSimple2ShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersNtscSimpleNtscSimple2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersNtscSimpleKaizerLpSmallShaderDefs::sVertexHash, RetroArchNtscShadersNtscSimpleKaizerLpSmallShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersNtscSimpleKaizerLpSmallShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersNtscSimpleKaizerLpSmallShaderDefs::sFragmentHash, RetroArchNtscShadersNtscSimpleKaizerLpSmallShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersNtscSimpleKaizerLpSmallShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersNtscSimpleTiny_ntscShaderDefs::sVertexHash, RetroArchNtscShadersNtscSimpleTiny_ntscShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersNtscSimpleTiny_ntscShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersNtscSimpleTiny_ntscShaderDefs::sFragmentHash, RetroArchNtscShadersNtscSimpleTiny_ntscShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersNtscSimpleTiny_ntscShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPalShadersPalR57shellMoireOnlyShaderDefs::sVertexHash, RetroArchPalShadersPalR57shellMoireOnlyShaderDefs::sVertexByteCode, sizeof(RetroArchPalShadersPalR57shellMoireOnlyShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPalShadersPalR57shellMoireOnlyShaderDefs::sFragmentHash, RetroArchPalShadersPalR57shellMoireOnlyShaderDefs::sFragmentByteCode, sizeof(RetroArchPalShadersPalR57shellMoireOnlyShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPalShadersPalSinglepassShaderDefs::sVertexHash, RetroArchPalShadersPalSinglepassShaderDefs::sVertexByteCode, sizeof(RetroArchPalShadersPalSinglepassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPalShadersPalSinglepassShaderDefs::sFragmentHash, RetroArchPalShadersPalSinglepassShaderDefs::sFragmentByteCode, sizeof(RetroArchPalShadersPalSinglepassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersAannShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersAannShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersAannShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersAannShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersAannShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersAannShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersBandlimitPixelShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersBandlimitPixelShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersBandlimitPixelShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersBandlimitPixelShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersBandlimitPixelShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersBandlimitPixelShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersBilinearAdjustableShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersBilinearAdjustableShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersBilinearAdjustableShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersBilinearAdjustableShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersBilinearAdjustableShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersBilinearAdjustableShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersBox_filter_aaBox_filter_aa_xformShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersBox_filter_aaBox_filter_aa_xformShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersBox_filter_aaBox_filter_aa_xformShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersBox_filter_aaBox_filter_aa_xformShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersBox_filter_aaBox_filter_aa_xformShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersBox_filter_aaBox_filter_aa_xformShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersCleanEdgeRotateShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersCleanEdgeRotateShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersCleanEdgeRotateShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersCleanEdgeRotateShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersCleanEdgeRotateShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersCleanEdgeRotateShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersControlledSharpnessShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersControlledSharpnessShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersControlledSharpnessShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersControlledSharpnessShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersControlledSharpnessShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersControlledSharpnessShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersEdge1pixelShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersEdge1pixelShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersEdge1pixelShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersEdge1pixelShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersEdge1pixelShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersEdge1pixelShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersEdgeNpixelsShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersEdgeNpixelsShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersEdgeNpixelsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersEdgeNpixelsShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersEdgeNpixelsShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersEdgeNpixelsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersGridBlendHybridShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersGridBlendHybridShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersGridBlendHybridShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersGridBlendHybridShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersGridBlendHybridShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersGridBlendHybridShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersPixellateShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersPixellateShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersPixellateShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersPixellateShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersPixellateShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersPixellateShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaTo_linShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersPixel_aaTo_linShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaTo_linShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaTo_linShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersPixel_aaTo_linShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaTo_linShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaPixel_aaShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersPixel_aaPixel_aaShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaPixel_aaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaPixel_aaShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersPixel_aaPixel_aaShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaPixel_aaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaTo_lin_fastShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersPixel_aaTo_lin_fastShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaTo_lin_fastShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaTo_lin_fastShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersPixel_aaTo_lin_fastShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaTo_lin_fastShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_fastShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersPixel_aaPixel_aa_fastShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_fastShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_fastShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersPixel_aaPixel_aa_fastShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_fastShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_single_passShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersPixel_aaPixel_aa_single_passShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_single_passShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_single_passShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersPixel_aaPixel_aa_single_passShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_single_passShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_xformShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersPixel_aaPixel_aa_xformShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_xformShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_xformShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersPixel_aaPixel_aa_xformShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersPixel_aaPixel_aa_xformShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersSharpBilinearScanlinesShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersSharpBilinearScanlinesShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersSharpBilinearScanlinesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersSharpBilinearScanlinesShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersSharpBilinearScanlinesShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersSharpBilinearScanlinesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersSharpBilinearSimpleShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersSharpBilinearSimpleShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersSharpBilinearSimpleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersSharpBilinearSimpleShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersSharpBilinearSimpleShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersSharpBilinearSimpleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersSharpBilinearShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersSharpBilinearShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersSharpBilinearShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersSharpBilinearShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersSharpBilinearShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersSharpBilinearShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersSharpShimmerlessShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersSharpShimmerlessShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersSharpShimmerlessShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersSharpShimmerlessShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersSharpShimmerlessShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersSharpShimmerlessShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersSmootheststepShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersSmootheststepShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersSmootheststepShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersSmootheststepShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersSmootheststepShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersSmootheststepShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersSmuberStepShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersSmuberStepShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersSmuberStepShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersSmuberStepShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersSmuberStepShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersSmuberStepShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchPixelArtScalingShadersUniformNearestShaderDefs::sVertexHash, RetroArchPixelArtScalingShadersUniformNearestShaderDefs::sVertexByteCode, sizeof(RetroArchPixelArtScalingShadersUniformNearestShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchPixelArtScalingShadersUniformNearestShaderDefs::sFragmentHash, RetroArchPixelArtScalingShadersUniformNearestShaderDefs::sFragmentByteCode, sizeof(RetroArchPixelArtScalingShadersUniformNearestShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersRewindShaderDefs::sVertexHash, RetroArchVhsShadersRewindShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersRewindShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersRewindShaderDefs::sFragmentHash, RetroArchVhsShadersRewindShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersRewindShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSubframeBfiShadersCrtBeamSimulatorShaderDefs::sVertexHash, RetroArchSubframeBfiShadersCrtBeamSimulatorShaderDefs::sVertexByteCode, sizeof(RetroArchSubframeBfiShadersCrtBeamSimulatorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSubframeBfiShadersCrtBeamSimulatorShaderDefs::sFragmentHash, RetroArchSubframeBfiShadersCrtBeamSimulatorShaderDefs::sFragmentByteCode, sizeof(RetroArchSubframeBfiShadersCrtBeamSimulatorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHdrShadersCrtSonyMegatronSourcePassShaderDefs::sVertexHash, RetroArchHdrShadersCrtSonyMegatronSourcePassShaderDefs::sVertexByteCode, sizeof(RetroArchHdrShadersCrtSonyMegatronSourcePassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHdrShadersCrtSonyMegatronSourcePassShaderDefs::sFragmentHash, RetroArchHdrShadersCrtSonyMegatronSourcePassShaderDefs::sFragmentByteCode, sizeof(RetroArchHdrShadersCrtSonyMegatronSourcePassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHdrShadersCrtSonyMegatronHdrPassShaderDefs::sVertexHash, RetroArchHdrShadersCrtSonyMegatronHdrPassShaderDefs::sVertexByteCode, sizeof(RetroArchHdrShadersCrtSonyMegatronHdrPassShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHdrShadersCrtSonyMegatronHdrPassShaderDefs::sFragmentHash, RetroArchHdrShadersCrtSonyMegatronHdrPassShaderDefs::sFragmentByteCode, sizeof(RetroArchHdrShadersCrtSonyMegatronHdrPassShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHdrShadersCrtSonyMegatronShaderDefs::sVertexHash, RetroArchHdrShadersCrtSonyMegatronShaderDefs::sVertexByteCode, sizeof(RetroArchHdrShadersCrtSonyMegatronShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHdrShadersCrtSonyMegatronShaderDefs::sFragmentHash, RetroArchHdrShadersCrtSonyMegatronShaderDefs::sFragmentByteCode, sizeof(RetroArchHdrShadersCrtSonyMegatronShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersCrtLottesMultipassBloompassGlowShaderDefs::sVertexHash, RetroArchCrtShadersCrtLottesMultipassBloompassGlowShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersCrtLottesMultipassBloompassGlowShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersCrtLottesMultipassBloompassGlowShaderDefs::sFragmentHash, RetroArchCrtShadersCrtLottesMultipassBloompassGlowShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersCrtLottesMultipassBloompassGlowShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchWarpShadersSmartMorphShaderDefs::sVertexHash, RetroArchWarpShadersSmartMorphShaderDefs::sVertexByteCode, sizeof(RetroArchWarpShadersSmartMorphShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchWarpShadersSmartMorphShaderDefs::sFragmentHash, RetroArchWarpShadersSmartMorphShaderDefs::sFragmentByteCode, sizeof(RetroArchWarpShadersSmartMorphShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchNtscShadersMaisterNtscPass23phaseLinearShaderDefs::sVertexHash, RetroArchNtscShadersMaisterNtscPass23phaseLinearShaderDefs::sVertexByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass23phaseLinearShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchNtscShadersMaisterNtscPass23phaseLinearShaderDefs::sFragmentHash, RetroArchNtscShadersMaisterNtscPass23phaseLinearShaderDefs::sFragmentByteCode, sizeof(RetroArchNtscShadersMaisterNtscPass23phaseLinearShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchDownsampleShadersDrezGSharp_resamplerShaderDefs::sVertexHash, RetroArchDownsampleShadersDrezGSharp_resamplerShaderDefs::sVertexByteCode, sizeof(RetroArchDownsampleShadersDrezGSharp_resamplerShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchDownsampleShadersDrezGSharp_resamplerShaderDefs::sFragmentHash, RetroArchDownsampleShadersDrezGSharp_resamplerShaderDefs::sFragmentByteCode, sizeof(RetroArchDownsampleShadersDrezGSharp_resamplerShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColor4kShaderDefs::sVertexHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColor4kShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColor4kShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColor4kShaderDefs::sFragmentHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColor4kShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColor4kShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColorShaderDefs::sVertexHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColorShaderDefs::sFragmentHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbaColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColor4kShaderDefs::sVertexHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColor4kShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColor4kShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColor4kShaderDefs::sFragmentHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColor4kShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColor4kShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColorShaderDefs::sVertexHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColorShaderDefs::sFragmentHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcdGbcColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbaColorShaderDefs::sVertexHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbaColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbaColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbaColorShaderDefs::sFragmentHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbaColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbaColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbcColorShaderDefs::sVertexHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbcColorShaderDefs::sVertexByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbcColorShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbcColorShaderDefs::sFragmentHash, RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbcColorShaderDefs::sFragmentByteCode, sizeof(RetroArchHandheldShadersSimpletex_lcdSimpletex_lcd_720pGbcColorShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1bShaderDefs::sVertexHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1bShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1bShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1bShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1bShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXbrShadersSuperXbrSuperXbrPass1bShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchScanlinesShadersScanlineShaderDefs::sVertexHash, RetroArchScanlinesShadersScanlineShaderDefs::sVertexByteCode, sizeof(RetroArchScanlinesShadersScanlineShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchScanlinesShadersScanlineShaderDefs::sFragmentHash, RetroArchScanlinesShadersScanlineShaderDefs::sFragmentByteCode, sizeof(RetroArchScanlinesShadersScanlineShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersScanlinesShaderDefs::sVertexHash, RetroArchReshadeShadersScanlinesShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersScanlinesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersScanlinesShaderDefs::sFragmentHash, RetroArchReshadeShadersScanlinesShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersScanlinesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBloomPassSh1nra358ShaderDefs::sVertexHash, RetroArchReshadeShadersBloomPassSh1nra358ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBloomPassSh1nra358ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBloomPassSh1nra358ShaderDefs::sFragmentHash, RetroArchReshadeShadersBloomPassSh1nra358ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBloomPassSh1nra358ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersBlurGaussHShaderDefs::sVertexHash, RetroArchBlursShadersBlurGaussHShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersBlurGaussHShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersBlurGaussHShaderDefs::sFragmentHash, RetroArchBlursShadersBlurGaussHShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersBlurGaussHShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersBlurGaussVShaderDefs::sVertexHash, RetroArchBlursShadersBlurGaussVShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersBlurGaussVShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersBlurGaussVShaderDefs::sFragmentHash, RetroArchBlursShadersBlurGaussVShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersBlurGaussVShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs::sVertexHash, RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs::sFragmentHash, RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersBlurHazeSh1nra358ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersSnesHiresBlendShaderDefs::sVertexHash, RetroArchCrtShadersSnesHiresBlendShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersSnesHiresBlendShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersSnesHiresBlendShaderDefs::sFragmentHash, RetroArchCrtShadersSnesHiresBlendShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersSnesHiresBlendShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchEdgeSmoothingXsalShaders2xsalLevel2XbrShaderDefs::sVertexHash, RetroArchEdgeSmoothingXsalShaders2xsalLevel2XbrShaderDefs::sVertexByteCode, sizeof(RetroArchEdgeSmoothingXsalShaders2xsalLevel2XbrShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchEdgeSmoothingXsalShaders2xsalLevel2XbrShaderDefs::sFragmentHash, RetroArchEdgeSmoothingXsalShaders2xsalLevel2XbrShaderDefs::sFragmentByteCode, sizeof(RetroArchEdgeSmoothingXsalShaders2xsalLevel2XbrShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersFilmGrainShaderDefs::sVertexHash, RetroArchReshadeShadersFilmGrainShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersFilmGrainShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersFilmGrainShaderDefs::sFragmentHash, RetroArchReshadeShadersFilmGrainShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersFilmGrainShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_1ShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_1ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_1ShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_1ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_2ShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_2ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_2ShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_2ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_3ShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_3ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_3ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_3ShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_3ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_3ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_4ShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_4ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_4ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_4ShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_4ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_4ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_5ShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_5ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_5ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_5ShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_5ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_5ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_6ShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_6ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_6ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_6ShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_6ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_6ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_7ShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_7ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_7ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_7ShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_7ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_7ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_8ShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_8ShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_8ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_8ShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_8ShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blur_pass_8ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_get_small_lumaShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_get_small_lumaShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_get_small_lumaShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_get_small_lumaShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_get_small_lumaShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_get_small_lumaShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_get_adaptShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_get_adaptShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_get_adaptShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_get_adaptShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_get_adaptShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_get_adaptShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blendShaderDefs::sVertexHash, RetroArchReshadeShadersMagicbloomMagicbloom_blendShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blendShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersMagicbloomMagicbloom_blendShaderDefs::sFragmentHash, RetroArchReshadeShadersMagicbloomMagicbloom_blendShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersMagicbloomMagicbloom_blendShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchReshadeShadersNormalsDisplacementNormalsDisplacementShaderDefs::sVertexHash, RetroArchReshadeShadersNormalsDisplacementNormalsDisplacementShaderDefs::sVertexByteCode, sizeof(RetroArchReshadeShadersNormalsDisplacementNormalsDisplacementShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchReshadeShadersNormalsDisplacementNormalsDisplacementShaderDefs::sFragmentHash, RetroArchReshadeShadersNormalsDisplacementNormalsDisplacementShaderDefs::sFragmentByteCode, sizeof(RetroArchReshadeShadersNormalsDisplacementNormalsDisplacementShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs::sVertexHash, RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs::sVertexByteCode, sizeof(RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs::sFragmentHash, RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs::sFragmentByteCode, sizeof(RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchScanlinesShadersOsscShaderDefs::sVertexHash, RetroArchScanlinesShadersOsscShaderDefs::sVertexByteCode, sizeof(RetroArchScanlinesShadersOsscShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchScanlinesShadersOsscShaderDefs::sFragmentHash, RetroArchScanlinesShadersOsscShaderDefs::sFragmentByteCode, sizeof(RetroArchScanlinesShadersOsscShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchCrtShadersSlotmaskShaderDefs::sVertexHash, RetroArchCrtShadersSlotmaskShaderDefs::sVertexByteCode, sizeof(RetroArchCrtShadersSlotmaskShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchCrtShadersSlotmaskShaderDefs::sFragmentHash, RetroArchCrtShadersSlotmaskShaderDefs::sFragmentByteCode, sizeof(RetroArchCrtShadersSlotmaskShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchScanlinesShadersResIndependentScanlinesShaderDefs::sVertexHash, RetroArchScanlinesShadersResIndependentScanlinesShaderDefs::sVertexByteCode, sizeof(RetroArchScanlinesShadersResIndependentScanlinesShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchScanlinesShadersResIndependentScanlinesShaderDefs::sFragmentHash, RetroArchScanlinesShadersResIndependentScanlinesShaderDefs::sFragmentByteCode, sizeof(RetroArchScanlinesShadersResIndependentScanlinesShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchScanlinesShadersScanlineFractShaderDefs::sVertexHash, RetroArchScanlinesShadersScanlineFractShaderDefs::sVertexByteCode, sizeof(RetroArchScanlinesShadersScanlineFractShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchScanlinesShadersScanlineFractShaderDefs::sFragmentHash, RetroArchScanlinesShadersScanlineFractShaderDefs::sFragmentByteCode, sizeof(RetroArchScanlinesShadersScanlineFractShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchScanlinesShadersScanlinesRereShaderDefs::sVertexHash, RetroArchScanlinesShadersScanlinesRereShaderDefs::sVertexByteCode, sizeof(RetroArchScanlinesShadersScanlinesRereShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchScanlinesShadersScanlinesRereShaderDefs::sFragmentHash, RetroArchScanlinesShadersScanlinesRereShaderDefs::sFragmentByteCode, sizeof(RetroArchScanlinesShadersScanlinesRereShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchScanlinesShadersScanlinesSineAbsShaderDefs::sVertexHash, RetroArchScanlinesShadersScanlinesSineAbsShaderDefs::sVertexByteCode, sizeof(RetroArchScanlinesShadersScanlinesSineAbsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchScanlinesShadersScanlinesSineAbsShaderDefs::sFragmentHash, RetroArchScanlinesShadersScanlinesSineAbsShaderDefs::sFragmentByteCode, sizeof(RetroArchScanlinesShadersScanlinesSineAbsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersAdaptiveSharpenPass1ShaderDefs::sVertexHash, RetroArchSharpenShadersAdaptiveSharpenPass1ShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersAdaptiveSharpenPass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersAdaptiveSharpenPass1ShaderDefs::sFragmentHash, RetroArchSharpenShadersAdaptiveSharpenPass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersAdaptiveSharpenPass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersAdaptiveSharpenPass2ShaderDefs::sVertexHash, RetroArchSharpenShadersAdaptiveSharpenPass2ShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersAdaptiveSharpenPass2ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersAdaptiveSharpenPass2ShaderDefs::sFragmentHash, RetroArchSharpenShadersAdaptiveSharpenPass2ShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersAdaptiveSharpenPass2ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersAnime4kAnime4kComputeLumShaderDefs::sVertexHash, RetroArchSharpenShadersAnime4kAnime4kComputeLumShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersAnime4kAnime4kComputeLumShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersAnime4kAnime4kComputeLumShaderDefs::sFragmentHash, RetroArchSharpenShadersAnime4kAnime4kComputeLumShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersAnime4kAnime4kComputeLumShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersAnime4kAnime4kPushShaderDefs::sVertexHash, RetroArchSharpenShadersAnime4kAnime4kPushShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersAnime4kAnime4kPushShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersAnime4kAnime4kPushShaderDefs::sFragmentHash, RetroArchSharpenShadersAnime4kAnime4kPushShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersAnime4kAnime4kPushShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersAnime4kAnime4kComputeGradientShaderDefs::sVertexHash, RetroArchSharpenShadersAnime4kAnime4kComputeGradientShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersAnime4kAnime4kComputeGradientShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersAnime4kAnime4kComputeGradientShaderDefs::sFragmentHash, RetroArchSharpenShadersAnime4kAnime4kComputeGradientShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersAnime4kAnime4kComputeGradientShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersAnime4kAnime4kPushgradWeakShaderDefs::sVertexHash, RetroArchSharpenShadersAnime4kAnime4kPushgradWeakShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersAnime4kAnime4kPushgradWeakShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersAnime4kAnime4kPushgradWeakShaderDefs::sFragmentHash, RetroArchSharpenShadersAnime4kAnime4kPushgradWeakShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersAnime4kAnime4kPushgradWeakShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersDiffShaderDefs::sVertexHash, RetroArchSharpenShadersDiffShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersDiffShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersDiffShaderDefs::sFragmentHash, RetroArchSharpenShadersDiffShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersDiffShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchSharpenShadersSuperResExShaderDefs::sVertexHash, RetroArchSharpenShadersSuperResExShaderDefs::sVertexByteCode, sizeof(RetroArchSharpenShadersSuperResExShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchSharpenShadersSuperResExShaderDefs::sFragmentHash, RetroArchSharpenShadersSuperResExShaderDefs::sFragmentByteCode, sizeof(RetroArchSharpenShadersSuperResExShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersDeposterizeDeposterizePass0ShaderDefs::sVertexHash, RetroArchMiscShadersDeposterizeDeposterizePass0ShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersDeposterizeDeposterizePass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersDeposterizeDeposterizePass0ShaderDefs::sFragmentHash, RetroArchMiscShadersDeposterizeDeposterizePass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersDeposterizeDeposterizePass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchMiscShadersDeposterizeDeposterizePass1ShaderDefs::sVertexHash, RetroArchMiscShadersDeposterizeDeposterizePass1ShaderDefs::sVertexByteCode, sizeof(RetroArchMiscShadersDeposterizeDeposterizePass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchMiscShadersDeposterizeDeposterizePass1ShaderDefs::sFragmentHash, RetroArchMiscShadersDeposterizeDeposterizePass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchMiscShadersDeposterizeDeposterizePass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStereoscopic3dShadersAnaglyphToSideBySideShaderDefs::sVertexHash, RetroArchStereoscopic3dShadersAnaglyphToSideBySideShaderDefs::sVertexByteCode, sizeof(RetroArchStereoscopic3dShadersAnaglyphToSideBySideShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStereoscopic3dShadersAnaglyphToSideBySideShaderDefs::sFragmentHash, RetroArchStereoscopic3dShadersAnaglyphToSideBySideShaderDefs::sFragmentByteCode, sizeof(RetroArchStereoscopic3dShadersAnaglyphToSideBySideShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStereoscopic3dShadersFubax_vrVRShaderDefs::sVertexHash, RetroArchStereoscopic3dShadersFubax_vrVRShaderDefs::sVertexByteCode, sizeof(RetroArchStereoscopic3dShadersFubax_vrVRShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStereoscopic3dShadersFubax_vrVRShaderDefs::sFragmentHash, RetroArchStereoscopic3dShadersFubax_vrVRShaderDefs::sFragmentByteCode, sizeof(RetroArchStereoscopic3dShadersFubax_vrVRShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStereoscopic3dShadersFubax_vrChromaticShaderDefs::sVertexHash, RetroArchStereoscopic3dShadersFubax_vrChromaticShaderDefs::sVertexByteCode, sizeof(RetroArchStereoscopic3dShadersFubax_vrChromaticShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStereoscopic3dShadersFubax_vrChromaticShaderDefs::sFragmentHash, RetroArchStereoscopic3dShadersFubax_vrChromaticShaderDefs::sFragmentByteCode, sizeof(RetroArchStereoscopic3dShadersFubax_vrChromaticShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs::sVertexHash, RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs::sVertexByteCode, sizeof(RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs::sFragmentHash, RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs::sFragmentByteCode, sizeof(RetroArchStereoscopic3dShadersFubax_vrFilmicSharpenShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStereoscopic3dShadersFubax_vrVR_noseShaderDefs::sVertexHash, RetroArchStereoscopic3dShadersFubax_vrVR_noseShaderDefs::sVertexByteCode, sizeof(RetroArchStereoscopic3dShadersFubax_vrVR_noseShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStereoscopic3dShadersFubax_vrVR_noseShaderDefs::sFragmentHash, RetroArchStereoscopic3dShadersFubax_vrVR_noseShaderDefs::sFragmentByteCode, sizeof(RetroArchStereoscopic3dShadersFubax_vrVR_noseShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStereoscopic3dShadersShutterToAnaglyphShaderDefs::sVertexHash, RetroArchStereoscopic3dShadersShutterToAnaglyphShaderDefs::sVertexByteCode, sizeof(RetroArchStereoscopic3dShadersShutterToAnaglyphShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStereoscopic3dShadersShutterToAnaglyphShaderDefs::sFragmentHash, RetroArchStereoscopic3dShadersShutterToAnaglyphShaderDefs::sFragmentByteCode, sizeof(RetroArchStereoscopic3dShadersShutterToAnaglyphShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs::sVertexHash, RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs::sVertexByteCode, sizeof(RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs::sFragmentHash, RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs::sFragmentByteCode, sizeof(RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs::sVertexHash, RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs::sVertexByteCode, sizeof(RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs::sFragmentHash, RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs::sFragmentByteCode, sizeof(RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStereoscopic3dShadersSbsToInterlacedShaderDefs::sVertexHash, RetroArchStereoscopic3dShadersSbsToInterlacedShaderDefs::sVertexByteCode, sizeof(RetroArchStereoscopic3dShadersSbsToInterlacedShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStereoscopic3dShadersSbsToInterlacedShaderDefs::sFragmentHash, RetroArchStereoscopic3dShadersSbsToInterlacedShaderDefs::sFragmentByteCode, sizeof(RetroArchStereoscopic3dShadersSbsToInterlacedShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchStereoscopic3dShadersSbsToShutterShaderDefs::sVertexHash, RetroArchStereoscopic3dShadersSbsToShutterShaderDefs::sVertexByteCode, sizeof(RetroArchStereoscopic3dShadersSbsToShutterShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchStereoscopic3dShadersSbsToShutterShaderDefs::sFragmentHash, RetroArchStereoscopic3dShadersSbsToShutterShaderDefs::sFragmentByteCode, sizeof(RetroArchStereoscopic3dShadersSbsToShutterShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersGristleVHSHorizontalSoftenShaderDefs::sVertexHash, RetroArchVhsShadersGristleVHSHorizontalSoftenShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersGristleVHSHorizontalSoftenShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersGristleVHSHorizontalSoftenShaderDefs::sFragmentHash, RetroArchVhsShadersGristleVHSHorizontalSoftenShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersGristleVHSHorizontalSoftenShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchBlursShadersSunset_gaussianSunset_horzShaderDefs::sVertexHash, RetroArchBlursShadersSunset_gaussianSunset_horzShaderDefs::sVertexByteCode, sizeof(RetroArchBlursShadersSunset_gaussianSunset_horzShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchBlursShadersSunset_gaussianSunset_horzShaderDefs::sFragmentHash, RetroArchBlursShadersSunset_gaussianSunset_horzShaderDefs::sFragmentByteCode, sizeof(RetroArchBlursShadersSunset_gaussianSunset_horzShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersGristleVHSVHSShaderDefs::sVertexHash, RetroArchVhsShadersGristleVHSVHSShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersGristleVHSVHSShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersGristleVHSVHSShaderDefs::sFragmentHash, RetroArchVhsShadersGristleVHSVHSShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersGristleVHSVHSShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersMudlordPalVhsShaderDefs::sVertexHash, RetroArchVhsShadersMudlordPalVhsShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersMudlordPalVhsShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersMudlordPalVhsShaderDefs::sFragmentHash, RetroArchVhsShadersMudlordPalVhsShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersMudlordPalVhsShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersStaticShaderDefs::sVertexHash, RetroArchVhsShadersStaticShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersStaticShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersStaticShaderDefs::sFragmentHash, RetroArchVhsShadersStaticShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersStaticShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_ThirdShaderDefs::sVertexHash, RetroArchVhsShadersVHSProVHSPro_ThirdShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_ThirdShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_ThirdShaderDefs::sFragmentHash, RetroArchVhsShadersVHSProVHSPro_ThirdShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_ThirdShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_TapeShaderDefs::sVertexHash, RetroArchVhsShadersVHSProVHSPro_TapeShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_TapeShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_TapeShaderDefs::sFragmentHash, RetroArchVhsShadersVHSProVHSPro_TapeShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_TapeShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_FirstShaderDefs::sVertexHash, RetroArchVhsShadersVHSProVHSPro_FirstShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_FirstShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_FirstShaderDefs::sFragmentHash, RetroArchVhsShadersVHSProVHSPro_FirstShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_FirstShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_SecondShaderDefs::sVertexHash, RetroArchVhsShadersVHSProVHSPro_SecondShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_SecondShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_SecondShaderDefs::sFragmentHash, RetroArchVhsShadersVHSProVHSPro_SecondShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_SecondShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_ForthShaderDefs::sVertexHash, RetroArchVhsShadersVHSProVHSPro_ForthShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_ForthShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_ForthShaderDefs::sFragmentHash, RetroArchVhsShadersVHSProVHSPro_ForthShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_ForthShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs::sVertexHash, RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs::sFragmentHash, RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVHSProVHSPro_ClearShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVhs_and_crt_godotShaderDefs::sVertexHash, RetroArchVhsShadersVhs_and_crt_godotShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVhs_and_crt_godotShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVhs_and_crt_godotShaderDefs::sFragmentHash, RetroArchVhsShadersVhs_and_crt_godotShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVhs_and_crt_godotShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVhs_fontShaderDefs::sVertexHash, RetroArchVhsShadersVhs_fontShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVhs_fontShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVhs_fontShaderDefs::sFragmentHash, RetroArchVhsShadersVhs_fontShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVhs_fontShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass0ShaderDefs::sVertexHash, RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass0ShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass0ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass0ShaderDefs::sFragmentHash, RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass0ShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass0ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass1ShaderDefs::sVertexHash, RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass1ShaderDefs::sVertexByteCode, sizeof(RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass1ShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass1ShaderDefs::sFragmentHash, RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass1ShaderDefs::sFragmentByteCode, sizeof(RetroArchVhsShadersVhs_mpalkoVhs_mpalko_pass1ShaderDefs::sFragmentByteCode));
 cached.emplace_back(RetroArchWarpShadersDilationShaderDefs::sVertexHash, RetroArchWarpShadersDilationShaderDefs::sVertexByteCode, sizeof(RetroArchWarpShadersDilationShaderDefs::sVertexByteCode)); cached.emplace_back(RetroArchWarpShadersDilationShaderDefs::sFragmentHash, RetroArchWarpShadersDilationShaderDefs::sFragmentByteCode, sizeof(RetroArchWarpShadersDilationShaderDefs::sFragmentByteCode));
// %SHADER_CACHE%
    return cached;
}

}
