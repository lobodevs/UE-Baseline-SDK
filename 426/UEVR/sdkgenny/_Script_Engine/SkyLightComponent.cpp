#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "LightComponentBase.hpp"
#include "SkyLightComponent.hpp"
#include "TextureCube.hpp"
void _Script_Engine::SkyLightComponent::SetOcclusionContrast(float InOcclusionContrast) {
    return;
}
bool _Script_Engine::SkyLightComponent::get_bRealTimeCapture() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
_Script_Engine::TextureCube*& _Script_Engine::SkyLightComponent::get_Cubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x230);
}
void _Script_Engine::SkyLightComponent::set_bRealTimeCapture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SkyLightComponent::get_SourceType() {
    return (void*)((uintptr_t)this + 0x229);
}
float& _Script_Engine::SkyLightComponent::get_SourceCubemapAngle() {
    return *(float*)((uintptr_t)this + 0x238);
}
float& _Script_Engine::SkyLightComponent::get_OcclusionMaxDistance() {
    return *(float*)((uintptr_t)this + 0x258);
}
bool _Script_Engine::SkyLightComponent::get_bCaptureEmissiveOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::SkyLightComponent::get_CubemapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x23c);
}
void _Script_Engine::SkyLightComponent::SetLowerHemisphereColor(_Script_CoreUObject::LinearColor& InLowerHemisphereColor) {
    return;
}
float& _Script_Engine::SkyLightComponent::get_SkyDistanceThreshold() {
    return *(float*)((uintptr_t)this + 0x240);
}
void _Script_Engine::SkyLightComponent::set_bCaptureEmissiveOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SkyLightComponent::get_OcclusionCombineMode() {
    return (void*)((uintptr_t)this + 0x280);
}
bool _Script_Engine::SkyLightComponent::get_bLowerHemisphereIsBlack() {
    return (*(uint8_t*)((uintptr_t)this + 0x245 + 0)) & 1 != 0;
}
void _Script_Engine::SkyLightComponent::set_bLowerHemisphereIsBlack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x245 + 0);
    *(uint8_t*)((uintptr_t)this + 0x245 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SkyLightComponent::get_LowerHemisphereColor() {
    return (void*)((uintptr_t)this + 0x248);
}
float& _Script_Engine::SkyLightComponent::get_Contrast() {
    return *(float*)((uintptr_t)this + 0x25c);
}
void _Script_Engine::SkyLightComponent::SetVolumetricScatteringIntensity(float NewIntensity) {
    return;
}
float& _Script_Engine::SkyLightComponent::get_OcclusionExponent() {
    return *(float*)((uintptr_t)this + 0x260);
}
float& _Script_Engine::SkyLightComponent::get_MinOcclusion() {
    return *(float*)((uintptr_t)this + 0x264);
}
void* _Script_Engine::SkyLightComponent::get_OcclusionTint() {
    return (void*)((uintptr_t)this + 0x268);
}
bool _Script_Engine::SkyLightComponent::get_bCloudAmbientOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x26c + 0)) & 1 != 0;
}
void _Script_Engine::SkyLightComponent::set_bCloudAmbientOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26c + 0);
    *(uint8_t*)((uintptr_t)this + 0x26c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SkyLightComponent::get_CloudAmbientOcclusionStrength() {
    return *(float*)((uintptr_t)this + 0x270);
}
void _Script_Engine::SkyLightComponent::SetLightColor(_Script_CoreUObject::LinearColor NewLightColor) {
    return;
}
float& _Script_Engine::SkyLightComponent::get_CloudAmbientOcclusionExtent() {
    return *(float*)((uintptr_t)this + 0x274);
}
float& _Script_Engine::SkyLightComponent::get_CloudAmbientOcclusionMapResolutionScale() {
    return *(float*)((uintptr_t)this + 0x278);
}
void _Script_Engine::SkyLightComponent::RecaptureSky() {
    return;
}
float& _Script_Engine::SkyLightComponent::get_CloudAmbientOcclusionApertureScale() {
    return *(float*)((uintptr_t)this + 0x27c);
}
_Script_Engine::TextureCube*& _Script_Engine::SkyLightComponent::get_BlendDestinationCubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x338);
}
_Script_CoreUObject::Class* _Script_Engine::SkyLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkyLightComponent");
    return result;
}
void _Script_Engine::SkyLightComponent::SetOcclusionTint(_Script_CoreUObject::Color& InTint) {
    return;
}
void _Script_Engine::SkyLightComponent::SetOcclusionExponent(float InOcclusionExponent) {
    return;
}
void _Script_Engine::SkyLightComponent::SetMinOcclusion(float InMinOcclusion) {
    return;
}
void _Script_Engine::SkyLightComponent::SetIntensity(float NewIntensity) {
    return;
}
void _Script_Engine::SkyLightComponent::SetIndirectLightingIntensity(float NewIntensity) {
    return;
}
void _Script_Engine::SkyLightComponent::SetCubemapBlend(_Script_Engine::TextureCube* SourceCubemap, _Script_Engine::TextureCube* DestinationCubemap, float InBlendFraction) {
    return;
}
void _Script_Engine::SkyLightComponent::SetCubemap(_Script_Engine::TextureCube* NewCubemap) {
    return;
}
