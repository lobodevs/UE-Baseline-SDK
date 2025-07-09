#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MotoSynthSource.hpp"
void* _Script_MotoSynth::MotoSynthSource::get_SourceDataPCM() {
    return (void*)((uintptr_t)this + 0xc8);
}
void _Script_MotoSynth::MotoSynthSource::set_bConvertTo8Bit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MotoSynth::MotoSynthSource::get_bConvertTo8Bit() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_MotoSynth::MotoSynthSource::get_RPMCurve() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_MotoSynth::MotoSynthSource::get_DownSampleFactor() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_MotoSynth::MotoSynthSource::get_SourceData() {
    return (void*)((uintptr_t)this + 0xb8);
}
int32_t& _Script_MotoSynth::MotoSynthSource::get_SourceSampleRate() {
    return *(int32_t*)((uintptr_t)this + 0xd8);
}
void* _Script_MotoSynth::MotoSynthSource::get_GrainTable() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_MotoSynth::MotoSynthSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MotoSynth.MotoSynthSource");
    return result;
}
