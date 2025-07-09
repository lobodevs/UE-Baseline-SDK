#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubmixEffectFilterSettings.hpp"
void* _Script_Synthesis::SubmixEffectFilterSettings::get_FilterType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Synthesis::SubmixEffectFilterSettings::get_FilterAlgorithm() {
    return (void*)((uintptr_t)this + 0x1);
}
float& _Script_Synthesis::SubmixEffectFilterSettings::get_FilterFrequency() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Synthesis::SubmixEffectFilterSettings::get_FilterQ() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectFilterSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SubmixEffectFilterSettings");
    return result;
}
