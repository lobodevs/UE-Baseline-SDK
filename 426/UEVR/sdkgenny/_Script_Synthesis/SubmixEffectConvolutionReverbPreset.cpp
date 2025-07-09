#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "AudioImpulseResponse.hpp"
#include "SubmixEffectConvolutionReverbPreset.hpp"
#include "SubmixEffectConvolutionReverbSettings.hpp"
_Script_Synthesis::AudioImpulseResponse*& _Script_Synthesis::SubmixEffectConvolutionReverbPreset::get_ImpulseResponse() {
    return *(_Script_Synthesis::AudioImpulseResponse**)((uintptr_t)this + 0x68);
}
void* _Script_Synthesis::SubmixEffectConvolutionReverbPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectConvolutionReverbPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset");
    return result;
}
void* _Script_Synthesis::SubmixEffectConvolutionReverbPreset::get_BlockSize() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_Synthesis::SubmixEffectConvolutionReverbPreset::SetSettings(_Script_Synthesis::SubmixEffectConvolutionReverbSettings& InSettings) {
    return;
}
bool _Script_Synthesis::SubmixEffectConvolutionReverbPreset::get_bEnableHardwareAcceleration() {
    return (*(uint8_t*)((uintptr_t)this + 0x99 + 0)) & 1 != 0;
}
void _Script_Synthesis::SubmixEffectConvolutionReverbPreset::set_bEnableHardwareAcceleration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x99 + 0);
    *(uint8_t*)((uintptr_t)this + 0x99 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Synthesis::SubmixEffectConvolutionReverbPreset::SetImpulseResponse(_Script_Synthesis::AudioImpulseResponse* InImpulseResponse) {
    return;
}
