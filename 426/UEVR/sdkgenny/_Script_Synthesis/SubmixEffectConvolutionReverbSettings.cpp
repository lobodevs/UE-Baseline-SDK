#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioImpulseResponse.hpp"
#include "SubmixEffectConvolutionReverbSettings.hpp"
float& _Script_Synthesis::SubmixEffectConvolutionReverbSettings::get_NormalizationVolumeDb() {
    return *(float*)((uintptr_t)this + 0x0);
}
bool _Script_Synthesis::SubmixEffectConvolutionReverbSettings::get_bBypass() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_Synthesis::SubmixEffectConvolutionReverbSettings::set_bBypass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Synthesis::SubmixEffectConvolutionReverbSettings::set_bMixReverbOutputToOutputChannelFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Synthesis::SubmixEffectConvolutionReverbSettings::set_bMixInputChannelFormatToImpulseResponseFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Synthesis::SubmixEffectConvolutionReverbSettings::get_bMixInputChannelFormatToImpulseResponseFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 1 != 0;
}
bool _Script_Synthesis::SubmixEffectConvolutionReverbSettings::get_bMixReverbOutputToOutputChannelFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 1 != 0;
}
float& _Script_Synthesis::SubmixEffectConvolutionReverbSettings::get_SurroundRearChannelBleedDb() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_Synthesis::SubmixEffectConvolutionReverbSettings::get_bInvertRearChannelBleedPhase() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_Synthesis::SubmixEffectConvolutionReverbSettings::set_bInvertRearChannelBleedPhase(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Synthesis::SubmixEffectConvolutionReverbSettings::get_bSurroundRearChannelFlip() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 1 != 0;
}
void _Script_Synthesis::SubmixEffectConvolutionReverbSettings::set_bSurroundRearChannelFlip(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Synthesis::SubmixEffectConvolutionReverbSettings::get_SurroundRearChannelBleedAmount() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_Synthesis::AudioImpulseResponse*& _Script_Synthesis::SubmixEffectConvolutionReverbSettings::get_ImpulseResponse() {
    return *(_Script_Synthesis::AudioImpulseResponse**)((uintptr_t)this + 0x18);
}
bool _Script_Synthesis::SubmixEffectConvolutionReverbSettings::get_AllowHArdwareAcceleration() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_Synthesis::SubmixEffectConvolutionReverbSettings::set_AllowHArdwareAcceleration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectConvolutionReverbSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SubmixEffectConvolutionReverbSettings");
    return result;
}
