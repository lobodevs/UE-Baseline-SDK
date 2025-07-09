#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectMidSideSpreaderSettings.hpp"
float& _Script_Synthesis::SourceEffectMidSideSpreaderSettings::get_SpreadAmount() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Synthesis::SourceEffectMidSideSpreaderSettings::get_OutputMode() {
    return (void*)((uintptr_t)this + 0x5);
}
void* _Script_Synthesis::SourceEffectMidSideSpreaderSettings::get_InputMode() {
    return (void*)((uintptr_t)this + 0x4);
}
bool _Script_Synthesis::SourceEffectMidSideSpreaderSettings::get_bEqualPower() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 1 != 0;
}
void _Script_Synthesis::SourceEffectMidSideSpreaderSettings::set_bEqualPower(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectMidSideSpreaderSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectMidSideSpreaderSettings");
    return result;
}
