#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveFloat.hpp"
#include "PostProcessSettings.hpp"
#include "Texture.hpp"
#include "Texture2D.hpp"
#include "TextureCube.hpp"
void _Script_Engine::PostProcessSettings::set_bOverride_WhiteTemp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PostProcessSettings::get_WhiteTint() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::PostProcessSettings::get_BloomMethod() {
    return (void*)((uintptr_t)this + 0x21);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_WhiteTint() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_WhiteTemp() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorGainShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorContrast() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_WhiteTint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorSaturation() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmWhitePoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 8 != 0;
}
float& _Script_Engine::PostProcessSettings::get_AutoExposureLowPercent() {
    return *(float*)((uintptr_t)this + 0x338);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom4Tint() {
    return (*(uint8_t*)((uintptr_t)this + 0x7 + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_MobileHQGaussian(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorSaturation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingReflectionsSamplesPerPixel() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorContrast(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorGamma() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingTranslucencyRefractionRays(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorGamma(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorGain(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorGain() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureBiasBackup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31c + 0);
    *(uint8_t*)((uintptr_t)this + 0x31c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomConvolutionPreFilterMin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmDynamicRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom3Tint() {
    return (*(uint8_t*)((uintptr_t)this + 0x7 + 0)) & 1 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorSaturationShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 128 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorContrastShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingGI() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorSaturationShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::PostProcessSettings::get_AutoExposureMethod() {
    return (void*)((uintptr_t)this + 0x22);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorGradingLUT() {
    return (*(uint8_t*)((uintptr_t)this + 0x16 + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorContrastShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldVignetteSize() {
    return *(float*)((uintptr_t)this + 0x4b0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomDirtMaskTint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ExpandGamut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldMinFstop() {
    return *(float*)((uintptr_t)this + 0x30c);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorGammaShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_MotionBlurTargetFPS(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorGammaShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVSpecularOcclusionExponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 16 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ToneCurveAmount() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 4 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionMipBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 128 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldFocalDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x16 + 0)) & 8 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorGainShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 4 != 0;
}
float& _Script_Engine::PostProcessSettings::get_FilmWhiteClip() {
    return *(float*)((uintptr_t)this + 0x194);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorOffsetShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ToneCurveAmount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorOffsetShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom5Size() {
    return (*(uint8_t*)((uintptr_t)this + 0x7 + 0)) & 32 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorSaturationMidtones() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorSaturationMidtones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorContrastMidtones() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 32 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureSpeedUp() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorContrastMidtones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmSlope() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 128 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomConvolutionSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldSensorWidth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16 + 0);
    *(uint8_t*)((uintptr_t)this + 0x16 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorGammaMidtones() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 64 != 0;
}
float& _Script_Engine::PostProcessSettings::get_LPVDiffuseOcclusionExponent() {
    return *(float*)((uintptr_t)this + 0x4e8);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorGammaMidtones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmChannelMixerBlue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomConvolutionSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 4 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorGainMidtones() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 128 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_MotionBlurPerObjectSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmWhitePoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionMipBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorGainMidtones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::PostProcessSettings::get_IndirectLightingColor() {
    return (void*)((uintptr_t)this + 0x454);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorOffsetMidtones() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingAOSamplesPerPixel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::PostProcessSettings::get_ColorCorrectionHighlightsMin() {
    return *(float*)((uintptr_t)this + 0x170);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorOffsetMidtones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureMaxBrightness() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 4 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorSaturationHighlights() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 2 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmHealAmount() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorSaturationHighlights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureMinBrightness() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmChannelMixerRed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::PostProcessSettings::get_ColorGainMidtones() {
    return (void*)((uintptr_t)this + 0x100);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorContrastHighlights() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_IndirectLightingColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorContrastHighlights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmSaturation() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 16 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVDirectionalOcclusionRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 4 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 4 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorGammaHighlights() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorGammaHighlights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorGainHighlights() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorGainHighlights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorOffsetHighlights() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmChannelMixerGreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVDiffuseOcclusionExponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureSpeedDown() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorOffsetHighlights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::PostProcessSettings::get_SceneColorTint() {
    return (void*)((uintptr_t)this + 0x204);
}
float& _Script_Engine::PostProcessSettings::get_LPVDirectionalOcclusionFadeRange() {
    return *(float*)((uintptr_t)this + 0x534);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorGradingIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16 + 0);
    *(uint8_t*)((uintptr_t)this + 0x16 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::PostProcessSettings::get_ColorGammaMidtones() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorCorrectionShadowsMax() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 64 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmChannelMixerBlue() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 128 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorCorrectionShadowsMax(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureSpeedDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmSaturation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 128 != 0;
}
void* _Script_Engine::PostProcessSettings::get_ColorSaturationHighlights() {
    return (void*)((uintptr_t)this + 0x120);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorCorrectionHighlightsMin() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 128 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmChannelMixerRed() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingAO(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorCorrectionHighlightsMin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BlueCorrection() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom6Tint() {
    return (*(uint8_t*)((uintptr_t)this + 0x7 + 0)) & 64 != 0;
}
float& _Script_Engine::PostProcessSettings::get_FilmSaturation() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_BlueCorrection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionQuality(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ExpandGamut() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 2 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureApplyPhysicalCameraExposure() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 2 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomConvolutionPreFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 16 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomConvolutionPreFilterMult() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 128 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmChannelMixerGreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 64 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomDirtMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmContrast() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmContrast(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_LensFlareBokehShape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PostProcessSettings::get_FilmContrast() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmDynamicRange() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmHealAmount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureMaxBrightness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::PostProcessSettings::get_Bloom2Size() {
    return *(float*)((uintptr_t)this + 0x22c);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmToeAmount() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmToeAmount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingReflectionsMaxBounces(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmShadowTint() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmShadowTint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionTemporalBlendWeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe + 0);
    *(uint8_t*)((uintptr_t)this + 0xe + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomDirtMaskIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmShadowTintBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmShadowTintBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVDirectionalOcclusionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 2 != 0;
}
void* _Script_Engine::PostProcessSettings::get_FilmChannelMixerBlue() {
    return (void*)((uintptr_t)this + 0x1e4);
}
void _Script_Engine::PostProcessSettings::set_bOverride_CameraISO(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmShadowTintAmount() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 64 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingTranslucencyMaxRoughness() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 128 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmShadowTintAmount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVSecondaryBounceIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureBiasCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmSlope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_LensFlareThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmToe() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ScreenSpaceReflectionQuality(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::PostProcessSettings::get_FilmDynamicRange() {
    return *(float*)((uintptr_t)this + 0x200);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingReflectionsTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmToe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingTranslucencyShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 4 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmShoulder() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 2 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ColorGradingIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x16 + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmShoulder(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17 + 0);
    *(uint8_t*)((uintptr_t)this + 0x17 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureHighPercent() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmBlackClip() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVSpecularOcclusionExponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::PostProcessSettings::get_FilmWhitePoint() {
    return (void*)((uintptr_t)this + 0x198);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomConvolutionTexture() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmBlackClip(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ScreenSpaceReflectionMaxRoughness() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 8 != 0;
}
float& _Script_Engine::PostProcessSettings::get_SceneFringeIntensity() {
    return *(float*)((uintptr_t)this + 0x214);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_FilmWhiteClip() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_FilmWhiteClip(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionMipThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0xe + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_CameraShutterSpeed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_SceneColorTint() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 16 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomSizeScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldNearTransitionRegion() {
    return (*(uint8_t*)((uintptr_t)this + 0x17 + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_SceneColorTint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_SceneFringeIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_SceneFringeIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingGISamplesPerPixel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Engine::PostProcessSettings::get_Bloom4Tint() {
    return (void*)((uintptr_t)this + 0x270);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ChromaticAberrationStartOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 64 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ChromaticAberrationStartOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomConvolutionPreFilterMax() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 64 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientCubemapTint() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 128 != 0;
}
float& _Script_Engine::PostProcessSettings::get_WhiteTemp() {
    return *(float*)((uintptr_t)this + 0x24);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientCubemapTint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientCubemapIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 1 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_GrainJitter() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientCubemapIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomMethod() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 2 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingReflectionsMaxBounces() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomMethod(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingReflectionsShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LensFlareTint() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 32 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_PathTracingSamplesPerPixel() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e + 0)) & 1 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionMipScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe + 0);
    *(uint8_t*)((uintptr_t)this + 0xe + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_PathTracingMaxBounces(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom1Tint() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom1Tint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingTranslucencySamplesPerPixel() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 2 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom1Size() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bMobileHQGaussian(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom1Size(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom2Size() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 64 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ScreenSpaceReflectionRoughnessScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom2Size(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom2Tint() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 128 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingReflectionsSamplesPerPixel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom2Tint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom3Tint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldDepthBlurAmount() {
    return *(float*)((uintptr_t)this + 0x488);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom3Size() {
    return (*(uint8_t*)((uintptr_t)this + 0x7 + 0)) & 2 != 0;
}
float& _Script_Engine::PostProcessSettings::get_ChromaticAberrationStartOffset() {
    return *(float*)((uintptr_t)this + 0x218);
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom3Size(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::PostProcessSettings::get_ColorOffsetShadows() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom4Tint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom4Size() {
    return (*(uint8_t*)((uintptr_t)this + 0x7 + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom4Size(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom5Tint() {
    return (*(uint8_t*)((uintptr_t)this + 0x7 + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureMeterMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PostProcessSettings::get_ColorContrastHighlights() {
    return (void*)((uintptr_t)this + 0x130);
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom5Tint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom5Size(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionFadeRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::PostProcessSettings::get_ColorContrastMidtones() {
    return (void*)((uintptr_t)this + 0xe0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom6Tint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Engine::PostProcessSettings::get_ColorOffsetHighlights() {
    return (void*)((uintptr_t)this + 0x160);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_Bloom6Size() {
    return (*(uint8_t*)((uintptr_t)this + 0x7 + 0)) & 128 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_Bloom6Size(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::PostProcessSettings::get_ColorOffsetMidtones() {
    return (void*)((uintptr_t)this + 0x110);
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomSizeScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomConvolutionTexture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomConvolutionCenterUV() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 8 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldFstop() {
    return (*(uint8_t*)((uintptr_t)this + 0x16 + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomConvolutionCenterUV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::PostProcessSettings::get_ColorContrastShadows() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomConvolutionPreFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Engine::PostProcessSettings::get_ColorCorrectionShadowsMax() {
    return *(float*)((uintptr_t)this + 0x174);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomConvolutionPreFilterMin() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 32 != 0;
}
void* _Script_Engine::PostProcessSettings::get_ColorGainHighlights() {
    return (void*)((uintptr_t)this + 0x150);
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomConvolutionPreFilterMax(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomConvolutionPreFilterMult(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomConvolutionBufferScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_BloomConvolutionBufferScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomDirtMaskIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 2 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomDirtMaskTint() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 4 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_BloomDirtMask() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 8 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_CameraShutterSpeed() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 16 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldSkyFocusDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_HistogramLogMax(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingTranslucencyShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_CameraISO() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 32 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureMethod() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 64 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureMethod(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureLowPercent() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 128 != 0;
}
void* _Script_Engine::PostProcessSettings::get_ColorGain() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureLowPercent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureHighPercent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureMinBrightness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureCalibrationConstant() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureCalibrationConstant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureSpeedUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Engine::PostProcessSettings::get_BloomSizeScale() {
    return *(float*)((uintptr_t)this + 0x224);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureBias() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 64 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureBiasCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 128 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureMeterMask() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 1 != 0;
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionFadeDistance() {
    return *(float*)((uintptr_t)this + 0x41c);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AutoExposureApplyPhysicalCameraExposure(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_HistogramLogMin() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_HistogramLogMin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_HistogramLogMax() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 8 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LensFlareIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LensFlareIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_Engine::TextureCube*& _Script_Engine::PostProcessSettings::get_AmbientCubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x2f8);
}
void _Script_Engine::PostProcessSettings::set_bOverride_LensFlareTint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LensFlareTints() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 64 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LensFlareTints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LensFlareBokehSize() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 128 != 0;
}
void* _Script_Engine::PostProcessSettings::get_ColorSaturation() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::PostProcessSettings::set_bOverride_LensFlareBokehSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
float& _Script_Engine::PostProcessSettings::get_AutoExposureSpeedUp() {
    return *(float*)((uintptr_t)this + 0x348);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LensFlareBokehShape() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
float& _Script_Engine::PostProcessSettings::get_BloomIntensity() {
    return *(float*)((uintptr_t)this + 0x21c);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldOcclusion() {
    return *(float*)((uintptr_t)this + 0x4a8);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LensFlareThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 2 != 0;
}
float& _Script_Engine::PostProcessSettings::get_GrainIntensity() {
    return *(float*)((uintptr_t)this + 0x408);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_VignetteIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVDirectionalOcclusionFadeRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_VignetteIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionMipScale() {
    return *(float*)((uintptr_t)this + 0x438);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_GrainIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_GrainIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_GrainJitter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionStaticFraction() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 64 != 0;
}
float& _Script_Engine::PostProcessSettings::get_AutoExposureCalibrationConstant() {
    return *(float*)((uintptr_t)this + 0x358);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionStaticFraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
int32_t& _Script_Engine::PostProcessSettings::get_RayTracingReflectionsSamplesPerPixel() {
    return *(int32_t*)((uintptr_t)this + 0x510);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionFadeDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionFadeDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PostProcessSettings::get_AutoExposureMaxBrightness() {
    return *(float*)((uintptr_t)this + 0x344);
}
void _Script_Engine::PostProcessSettings::set_RayTracingReflectionsTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x515 + 0);
    *(uint8_t*)((uintptr_t)this + 0x515 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionFadeRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionRadiusInWS() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionRadiusInWS(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionPower() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 16 != 0;
}
float& _Script_Engine::PostProcessSettings::get_AutoExposureHighPercent() {
    return *(float*)((uintptr_t)this + 0x33c);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionPower(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Engine::PostProcessSettings::get_BloomConvolutionBufferScale() {
    return *(float*)((uintptr_t)this + 0x2c4);
}
void* _Script_Engine::PostProcessSettings::get_RayTracingGIType() {
    return (void*)((uintptr_t)this + 0x468);
}
float& _Script_Engine::PostProcessSettings::get_LPVVplInjectionBias() {
    return *(float*)((uintptr_t)this + 0x4c8);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionBias() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionStaticFraction() {
    return *(float*)((uintptr_t)this + 0x410);
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionFadeRadius() {
    return *(float*)((uintptr_t)this + 0x420);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionQuality() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 64 != 0;
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionMipBlend() {
    return *(float*)((uintptr_t)this + 0x434);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionMipScale() {
    return (*(uint8_t*)((uintptr_t)this + 0xe + 0)) & 1 != 0;
}
float& _Script_Engine::PostProcessSettings::get_FilmHealAmount() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
void _Script_Engine::PostProcessSettings::set_bOverride_AmbientOcclusionMipThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe + 0);
    *(uint8_t*)((uintptr_t)this + 0xe + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AmbientOcclusionTemporalBlendWeight() {
    return (*(uint8_t*)((uintptr_t)this + 0xe + 0)) & 4 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingAO() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingAOSamplesPerPixel() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_AutoExposureApplyPhysicalCameraExposure(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingAOIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 4 != 0;
}
float& _Script_Engine::PostProcessSettings::get_LensFlareIntensity() {
    return *(float*)((uintptr_t)this + 0x35c);
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingAOIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingAORadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 8 != 0;
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldSkyFocusDistance() {
    return *(float*)((uintptr_t)this + 0x4ac);
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingAORadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_Engine::PostProcessSettings::get_AutoExposureBiasBackup() {
    return *(float*)((uintptr_t)this + 0x318);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVDirectionalOcclusionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVDirectionalOcclusionRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::PostProcessSettings::get_AmbientCubemapIntensity() {
    return *(float*)((uintptr_t)this + 0x2f4);
}
float& _Script_Engine::PostProcessSettings::get_Bloom4Size() {
    return *(float*)((uintptr_t)this + 0x234);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVDiffuseOcclusionExponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 8 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVDiffuseOcclusionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 32 != 0;
}
float& _Script_Engine::PostProcessSettings::get_BloomThreshold() {
    return *(float*)((uintptr_t)this + 0x220);
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVDiffuseOcclusionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVSpecularOcclusionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 64 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVSpecularOcclusionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Engine::PostProcessSettings::get_Bloom6Tint() {
    return (void*)((uintptr_t)this + 0x290);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 128 != 0;
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionPower() {
    return *(float*)((uintptr_t)this + 0x428);
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVSecondaryOcclusionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVSecondaryOcclusionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PostProcessSettings::get_HistogramLogMax() {
    return *(float*)((uintptr_t)this + 0x354);
}
float& _Script_Engine::PostProcessSettings::get_Bloom6Size() {
    return *(float*)((uintptr_t)this + 0x23c);
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVSecondaryBounceIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVGeometryVolumeBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVGeometryVolumeBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::PostProcessSettings::get_Bloom5Tint() {
    return (void*)((uintptr_t)this + 0x280);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVVplInjectionBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVVplInjectionBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVEmissiveInjectionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVEmissiveInjectionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::PostProcessSettings::get_ColorGamma() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVFadeRange() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_LPVFadeRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::PostProcessSettings::get_ColorGammaShadows() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_LPVDirectionalOcclusionFadeRange() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 64 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_IndirectLightingColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 128 != 0;
}
float& _Script_Engine::PostProcessSettings::get_VignetteIntensity() {
    return *(float*)((uintptr_t)this + 0x400);
}
void* _Script_Engine::PostProcessSettings::get_ColorGammaHighlights() {
    return (void*)((uintptr_t)this + 0x140);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_IndirectLightingIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x16 + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_IndirectLightingIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16 + 0);
    *(uint8_t*)((uintptr_t)this + 0x16 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_ColorGradingLUT(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16 + 0);
    *(uint8_t*)((uintptr_t)this + 0x16 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingTranslucencySamplesPerPixel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionTemporalBlendWeight() {
    return *(float*)((uintptr_t)this + 0x440);
}
float& _Script_Engine::PostProcessSettings::get_LPVSize() {
    return *(float*)((uintptr_t)this + 0x4cc);
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldFocalDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16 + 0);
    *(uint8_t*)((uintptr_t)this + 0x16 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldFstop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16 + 0);
    *(uint8_t*)((uintptr_t)this + 0x16 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldMinFstop() {
    return (*(uint8_t*)((uintptr_t)this + 0x16 + 0)) & 32 != 0;
}
float& _Script_Engine::PostProcessSettings::get_BloomConvolutionPreFilterMin() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldMinFstop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16 + 0);
    *(uint8_t*)((uintptr_t)this + 0x16 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldBladeCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x16 + 0)) & 64 != 0;
}
int32_t& _Script_Engine::PostProcessSettings::get_MotionBlurTargetFPS() {
    return *(int32_t*)((uintptr_t)this + 0x4bc);
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldBladeCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16 + 0);
    *(uint8_t*)((uintptr_t)this + 0x16 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldSensorWidth() {
    return (*(uint8_t*)((uintptr_t)this + 0x16 + 0)) & 128 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldDepthBlurRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x17 + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingReflectionsMaxRoughness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldDepthBlurRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17 + 0);
    *(uint8_t*)((uintptr_t)this + 0x17 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldDepthBlurAmount() {
    return (*(uint8_t*)((uintptr_t)this + 0x17 + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldDepthBlurAmount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17 + 0);
    *(uint8_t*)((uintptr_t)this + 0x17 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionQuality() {
    return *(float*)((uintptr_t)this + 0x430);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldFocalRegion() {
    return (*(uint8_t*)((uintptr_t)this + 0x17 + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldFocalRegion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17 + 0);
    *(uint8_t*)((uintptr_t)this + 0x17 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldNearTransitionRegion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17 + 0);
    *(uint8_t*)((uintptr_t)this + 0x17 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldFarTransitionRegion() {
    return (*(uint8_t*)((uintptr_t)this + 0x17 + 0)) & 16 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_TranslucencyType() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 64 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldFarTransitionRegion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17 + 0);
    *(uint8_t*)((uintptr_t)this + 0x17 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x17 + 0)) & 32 != 0;
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldDepthBlurRadius() {
    return *(float*)((uintptr_t)this + 0x48c);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldNearBlurSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x17 + 0)) & 64 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldNearBlurSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17 + 0);
    *(uint8_t*)((uintptr_t)this + 0x17 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldFarBlurSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x17 + 0)) & 128 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldFarBlurSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17 + 0);
    *(uint8_t*)((uintptr_t)this + 0x17 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_MobileHQGaussian() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldSkyFocusDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::PostProcessSettings::get_LPVSecondaryBounceIntensity() {
    return *(float*)((uintptr_t)this + 0x4d4);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_DepthOfFieldVignetteSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_DepthOfFieldVignetteSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_MotionBlurAmount() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_MotionBlurAmount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingGISamplesPerPixel() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 64 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_MotionBlurMax() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_MotionBlurMax(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_MotionBlurTargetFPS() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 64 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_MotionBlurPerObjectSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 128 != 0;
}
float& _Script_Engine::PostProcessSettings::get_GrainJitter() {
    return *(float*)((uintptr_t)this + 0x404);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ScreenPercentage() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ScreenPercentage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::PostProcessSettings::get_RayTracingAOSamplesPerPixel() {
    return *(int32_t*)((uintptr_t)this + 0x448);
}
void _Script_Engine::PostProcessSettings::set_RayTracingTranslucencyRefraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x525 + 0);
    *(uint8_t*)((uintptr_t)this + 0x525 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ScreenSpaceReflectionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 2 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ScreenSpaceReflectionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::PostProcessSettings::set_AmbientOcclusionRadiusInWS(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x418 + 0);
    *(uint8_t*)((uintptr_t)this + 0x418 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PostProcessSettings::get_ScreenPercentage() {
    return *(float*)((uintptr_t)this + 0x538);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ScreenSpaceReflectionQuality() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 4 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ScreenSpaceReflectionMaxRoughness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ScreenSpaceReflectionRoughnessScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 16 != 0;
}
bool _Script_Engine::PostProcessSettings::get_bOverride_ReflectionsType() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_ReflectionsType(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingReflectionsMaxRoughness() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 2 != 0;
}
void* _Script_Engine::PostProcessSettings::get_FilmShadowTint() {
    return (void*)((uintptr_t)this + 0x1a8);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingReflectionsShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 16 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingReflectionsTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_Engine::PostProcessSettings::get_ExpandGamut() {
    return *(float*)((uintptr_t)this + 0x17c);
}
void _Script_Engine::PostProcessSettings::set_bOverride_TranslucencyType(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingTranslucencyMaxRoughness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingTranslucencyRefractionRays() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 1 != 0;
}
float& _Script_Engine::PostProcessSettings::get_RayTracingAORadius() {
    return *(float*)((uintptr_t)this + 0x450);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingTranslucencyRefraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 8 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingTranslucencyRefraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_Engine::Texture*& _Script_Engine::PostProcessSettings::get_BloomDirtMask() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x2c8);
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingGI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_RayTracingGIMaxBounces() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 32 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_RayTracingGIMaxBounces(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_PathTracingMaxBounces() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 128 != 0;
}
void _Script_Engine::PostProcessSettings::set_bOverride_PathTracingSamplesPerPixel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PostProcessSettings::get_bMobileHQGaussian() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void* _Script_Engine::PostProcessSettings::get_ColorContrast() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::PostProcessSettings::get_bOverride_AutoExposureBiasBackup() {
    return (*(uint8_t*)((uintptr_t)this + 0x31c + 0)) & 1 != 0;
}
void* _Script_Engine::PostProcessSettings::get_ColorOffset() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldFocalRegion() {
    return *(float*)((uintptr_t)this + 0x490);
}
float& _Script_Engine::PostProcessSettings::get_FilmSlope() {
    return *(float*)((uintptr_t)this + 0x184);
}
void* _Script_Engine::PostProcessSettings::get_ColorSaturationShadows() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::PostProcessSettings::get_ColorGainShadows() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::PostProcessSettings::get_ColorSaturationMidtones() {
    return (void*)((uintptr_t)this + 0xd0);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldFarBlurSize() {
    return *(float*)((uintptr_t)this + 0x4a4);
}
void* _Script_Engine::PostProcessSettings::get_FilmChannelMixerGreen() {
    return (void*)((uintptr_t)this + 0x1d4);
}
float& _Script_Engine::PostProcessSettings::get_BlueCorrection() {
    return *(float*)((uintptr_t)this + 0x178);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldNearTransitionRegion() {
    return *(float*)((uintptr_t)this + 0x494);
}
float& _Script_Engine::PostProcessSettings::get_ToneCurveAmount() {
    return *(float*)((uintptr_t)this + 0x180);
}
float& _Script_Engine::PostProcessSettings::get_FilmToe() {
    return *(float*)((uintptr_t)this + 0x188);
}
float& _Script_Engine::PostProcessSettings::get_CameraISO() {
    return *(float*)((uintptr_t)this + 0x304);
}
float& _Script_Engine::PostProcessSettings::get_LPVFadeRange() {
    return *(float*)((uintptr_t)this + 0x530);
}
float& _Script_Engine::PostProcessSettings::get_FilmShoulder() {
    return *(float*)((uintptr_t)this + 0x18c);
}
float& _Script_Engine::PostProcessSettings::get_LPVSecondaryOcclusionIntensity() {
    return *(float*)((uintptr_t)this + 0x4d0);
}
float& _Script_Engine::PostProcessSettings::get_FilmBlackClip() {
    return *(float*)((uintptr_t)this + 0x190);
}
void* _Script_Engine::PostProcessSettings::get_WeightedBlendables() {
    return (void*)((uintptr_t)this + 0x540);
}
float& _Script_Engine::PostProcessSettings::get_FilmShadowTintBlend() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldNearBlurSize() {
    return *(float*)((uintptr_t)this + 0x4a0);
}
float& _Script_Engine::PostProcessSettings::get_FilmShadowTintAmount() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
void* _Script_Engine::PostProcessSettings::get_FilmChannelMixerRed() {
    return (void*)((uintptr_t)this + 0x1c4);
}
float& _Script_Engine::PostProcessSettings::get_FilmToeAmount() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
float& _Script_Engine::PostProcessSettings::get_Bloom1Size() {
    return *(float*)((uintptr_t)this + 0x228);
}
float& _Script_Engine::PostProcessSettings::get_Bloom3Size() {
    return *(float*)((uintptr_t)this + 0x230);
}
float& _Script_Engine::PostProcessSettings::get_Bloom5Size() {
    return *(float*)((uintptr_t)this + 0x238);
}
void* _Script_Engine::PostProcessSettings::get_Bloom1Tint() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_Engine::PostProcessSettings::get_Bloom2Tint() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_Engine::PostProcessSettings::get_Bloom3Tint() {
    return (void*)((uintptr_t)this + 0x260);
}
bool _Script_Engine::PostProcessSettings::get_RayTracingAO() {
    return (*(uint8_t*)((uintptr_t)this + 0x444 + 0)) & 1 != 0;
}
float& _Script_Engine::PostProcessSettings::get_BloomConvolutionSize() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
_Script_Engine::Texture2D*& _Script_Engine::PostProcessSettings::get_BloomConvolutionTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x2a8);
}
void* _Script_Engine::PostProcessSettings::get_BloomConvolutionCenterUV() {
    return (void*)((uintptr_t)this + 0x2b0);
}
float& _Script_Engine::PostProcessSettings::get_BloomConvolutionPreFilterMax() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldFocalDistance() {
    return *(float*)((uintptr_t)this + 0x484);
}
float& _Script_Engine::PostProcessSettings::get_BloomConvolutionPreFilterMult() {
    return *(float*)((uintptr_t)this + 0x2c0);
}
float& _Script_Engine::PostProcessSettings::get_BloomDirtMaskIntensity() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
void* _Script_Engine::PostProcessSettings::get_BloomDirtMaskTint() {
    return (void*)((uintptr_t)this + 0x2d4);
}
void* _Script_Engine::PostProcessSettings::get_AmbientCubemapTint() {
    return (void*)((uintptr_t)this + 0x2e4);
}
float& _Script_Engine::PostProcessSettings::get_CameraShutterSpeed() {
    return *(float*)((uintptr_t)this + 0x300);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldFstop() {
    return *(float*)((uintptr_t)this + 0x308);
}
int32_t& _Script_Engine::PostProcessSettings::get_DepthOfFieldBladeCount() {
    return *(int32_t*)((uintptr_t)this + 0x310);
}
float& _Script_Engine::PostProcessSettings::get_AutoExposureBias() {
    return *(float*)((uintptr_t)this + 0x314);
}
bool _Script_Engine::PostProcessSettings::get_AutoExposureApplyPhysicalCameraExposure() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 1 != 0;
}
_Script_Engine::CurveFloat*& _Script_Engine::PostProcessSettings::get_AutoExposureBiasCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x328);
}
_Script_Engine::Texture*& _Script_Engine::PostProcessSettings::get_AutoExposureMeterMask() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x330);
}
float& _Script_Engine::PostProcessSettings::get_AutoExposureMinBrightness() {
    return *(float*)((uintptr_t)this + 0x340);
}
float& _Script_Engine::PostProcessSettings::get_AutoExposureSpeedDown() {
    return *(float*)((uintptr_t)this + 0x34c);
}
float& _Script_Engine::PostProcessSettings::get_HistogramLogMin() {
    return *(float*)((uintptr_t)this + 0x350);
}
void* _Script_Engine::PostProcessSettings::get_LensFlareTint() {
    return (void*)((uintptr_t)this + 0x360);
}
float& _Script_Engine::PostProcessSettings::get_LensFlareBokehSize() {
    return *(float*)((uintptr_t)this + 0x370);
}
float& _Script_Engine::PostProcessSettings::get_LensFlareThreshold() {
    return *(float*)((uintptr_t)this + 0x374);
}
_Script_Engine::Texture*& _Script_Engine::PostProcessSettings::get_LensFlareBokehShape() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x378);
}
void* _Script_Engine::PostProcessSettings::get_LensFlareTints() {
    return (void*)((uintptr_t)this + 0x380);
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionIntensity() {
    return *(float*)((uintptr_t)this + 0x40c);
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionRadius() {
    return *(float*)((uintptr_t)this + 0x414);
}
bool _Script_Engine::PostProcessSettings::get_AmbientOcclusionRadiusInWS() {
    return (*(uint8_t*)((uintptr_t)this + 0x418 + 0)) & 1 != 0;
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionDistance() {
    return *(float*)((uintptr_t)this + 0x424);
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionBias() {
    return *(float*)((uintptr_t)this + 0x42c);
}
float& _Script_Engine::PostProcessSettings::get_AmbientOcclusionMipThreshold() {
    return *(float*)((uintptr_t)this + 0x43c);
}
void _Script_Engine::PostProcessSettings::set_RayTracingAO(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x444 + 0);
    *(uint8_t*)((uintptr_t)this + 0x444 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PostProcessSettings::get_RayTracingAOIntensity() {
    return *(float*)((uintptr_t)this + 0x44c);
}
float& _Script_Engine::PostProcessSettings::get_IndirectLightingIntensity() {
    return *(float*)((uintptr_t)this + 0x464);
}
int32_t& _Script_Engine::PostProcessSettings::get_RayTracingGIMaxBounces() {
    return *(int32_t*)((uintptr_t)this + 0x46c);
}
int32_t& _Script_Engine::PostProcessSettings::get_RayTracingGISamplesPerPixel() {
    return *(int32_t*)((uintptr_t)this + 0x470);
}
float& _Script_Engine::PostProcessSettings::get_ColorGradingIntensity() {
    return *(float*)((uintptr_t)this + 0x474);
}
_Script_Engine::Texture*& _Script_Engine::PostProcessSettings::get_ColorGradingLUT() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x478);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldSensorWidth() {
    return *(float*)((uintptr_t)this + 0x480);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldFarTransitionRegion() {
    return *(float*)((uintptr_t)this + 0x498);
}
float& _Script_Engine::PostProcessSettings::get_DepthOfFieldScale() {
    return *(float*)((uintptr_t)this + 0x49c);
}
float& _Script_Engine::PostProcessSettings::get_MotionBlurAmount() {
    return *(float*)((uintptr_t)this + 0x4b4);
}
float& _Script_Engine::PostProcessSettings::get_MotionBlurMax() {
    return *(float*)((uintptr_t)this + 0x4b8);
}
float& _Script_Engine::PostProcessSettings::get_MotionBlurPerObjectSize() {
    return *(float*)((uintptr_t)this + 0x4c0);
}
float& _Script_Engine::PostProcessSettings::get_LPVIntensity() {
    return *(float*)((uintptr_t)this + 0x4c4);
}
float& _Script_Engine::PostProcessSettings::get_LPVGeometryVolumeBias() {
    return *(float*)((uintptr_t)this + 0x4d8);
}
float& _Script_Engine::PostProcessSettings::get_LPVEmissiveInjectionIntensity() {
    return *(float*)((uintptr_t)this + 0x4dc);
}
float& _Script_Engine::PostProcessSettings::get_LPVDirectionalOcclusionIntensity() {
    return *(float*)((uintptr_t)this + 0x4e0);
}
float& _Script_Engine::PostProcessSettings::get_LPVDirectionalOcclusionRadius() {
    return *(float*)((uintptr_t)this + 0x4e4);
}
float& _Script_Engine::PostProcessSettings::get_LPVSpecularOcclusionExponent() {
    return *(float*)((uintptr_t)this + 0x4ec);
}
float& _Script_Engine::PostProcessSettings::get_LPVDiffuseOcclusionIntensity() {
    return *(float*)((uintptr_t)this + 0x4f0);
}
float& _Script_Engine::PostProcessSettings::get_LPVSpecularOcclusionIntensity() {
    return *(float*)((uintptr_t)this + 0x4f4);
}
void* _Script_Engine::PostProcessSettings::get_ReflectionsType() {
    return (void*)((uintptr_t)this + 0x4f8);
}
float& _Script_Engine::PostProcessSettings::get_ScreenSpaceReflectionIntensity() {
    return *(float*)((uintptr_t)this + 0x4fc);
}
float& _Script_Engine::PostProcessSettings::get_ScreenSpaceReflectionQuality() {
    return *(float*)((uintptr_t)this + 0x500);
}
float& _Script_Engine::PostProcessSettings::get_ScreenSpaceReflectionMaxRoughness() {
    return *(float*)((uintptr_t)this + 0x504);
}
float& _Script_Engine::PostProcessSettings::get_RayTracingReflectionsMaxRoughness() {
    return *(float*)((uintptr_t)this + 0x508);
}
int32_t& _Script_Engine::PostProcessSettings::get_RayTracingReflectionsMaxBounces() {
    return *(int32_t*)((uintptr_t)this + 0x50c);
}
void* _Script_Engine::PostProcessSettings::get_RayTracingReflectionsShadows() {
    return (void*)((uintptr_t)this + 0x514);
}
bool _Script_Engine::PostProcessSettings::get_RayTracingReflectionsTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x515 + 0)) & 1 != 0;
}
void* _Script_Engine::PostProcessSettings::get_TranslucencyType() {
    return (void*)((uintptr_t)this + 0x516);
}
float& _Script_Engine::PostProcessSettings::get_RayTracingTranslucencyMaxRoughness() {
    return *(float*)((uintptr_t)this + 0x518);
}
int32_t& _Script_Engine::PostProcessSettings::get_RayTracingTranslucencyRefractionRays() {
    return *(int32_t*)((uintptr_t)this + 0x51c);
}
int32_t& _Script_Engine::PostProcessSettings::get_RayTracingTranslucencySamplesPerPixel() {
    return *(int32_t*)((uintptr_t)this + 0x520);
}
void* _Script_Engine::PostProcessSettings::get_RayTracingTranslucencyShadows() {
    return (void*)((uintptr_t)this + 0x524);
}
bool _Script_Engine::PostProcessSettings::get_RayTracingTranslucencyRefraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x525 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::PostProcessSettings::get_PathTracingMaxBounces() {
    return *(int32_t*)((uintptr_t)this + 0x528);
}
int32_t& _Script_Engine::PostProcessSettings::get_PathTracingSamplesPerPixel() {
    return *(int32_t*)((uintptr_t)this + 0x52c);
}
_Script_CoreUObject::Class* _Script_Engine::PostProcessSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PostProcessSettings");
    return result;
}
