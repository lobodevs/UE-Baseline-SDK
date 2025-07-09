#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioExtensions\SoundModulatorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectBitCrusherBaseSettings.hpp"
#include "SourceEffectBitCrusherPreset.hpp"
#include "SourceEffectBitCrusherSettings.hpp"
void _Script_Synthesis::SourceEffectBitCrusherPreset::SetSampleRateModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator) {
    return;
}
void _Script_Synthesis::SourceEffectBitCrusherPreset::SetSettings(_Script_Synthesis::SourceEffectBitCrusherBaseSettings& Settings) {
    return;
}
void* _Script_Synthesis::SourceEffectBitCrusherPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectBitCrusherPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectBitCrusherPreset");
    return result;
}
void _Script_Synthesis::SourceEffectBitCrusherPreset::SetSampleRate(float SampleRate) {
    return;
}
void _Script_Synthesis::SourceEffectBitCrusherPreset::SetBitModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator) {
    return;
}
void _Script_Synthesis::SourceEffectBitCrusherPreset::SetModulationSettings(_Script_Synthesis::SourceEffectBitCrusherSettings& ModulationSettings) {
    return;
}
void _Script_Synthesis::SourceEffectBitCrusherPreset::SetBits(float Bits) {
    return;
}
