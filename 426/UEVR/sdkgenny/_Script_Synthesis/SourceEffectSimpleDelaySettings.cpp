#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectSimpleDelaySettings.hpp"
void _Script_Synthesis::SourceEffectSimpleDelaySettings::set_bDelayBasedOnDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Synthesis::SourceEffectSimpleDelaySettings::get_DryAmount() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Synthesis::SourceEffectSimpleDelaySettings::get_SpeedOfSound() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SourceEffectSimpleDelaySettings::get_Feedback() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Synthesis::SourceEffectSimpleDelaySettings::get_DelayAmount() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Synthesis::SourceEffectSimpleDelaySettings::get_WetAmount() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_Synthesis::SourceEffectSimpleDelaySettings::get_bDelayBasedOnDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectSimpleDelaySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectSimpleDelaySettings");
    return result;
}
