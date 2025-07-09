#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioBus.hpp"
#include "SourceEffectRingModulationSettings.hpp"
float& _Script_Synthesis::SourceEffectRingModulationSettings::get_Frequency() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Synthesis::SourceEffectRingModulationSettings::get_ModulatorType() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SourceEffectRingModulationSettings::get_Depth() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Synthesis::SourceEffectRingModulationSettings::get_DryLevel() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Synthesis::SourceEffectRingModulationSettings::get_WetLevel() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_Engine::AudioBus*& _Script_Synthesis::SourceEffectRingModulationSettings::get_AudioBusModulator() {
    return *(_Script_Engine::AudioBus**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectRingModulationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectRingModulationSettings");
    return result;
}
