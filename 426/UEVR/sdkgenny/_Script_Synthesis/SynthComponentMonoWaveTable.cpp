#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MonoWaveTableSynthPreset.hpp"
#include "SynthComponentMonoWaveTable.hpp"
void* _Script_Synthesis::SynthComponentMonoWaveTable::get_OnTableAltered() {
    return (void*)((uintptr_t)this + 0x6c0);
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPosLfoFrequency(float InLfoFrequency) {
    return;
}
void* _Script_Synthesis::SynthComponentMonoWaveTable::get_OnNumTablesChanged() {
    return (void*)((uintptr_t)this + 0x6d0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SynthComponentMonoWaveTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SynthComponentMonoWaveTable");
    return result;
}
_Script_Synthesis::MonoWaveTableSynthPreset*& _Script_Synthesis::SynthComponentMonoWaveTable::get_CurrentPreset() {
    return *(_Script_Synthesis::MonoWaveTableSynthPreset**)((uintptr_t)this + 0x6e0);
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetSustainPedalState(bool InSustainPedalState) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPosLfoType(void* InLfoType) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPosLfoDepth(float InLfoDepth) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float InDepth) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float InSustainGain) {
    return;
}
int32_t _Script_Synthesis::SynthComponentMonoWaveTable::GetMaxTableIndex() {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPositionEnvelopeInvert(bool bInInvert) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float InDepth) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float InDecayTimeMsec) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(bool bInBiasInvert) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float InDepth) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float InAttackTimeMsec) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float InAttackTimeMsec) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float InMidiNote) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFrequencyPitchBend(float FrequencyOffsetCents) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFrequency(float FrequencyHz) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float InSustainGain) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float InDecayTimeMsec) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFilterEnvelopeInvert(bool bInInvert) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float InDepth) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(bool bInBiasInvert) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float InDepth) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float InAttackTimeMsec) {
    return;
}
bool _Script_Synthesis::SynthComponentMonoWaveTable::SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue) {
    return;
}
bool _Script_Synthesis::SynthComponentMonoWaveTable::SetCurveTangent(int32_t TableIndex, float InNewTangent) {
    return;
}
bool _Script_Synthesis::SynthComponentMonoWaveTable::SetCurveInterpolationType(void* InterpolationType, int32_t TableIndex) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float InSustainGain) {
    return;
}
int32_t _Script_Synthesis::SynthComponentMonoWaveTable::GetNumTableEntries() {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetAmpEnvelopeInvert(bool bInInvert) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float InDecayTimeMsec) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(bool bInBiasInvert) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float InDepth) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::RefreshWaveTable(int32_t Index) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::RefreshAllWaveTables() {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::NoteOn(float InMidiNote, float InVelocity) {
    return;
}
void _Script_Synthesis::SynthComponentMonoWaveTable::NoteOff(float InMidiNote) {
    return;
}
void* _Script_Synthesis::SynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex) {
    return;
}
float _Script_Synthesis::SynthComponentMonoWaveTable::GetCurveTangent(int32_t TableIndex) {
    return;
}
