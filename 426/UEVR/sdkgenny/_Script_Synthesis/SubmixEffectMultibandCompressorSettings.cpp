#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubmixEffectMultibandCompressorSettings.hpp"
void* _Script_Synthesis::SubmixEffectMultibandCompressorSettings::get_DynamicsProcessorType() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Synthesis::SubmixEffectMultibandCompressorSettings::set_bAnalogMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Synthesis::SubmixEffectMultibandCompressorSettings::get_PeakMode() {
    return (void*)((uintptr_t)this + 0x1);
}
bool _Script_Synthesis::SubmixEffectMultibandCompressorSettings::get_bFourPole() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
float& _Script_Synthesis::SubmixEffectMultibandCompressorSettings::get_LookAheadMsec() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_Synthesis::SubmixEffectMultibandCompressorSettings::get_bLinkChannels() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Synthesis::SubmixEffectMultibandCompressorSettings::set_bLinkChannels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Synthesis::SubmixEffectMultibandCompressorSettings::get_bAnalogMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_Synthesis::SubmixEffectMultibandCompressorSettings::set_bFourPole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Synthesis::SubmixEffectMultibandCompressorSettings::get_Bands() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectMultibandCompressorSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SubmixEffectMultibandCompressorSettings");
    return result;
}
