#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ModularSynthComponent.hpp"
#include "ModularSynthPreset.hpp"
#include "PatchId.hpp"
void _Script_Synthesis::ModularSynthComponent::SetAttackTime(float AttackTimeMsec) {
    return;
}
int32_t& _Script_Synthesis::ModularSynthComponent::get_VoiceCount() {
    return *(int32_t*)((uintptr_t)this + 0x6c0);
}
void _Script_Synthesis::ModularSynthComponent::SetStereoDelayRatio(float DelayRatio) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetChorusFeedback(float Feedback) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec) {
    return;
}
_Script_CoreUObject::Class* _Script_Synthesis::ModularSynthComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.ModularSynthComponent");
    return result;
}
void _Script_Synthesis::ModularSynthComponent::SetDecayTime(float DecayTimeMsec) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetSynthPreset(_Script_Synthesis::ModularSynthPreset& SynthPreset) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::NoteOn(float Note, int32_t Velocity, float Duration) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetSustainGain(float SustainGain) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetStereoDelayMode(void* StereoDelayMode) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetSpread(float Spread) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetPortamento(float Portamento) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetEnableUnison(bool EnableUnison) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetPitchBend(float PitchBend) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetPan(float Pan) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetOscType(int32_t OscIndex, void* OscType) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetChorusFrequency(float Frequency) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetOscSync(bool bIsSynced) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetOscSemitones(int32_t OscIndex, float Semitones) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetOscPulsewidth(int32_t OscIndex, float Pulsewidth) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetOscOctave(int32_t OscIndex, float Octave) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetOscGainMod(int32_t OscIndex, float OscGainMod) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetOscGain(int32_t OscIndex, float OscGain) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetOscCents(int32_t OscIndex, float Cents) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetModEnvSustainGain(float SustainGain) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetModEnvReleaseTime(float Release) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetModEnvPatch(void* InPatchType) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetModEnvInvert(bool bInvert) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetModEnvDepth(float Depth) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetModEnvBiasPatch(void* InPatchType) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetModEnvDecayTime(float DecayTimeMsec) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetModEnvBiasInvert(bool bInvert) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetChorusDepth(float Depth) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetModEnvAttackTime(float AttackTimeMsec) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetLFOType(int32_t LFOIndex, void* LFOType) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetLFOPatch(int32_t LFOIndex, void* LFOPatchType) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetLFOMode(int32_t LFOIndex, void* LFOMode) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetLFOGainMod(int32_t LFOIndex, float GainMod) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetLFOGain(int32_t LFOIndex, float Gain) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetLFOFrequency(int32_t LFOIndex, float FrequencyHz) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetGainDb(float GainDb) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetFilterType(void* FilterType) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetFilterQMod(float FilterQ) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetFilterQ(float FilterQ) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetFilterAlgorithm(void* FilterAlgorithm) {
    return;
}
bool _Script_Synthesis::ModularSynthComponent::SetEnablePatch(_Script_Synthesis::PatchId PatchId, bool bIsEnabled) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetEnableLegato(bool LegatoEnabled) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::SetChorusEnabled(bool EnableChorus) {
    return;
}
void _Script_Synthesis::ModularSynthComponent::NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes) {
    return;
}
_Script_Synthesis::PatchId _Script_Synthesis::ModularSynthComponent::CreatePatch(void* PatchSource, void*& PatchCables, bool bEnableByDefault) {
    return;
}
