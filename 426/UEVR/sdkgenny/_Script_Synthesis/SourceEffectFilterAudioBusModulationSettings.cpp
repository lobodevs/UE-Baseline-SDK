#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioBus.hpp"
#include "SourceEffectFilterAudioBusModulationSettings.hpp"
_Script_Engine::AudioBus*& _Script_Synthesis::SourceEffectFilterAudioBusModulationSettings::get_AudioBus() {
    return *(_Script_Engine::AudioBus**)((uintptr_t)this + 0x0);
}
int32_t& _Script_Synthesis::SourceEffectFilterAudioBusModulationSettings::get_EnvelopeFollowerAttackTimeMsec() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_Synthesis::SourceEffectFilterAudioBusModulationSettings::get_MinFrequencyModulation() {
    return *(float*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Synthesis::SourceEffectFilterAudioBusModulationSettings::get_EnvelopeFollowerReleaseTimeMsec() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
float& _Script_Synthesis::SourceEffectFilterAudioBusModulationSettings::get_EnvelopeGainMultiplier() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Synthesis::SourceEffectFilterAudioBusModulationSettings::get_FilterParam() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_Synthesis::SourceEffectFilterAudioBusModulationSettings::get_MaxFrequencyModulation() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Synthesis::SourceEffectFilterAudioBusModulationSettings::get_MinResonanceModulation() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Synthesis::SourceEffectFilterAudioBusModulationSettings::get_MaxResonanceModulation() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectFilterAudioBusModulationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings");
    return result;
}
