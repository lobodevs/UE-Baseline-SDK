#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\SoundWave.hpp"
#include "GranularSynth.hpp"
_Script_Engine::SoundWave*& _Script_Synthesis::GranularSynth::get_GranulatedSoundWave() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x6c0);
}
void _Script_Synthesis::GranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, void* SeekType) {
    return;
}
void _Script_Synthesis::GranularSynth::SetScrubMode(bool bScrubMode) {
    return;
}
_Script_CoreUObject::Class* _Script_Synthesis::GranularSynth::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.GranularSynth");
    return result;
}
void _Script_Synthesis::GranularSynth::SetSoundWave(_Script_Engine::SoundWave* InSoundWave) {
    return;
}
void _Script_Synthesis::GranularSynth::SetGrainPitch(float BasePitch, _Script_CoreUObject::Vector2D PitchRange) {
    return;
}
void _Script_Synthesis::GranularSynth::SetSustainGain(float SustainGain) {
    return;
}
void _Script_Synthesis::GranularSynth::SetReleaseTimeMsec(float ReleaseTimeMsec) {
    return;
}
void _Script_Synthesis::GranularSynth::SetPlaybackSpeed(float InPlayheadRate) {
    return;
}
void _Script_Synthesis::GranularSynth::SetGrainVolume(float BaseVolume, _Script_CoreUObject::Vector2D VolumeRange) {
    return;
}
void _Script_Synthesis::GranularSynth::SetGrainsPerSecond(float InGrainsPerSecond) {
    return;
}
void _Script_Synthesis::GranularSynth::SetGrainProbability(float InGrainProbability) {
    return;
}
void _Script_Synthesis::GranularSynth::SetGrainPan(float BasePan, _Script_CoreUObject::Vector2D PanRange) {
    return;
}
void _Script_Synthesis::GranularSynth::SetGrainEnvelopeType(void* EnvelopeType) {
    return;
}
void _Script_Synthesis::GranularSynth::SetGrainDuration(float BaseDurationMsec, _Script_CoreUObject::Vector2D DurationRange) {
    return;
}
void _Script_Synthesis::GranularSynth::SetDecayTime(float DecayTimeMsec) {
    return;
}
void _Script_Synthesis::GranularSynth::SetAttackTime(float AttackTimeMsec) {
    return;
}
void _Script_Synthesis::GranularSynth::NoteOn(float Note, int32_t Velocity, float Duration) {
    return;
}
void _Script_Synthesis::GranularSynth::NoteOff(float Note, bool bKill) {
    return;
}
bool _Script_Synthesis::GranularSynth::IsLoaded() {
    return;
}
float _Script_Synthesis::GranularSynth::GetSampleDuration() {
    return;
}
float _Script_Synthesis::GranularSynth::GetCurrentPlayheadTime() {
    return;
}
