#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BaseAttenuationSettings.hpp"
#include "SoundAttenuationSettings.hpp"
void _Script_Engine::SoundAttenuationSettings::set_bEnableListenerFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusDistanceScale() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
bool _Script_Engine::SoundAttenuationSettings::get_bAttenuate() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void* _Script_Engine::SoundAttenuationSettings::get_SpatializationAlgorithm() {
    return (void*)((uintptr_t)this + 0xb2);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableListenerFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 8 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bAttenuate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_OmniRadius() {
    return *(float*)((uintptr_t)this + 0xbc);
}
bool _Script_Engine::SoundAttenuationSettings::get_bSpatialize() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 2 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bSpatialize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_HPFFrequencyAtMin() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
bool _Script_Engine::SoundAttenuationSettings::get_bAttenuateWithLPF() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 4 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bAttenuateWithLPF(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableFocusInterpolation() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 16 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableFocusInterpolation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 32 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bUseComplexCollisionForOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 64 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bUseComplexCollisionForOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_OcclusionLowPassFilterFrequency() {
    return *(float*)((uintptr_t)this + 0x218);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableReverbSend() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 128 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableReverbSend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnablePriorityAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 1 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnablePriorityAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_PriorityAttenuationMin() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bApplyNormalizationToStereoSounds() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 2 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bApplyNormalizationToStereoSounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_OcclusionInterpolationTime() {
    return *(float*)((uintptr_t)this + 0x220);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableLogFrequencyScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 4 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableLogFrequencyScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableSubmixSends() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 8 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableSubmixSends(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::SoundAttenuationSettings::get_CustomReverbSendCurve() {
    return (void*)((uintptr_t)this + 0x238);
}
float& _Script_Engine::SoundAttenuationSettings::get_BinauralRadius() {
    return *(float*)((uintptr_t)this + 0xb4);
}
void* _Script_Engine::SoundAttenuationSettings::get_AbsorptionMethod() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::SoundAttenuationSettings::get_OcclusionTraceChannel() {
    return (void*)((uintptr_t)this + 0xb9);
}
void* _Script_Engine::SoundAttenuationSettings::get_ReverbSendMethod() {
    return (void*)((uintptr_t)this + 0xba);
}
void* _Script_Engine::SoundAttenuationSettings::get_PriorityAttenuationMethod() {
    return (void*)((uintptr_t)this + 0xbb);
}
float& _Script_Engine::SoundAttenuationSettings::get_StereoSpread() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFRadiusMin() {
    return *(float*)((uintptr_t)this + 0xc4);
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFRadiusMax() {
    return *(float*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::SoundAttenuationSettings::get_CustomLowpassAirAbsorptionCurve() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::SoundAttenuationSettings::get_CustomHighpassAirAbsorptionCurve() {
    return (void*)((uintptr_t)this + 0x158);
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFFrequencyAtMin() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbDistanceMin() {
    return *(float*)((uintptr_t)this + 0x22c);
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFFrequencyAtMax() {
    return *(float*)((uintptr_t)this + 0x1e4);
}
float& _Script_Engine::SoundAttenuationSettings::get_HPFFrequencyAtMax() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusDistanceScale() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusAzimuth() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusAzimuth() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusPriorityScale() {
    return *(float*)((uintptr_t)this + 0x200);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusPriorityScale() {
    return *(float*)((uintptr_t)this + 0x204);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusVolumeAttenuation() {
    return *(float*)((uintptr_t)this + 0x208);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusVolumeAttenuation() {
    return *(float*)((uintptr_t)this + 0x20c);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusAttackInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x210);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusReleaseInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x214);
}
float& _Script_Engine::SoundAttenuationSettings::get_OcclusionVolumeAttenuation() {
    return *(float*)((uintptr_t)this + 0x21c);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbWetLevelMin() {
    return *(float*)((uintptr_t)this + 0x224);
}
float& _Script_Engine::SoundAttenuationSettings::get_PriorityAttenuationDistanceMin() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbWetLevelMax() {
    return *(float*)((uintptr_t)this + 0x228);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbDistanceMax() {
    return *(float*)((uintptr_t)this + 0x230);
}
float& _Script_Engine::SoundAttenuationSettings::get_ManualReverbSendLevel() {
    return *(float*)((uintptr_t)this + 0x234);
}
void* _Script_Engine::SoundAttenuationSettings::get_SubmixSendSettings() {
    return (void*)((uintptr_t)this + 0x2c0);
}
float& _Script_Engine::SoundAttenuationSettings::get_PriorityAttenuationMax() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
float& _Script_Engine::SoundAttenuationSettings::get_PriorityAttenuationDistanceMax() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
float& _Script_Engine::SoundAttenuationSettings::get_ManualPriorityAttenuation() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
void* _Script_Engine::SoundAttenuationSettings::get_CustomPriorityAttenuationCurve() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void* _Script_Engine::SoundAttenuationSettings::get_PluginSettings() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_CoreUObject::Class* _Script_Engine::SoundAttenuationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundAttenuationSettings");
    return result;
}
