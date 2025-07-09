#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioExtensions\SoundModulatorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSourcePreset.hpp"
#include "SourceEffectChorusBaseSettings.hpp"
#include "SourceEffectChorusPreset.hpp"
#include "SourceEffectChorusSettings.hpp"
void _Script_Synthesis::SourceEffectChorusPreset::SetDry(float DryAmount) {
    return;
}
void* _Script_Synthesis::SourceEffectChorusPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x108);
}
void _Script_Synthesis::SourceEffectChorusPreset::SetSettings(_Script_Synthesis::SourceEffectChorusBaseSettings& Settings) {
    return;
}
_Script_CoreUObject::Class* _Script_Synthesis::SourceEffectChorusPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SourceEffectChorusPreset");
    return result;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetDepthModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetWet(float WetAmount) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetWetModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetSpreadModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetFeedback(float Feedback) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetSpread(float Spread) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetModulationSettings(_Script_Synthesis::SourceEffectChorusSettings& ModulationSettings) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetFrequencyModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetFrequency(float Frequency) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetFeedbackModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetDryModulator(_Script_AudioExtensions::SoundModulatorBase* Modulator) {
    return;
}
void _Script_Synthesis::SourceEffectChorusPreset::SetDepth(float Depth) {
    return;
}
