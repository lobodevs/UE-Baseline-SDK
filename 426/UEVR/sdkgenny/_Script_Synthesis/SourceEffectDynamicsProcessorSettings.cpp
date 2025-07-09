#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectDynamicsProcessorSettings.hpp"
float& _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_ReleaseTimeMsec() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_DynamicsProcessorType() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_AttackTimeMsec() {
    return *(float*)((uintptr_t)this + 0x8);
}
void _Script_Synthesis::SourceEffectDynamicsProcessorSettings::set_bStereoLinked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_PeakMode() {
    return (void*)((uintptr_t)this + 0x1);
}
float& _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_LookAheadMsec() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_KneeBandwidthDb() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_Ratio() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_ThresholdDb() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_InputGainDb() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_OutputGainDb() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_bStereoLinked() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
bool _Script_Synthesis::SourceEffectDynamicsProcessorSettings::get_bAnalogMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 2 != 0;
}
void _Script_Synthesis::SourceEffectDynamicsProcessorSettings::set_bAnalogMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectDynamicsProcessorSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectDynamicsProcessorSettings");
    return result;
}
