#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectChorusSettings.hpp"
float& _Script_Synthesis::SourceEffectChorusSettings::get_Depth() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SourceEffectChorusSettings::get_Frequency() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Synthesis::SourceEffectChorusSettings::get_Feedback() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Synthesis::SourceEffectChorusSettings::get_WetLevel() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Synthesis::SourceEffectChorusSettings::get_DryLevel() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Synthesis::SourceEffectChorusSettings::get_FrequencyModulation() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_Synthesis::SourceEffectChorusSettings::get_Spread() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_Synthesis::SourceEffectChorusSettings::get_DepthModulation() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Synthesis::SourceEffectChorusSettings::get_FeedbackModulation() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Synthesis::SourceEffectChorusSettings::get_WetModulation() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Synthesis::SourceEffectChorusSettings::get_DryModulation() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Synthesis::SourceEffectChorusSettings::get_SpreadModulation() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectChorusSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectChorusSettings");
    return result;
}
