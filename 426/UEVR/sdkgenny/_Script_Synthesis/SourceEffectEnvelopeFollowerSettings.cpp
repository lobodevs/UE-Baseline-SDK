#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectEnvelopeFollowerSettings.hpp"
float& _Script_Synthesis::SourceEffectEnvelopeFollowerSettings::get_AttackTime() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SourceEffectEnvelopeFollowerSettings::get_ReleaseTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_Synthesis::SourceEffectEnvelopeFollowerSettings::set_bIsAnalogMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Synthesis::SourceEffectEnvelopeFollowerSettings::get_PeakMode() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Synthesis::SourceEffectEnvelopeFollowerSettings::get_bIsAnalogMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectEnvelopeFollowerSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings");
    return result;
}
