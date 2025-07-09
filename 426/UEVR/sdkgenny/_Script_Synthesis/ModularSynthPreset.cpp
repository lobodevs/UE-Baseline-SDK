#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "ModularSynthPreset.hpp"
void* _Script_Synthesis::ModularSynthPreset::get_LFO2Mode() {
    return (void*)((uintptr_t)this + 0x61);
}
bool _Script_Synthesis::ModularSynthPreset::get_bEnablePolyphony() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
float& _Script_Synthesis::ModularSynthPreset::get_Osc1Semitones() {
    return *(float*)((uintptr_t)this + 0x18);
}
void _Script_Synthesis::ModularSynthPreset::set_bEnablePolyphony(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Synthesis::ModularSynthPreset::get_ReleaseTime() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_Synthesis::ModularSynthPreset::get_Osc1Type() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Synthesis::ModularSynthPreset::get_Osc1Cents() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Synthesis::ModularSynthPreset::get_Osc1Gain() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Synthesis::ModularSynthPreset::get_Osc1Octave() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Synthesis::ModularSynthPreset::get_Osc1PulseWidth() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Synthesis::ModularSynthPreset::get_Osc2Type() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_Synthesis::ModularSynthPreset::get_StereoDelayFeedback() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_Synthesis::ModularSynthPreset::get_Osc2Gain() {
    return *(float*)((uintptr_t)this + 0x28);
}
void _Script_Synthesis::ModularSynthPreset::set_bChorusEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Synthesis::ModularSynthPreset::get_Osc2Octave() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Synthesis::ModularSynthPreset::get_Osc2Semitones() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_Synthesis::ModularSynthPreset::get_Osc2Cents() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Synthesis::ModularSynthPreset::get_Osc2PulseWidth() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Synthesis::ModularSynthPreset::get_Portamento() {
    return *(float*)((uintptr_t)this + 0x3c);
}
bool _Script_Synthesis::ModularSynthPreset::get_bEnableUnison() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_Synthesis::ModularSynthPreset::set_bStereoDelayEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Synthesis::ModularSynthPreset::set_bEnableUnison(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Synthesis::ModularSynthPreset::get_bEnableOscillatorSync() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 2 != 0;
}
void _Script_Synthesis::ModularSynthPreset::set_bEnableOscillatorSync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Synthesis::ModularSynthPreset::get_Spread() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Synthesis::ModularSynthPreset::get_Pan() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Synthesis::ModularSynthPreset::get_LFO1Frequency() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_Synthesis::ModularSynthPreset::get_LFO1Gain() {
    return *(float*)((uintptr_t)this + 0x50);
}
void _Script_Synthesis::ModularSynthPreset::set_bLegato(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Synthesis::ModularSynthPreset::get_LFO1Type() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Synthesis::ModularSynthPreset::get_LFO1Mode() {
    return (void*)((uintptr_t)this + 0x55);
}
void* _Script_Synthesis::ModularSynthPreset::get_LFO1PatchType() {
    return (void*)((uintptr_t)this + 0x56);
}
float& _Script_Synthesis::ModularSynthPreset::get_LFO2Frequency() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_Synthesis::ModularSynthPreset::get_LFO2Gain() {
    return *(float*)((uintptr_t)this + 0x5c);
}
void* _Script_Synthesis::ModularSynthPreset::get_StereoDelayMode() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Synthesis::ModularSynthPreset::get_LFO2Type() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_Synthesis::ModularSynthPreset::get_StereoDelayRatio() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void* _Script_Synthesis::ModularSynthPreset::get_LFO2PatchType() {
    return (void*)((uintptr_t)this + 0x62);
}
float& _Script_Synthesis::ModularSynthPreset::get_GainDb() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_Synthesis::ModularSynthPreset::get_AttackTime() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Synthesis::ModularSynthPreset::get_DecayTime() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_Synthesis::ModularSynthPreset::get_SustainGain() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_Synthesis::ModularSynthPreset::get_ModEnvPatchType() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Synthesis::ModularSynthPreset::get_ModEnvBiasPatchType() {
    return (void*)((uintptr_t)this + 0x79);
}
bool _Script_Synthesis::ModularSynthPreset::get_bChorusEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
bool _Script_Synthesis::ModularSynthPreset::get_bInvertModulationEnvelope() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
void _Script_Synthesis::ModularSynthPreset::set_bInvertModulationEnvelope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Synthesis::ModularSynthPreset::get_bInvertModulationEnvelopeBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 2 != 0;
}
void _Script_Synthesis::ModularSynthPreset::set_bInvertModulationEnvelopeBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Synthesis::ModularSynthPreset::get_ModulationEnvelopeDepth() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_Synthesis::ModularSynthPreset::get_ModulationEnvelopeAttackTime() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_Synthesis::ModularSynthPreset::get_ModulationEnvelopeDecayTime() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_Synthesis::ModularSynthPreset::get_FilterQ() {
    return *(float*)((uintptr_t)this + 0x9c);
}
float& _Script_Synthesis::ModularSynthPreset::get_ModulationEnvelopeSustainGain() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_Synthesis::ModularSynthPreset::get_ModulationEnvelopeReleaseTime() {
    return *(float*)((uintptr_t)this + 0x90);
}
bool _Script_Synthesis::ModularSynthPreset::get_bLegato() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
bool _Script_Synthesis::ModularSynthPreset::get_bRetrigger() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 2 != 0;
}
void _Script_Synthesis::ModularSynthPreset::set_bRetrigger(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Synthesis::ModularSynthPreset::get_FilterFrequency() {
    return *(float*)((uintptr_t)this + 0x98);
}
void* _Script_Synthesis::ModularSynthPreset::get_FilterType() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Synthesis::ModularSynthPreset::get_FilterAlgorithm() {
    return (void*)((uintptr_t)this + 0xa1);
}
bool _Script_Synthesis::ModularSynthPreset::get_bStereoDelayEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
float& _Script_Synthesis::ModularSynthPreset::get_StereoDelayTime() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_Synthesis::ModularSynthPreset::get_StereoDelayWetlevel() {
    return *(float*)((uintptr_t)this + 0xb4);
}
float& _Script_Synthesis::ModularSynthPreset::get_ChorusDepth() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_Synthesis::ModularSynthPreset::get_ChorusFeedback() {
    return *(float*)((uintptr_t)this + 0xc4);
}
float& _Script_Synthesis::ModularSynthPreset::get_ChorusFrequency() {
    return *(float*)((uintptr_t)this + 0xc8);
}
void* _Script_Synthesis::ModularSynthPreset::get_Patches() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_Synthesis::ModularSynthPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.ModularSynthPreset");
    return result;
}
