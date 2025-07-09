#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubmixEffectStereoDelaySettings.hpp"
float& _Script_Synthesis::SubmixEffectStereoDelaySettings::get_DelayRatio() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Synthesis::SubmixEffectStereoDelaySettings::get_DelayMode() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SubmixEffectStereoDelaySettings::get_DelayTimeMsec() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Synthesis::SubmixEffectStereoDelaySettings::get_Feedback() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Synthesis::SubmixEffectStereoDelaySettings::get_WetLevel() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_Synthesis::SubmixEffectStereoDelaySettings::get_bFilterEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
float& _Script_Synthesis::SubmixEffectStereoDelaySettings::get_DryLevel() {
    return *(float*)((uintptr_t)this + 0x14);
}
void _Script_Synthesis::SubmixEffectStereoDelaySettings::set_bFilterEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Synthesis::SubmixEffectStereoDelaySettings::get_FilterType() {
    return (void*)((uintptr_t)this + 0x19);
}
float& _Script_Synthesis::SubmixEffectStereoDelaySettings::get_FilterFrequency() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Synthesis::SubmixEffectStereoDelaySettings::get_FilterQ() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectStereoDelaySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SubmixEffectStereoDelaySettings");
    return result;
}
