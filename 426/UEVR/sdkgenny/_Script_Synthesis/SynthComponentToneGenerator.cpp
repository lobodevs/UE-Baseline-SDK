#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SynthComponentToneGenerator.hpp"
float& _Script_Synthesis::SynthComponentToneGenerator::get_Frequency() {
    return *(float*)((uintptr_t)this + 0x6c0);
}
float& _Script_Synthesis::SynthComponentToneGenerator::get_Volume() {
    return *(float*)((uintptr_t)this + 0x6c4);
}
_Script_CoreUObject::Class* _Script_Synthesis::SynthComponentToneGenerator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SynthComponentToneGenerator");
    return result;
}
void _Script_Synthesis::SynthComponentToneGenerator::SetVolume(float InVolume) {
    return;
}
void _Script_Synthesis::SynthComponentToneGenerator::SetFrequency(float InFrequency) {
    return;
}
