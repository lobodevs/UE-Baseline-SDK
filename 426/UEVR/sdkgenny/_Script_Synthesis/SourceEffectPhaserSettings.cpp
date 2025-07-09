#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectPhaserSettings.hpp"
float& _Script_Synthesis::SourceEffectPhaserSettings::get_WetLevel() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectPhaserSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectPhaserSettings");
    return result;
}
float& _Script_Synthesis::SourceEffectPhaserSettings::get_Frequency() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_Synthesis::SourceEffectPhaserSettings::get_UseQuadraturePhase() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 1 != 0;
}
float& _Script_Synthesis::SourceEffectPhaserSettings::get_Feedback() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Synthesis::SourceEffectPhaserSettings::get_LFOType() {
    return (void*)((uintptr_t)this + 0xc);
}
void _Script_Synthesis::SourceEffectPhaserSettings::set_UseQuadraturePhase(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
