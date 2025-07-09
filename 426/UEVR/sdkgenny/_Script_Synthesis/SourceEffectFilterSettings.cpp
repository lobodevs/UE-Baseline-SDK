#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SourceEffectFilterSettings.hpp"
void* _Script_Synthesis::SourceEffectFilterSettings::get_FilterCircuit() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Synthesis::SourceEffectFilterSettings::get_AudioBusModulation() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_Synthesis::SourceEffectFilterSettings::get_CutoffFrequency() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Synthesis::SourceEffectFilterSettings::get_FilterType() {
    return (void*)((uintptr_t)this + 0x1);
}
float& _Script_Synthesis::SourceEffectFilterSettings::get_FilterQ() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectFilterSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectFilterSettings");
    return result;
}
