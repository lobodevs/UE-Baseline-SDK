#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectChorusBaseSettings.hpp"
float& _Script_Synthesis::SourceEffectChorusBaseSettings::get_DryLevel() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Synthesis::SourceEffectChorusBaseSettings::get_Depth() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SourceEffectChorusBaseSettings::get_Frequency() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Synthesis::SourceEffectChorusBaseSettings::get_Feedback() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Synthesis::SourceEffectChorusBaseSettings::get_WetLevel() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Synthesis::SourceEffectChorusBaseSettings::get_Spread() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectChorusBaseSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectChorusBaseSettings");
    return result;
}
