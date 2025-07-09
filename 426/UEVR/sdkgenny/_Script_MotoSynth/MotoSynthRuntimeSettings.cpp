#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MotoSynthRuntimeSettings.hpp"
#include "MotoSynthSource.hpp"
bool _Script_MotoSynth::MotoSynthRuntimeSettings::get_bSynthToneEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
int32_t& _Script_MotoSynth::MotoSynthRuntimeSettings::get_SynthOctaveShift() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void _Script_MotoSynth::MotoSynthRuntimeSettings::set_bSynthToneEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_SynthToneVolume() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_StereoWidenerFilterFrequency() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_SynthToneFilterFrequency() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_MotoSynth::MotoSynthRuntimeSettings::get_bGranularEngineEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_MotoSynth::MotoSynthRuntimeSettings::set_bGranularEngineEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MotoSynth::MotoSynthRuntimeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MotoSynth.MotoSynthRuntimeSettings");
    return result;
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_GranularEngineVolume() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_GranularEnginePitchScale() {
    return *(float*)((uintptr_t)this + 0x18);
}
int32_t& _Script_MotoSynth::MotoSynthRuntimeSettings::get_NumSamplesToCrossfadeBetweenGrains() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_MotoSynth::MotoSynthRuntimeSettings::get_NumGrainTableEntriesPerGrain() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_MotoSynth::MotoSynthRuntimeSettings::get_GrainTableRandomOffsetForConstantRPMs() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
int32_t& _Script_MotoSynth::MotoSynthRuntimeSettings::get_GrainCrossfadeSamplesForConstantRPMs() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_MotoSynth::MotoSynthSource*& _Script_MotoSynth::MotoSynthRuntimeSettings::get_AccelerationSource() {
    return *(_Script_MotoSynth::MotoSynthSource**)((uintptr_t)this + 0x30);
}
_Script_MotoSynth::MotoSynthSource*& _Script_MotoSynth::MotoSynthRuntimeSettings::get_DecelerationSource() {
    return *(_Script_MotoSynth::MotoSynthSource**)((uintptr_t)this + 0x38);
}
bool _Script_MotoSynth::MotoSynthRuntimeSettings::get_bStereoWidenerEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_MotoSynth::MotoSynthRuntimeSettings::set_bStereoWidenerEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_StereoDelayMsec() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_StereoFeedback() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_StereoWidenerWetlevel() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_StereoWidenerDryLevel() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_StereoWidenerDelayRatio() {
    return *(float*)((uintptr_t)this + 0x54);
}
bool _Script_MotoSynth::MotoSynthRuntimeSettings::get_bStereoWidenerFilterEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_MotoSynth::MotoSynthRuntimeSettings::set_bStereoWidenerFilterEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_MotoSynth::MotoSynthRuntimeSettings::get_StereoWidenerFilterQ() {
    return *(float*)((uintptr_t)this + 0x60);
}
