#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioExtensions\SoundfieldEncodingSettingsBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SoundSubmix.hpp"
#include "SoundSubmixWithParentBase.hpp"
#include "SoundWave.hpp"
int32_t& _Script_Engine::SoundSubmix::get_EnvelopeFollowerReleaseTime() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
bool _Script_Engine::SoundSubmix::get_bMuteWhenBackgrounded() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_Engine::SoundSubmix::set_bMuteWhenBackgrounded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::SoundSubmix::get_EnvelopeFollowerAttackTime() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::SoundSubmix::get_SubmixEffectChain() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_AudioExtensions::SoundfieldEncodingSettingsBase*& _Script_Engine::SoundSubmix::get_AmbisonicsPluginSettings() {
    return *(_Script_AudioExtensions::SoundfieldEncodingSettingsBase**)((uintptr_t)this + 0x58);
}
float& _Script_Engine::SoundSubmix::get_OutputVolume() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::SoundSubmix::get_GainMode() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::SoundSubmix::get_WetLevel() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::SoundSubmix::get_DryLevel() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_Engine::SoundSubmix::get_OnSubmixRecordedFileDone() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::SoundSubmix::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundSubmix");
    return result;
}
void _Script_Engine::SoundSubmix::StopSpectralAnalysis(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::SoundSubmix::StopRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, void* ExportType, void* Name, void* Path, _Script_Engine::SoundWave* ExistingSoundWaveToOverwrite) {
    return;
}
void _Script_Engine::SoundSubmix::StopEnvelopeFollowing(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::SoundSubmix::StartSpectralAnalysis(_Script_CoreUObject::Object* WorldContextObject, void* FFTSize, void* InterpolationMethod, void* WindowType, float HopSize, void* SpectrumType) {
    return;
}
void _Script_Engine::SoundSubmix::StartRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, float ExpectedDuration) {
    return;
}
void _Script_Engine::SoundSubmix::StartEnvelopeFollowing(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::SoundSubmix::SetSubmixOutputVolume(_Script_CoreUObject::Object* WorldContextObject, float InOutputVolume) {
    return;
}
void _Script_Engine::SoundSubmix::AddSpectralAnalysisDelegate(_Script_CoreUObject::Object* WorldContextObject, void*& InBandSettings, void*& OnSubmixSpectralAnalysisBP, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime) {
    return;
}
void _Script_Engine::SoundSubmix::RemoveSpectralAnalysisDelegate(_Script_CoreUObject::Object* WorldContextObject, void*& OnSubmixSpectralAnalysisBP) {
    return;
}
void _Script_Engine::SoundSubmix::AddEnvelopeFollowerDelegate(_Script_CoreUObject::Object* WorldContextObject, void*& OnSubmixEnvelopeBP) {
    return;
}
