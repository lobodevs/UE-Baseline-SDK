#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MotoSynthPreset.hpp"
#include "MotoSynthRuntimeSettings.hpp"
#include "SynthComponentMoto.hpp"
void _Script_MotoSynth::SynthComponentMoto::SetRPM(float InRPM, float InTimeSec) {
    return;
}
_Script_MotoSynth::MotoSynthPreset*& _Script_MotoSynth::SynthComponentMoto::get_MotoSynthPreset() {
    return *(_Script_MotoSynth::MotoSynthPreset**)((uintptr_t)this + 0x6c0);
}
void _Script_MotoSynth::SynthComponentMoto::GetRPMRange(float& OutMinRPM, float& OutMaxRPM) {
    return;
}
float& _Script_MotoSynth::SynthComponentMoto::get_RPM() {
    return *(float*)((uintptr_t)this + 0x6c8);
}
bool _Script_MotoSynth::SynthComponentMoto::IsEnabled() {
    return;
}
_Script_CoreUObject::Class* _Script_MotoSynth::SynthComponentMoto::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MotoSynth.SynthComponentMoto");
    return result;
}
void _Script_MotoSynth::SynthComponentMoto::SetSettings(_Script_MotoSynth::MotoSynthRuntimeSettings& InSettings) {
    return;
}
