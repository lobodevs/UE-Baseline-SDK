#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\QuartzClockHandle.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AudioBus.hpp"
#include "AudioComponent.hpp"
#include "QuartzQuantizationBoundary.hpp"
#include "SceneComponent.hpp"
#include "SoundAttenuation.hpp"
#include "SoundAttenuationSettings.hpp"
#include "SoundBase.hpp"
#include "SoundClass.hpp"
#include "SoundConcurrency.hpp"
#include "SoundEffectSourcePresetChain.hpp"
#include "SoundSourceBus.hpp"
#include "SoundSubmixBase.hpp"
#include "SoundWave.hpp"
void* _Script_Engine::AudioComponent::get_InstanceParameters() {
    return (void*)((uintptr_t)this + 0x200);
}
bool _Script_Engine::AudioComponent::GetCookedEnvelopeData(float& OutEnvelopeData) {
    return;
}
void _Script_Engine::AudioComponent::StopDelayed(float DelayTime) {
    return;
}
_Script_Engine::SoundBase*& _Script_Engine::AudioComponent::get_Sound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x1f8);
}
bool _Script_Engine::AudioComponent::get_bStopWhenOwnerDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 2 != 0;
}
void _Script_Engine::AudioComponent::SetPitchMultiplier(float NewPitchMultiplier) {
    return;
}
_Script_Engine::SoundClass*& _Script_Engine::AudioComponent::get_SoundClassOverride() {
    return *(_Script_Engine::SoundClass**)((uintptr_t)this + 0x210);
}
void _Script_Engine::AudioComponent::set_bAutoDestroy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AudioComponent::get_bAutoDestroy() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 1 != 0;
}
float& _Script_Engine::AudioComponent::get_PitchModulationMin() {
    return *(float*)((uintptr_t)this + 0x228);
}
void _Script_Engine::AudioComponent::set_bStopWhenOwnerDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::AudioComponent::get_OnAudioFinished() {
    return (void*)((uintptr_t)this + 0x710);
}
bool _Script_Engine::AudioComponent::get_bShouldRemainActiveIfDropped() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 4 != 0;
}
void _Script_Engine::AudioComponent::set_bShouldRemainActiveIfDropped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::AudioComponent::get_bAllowSpatialization() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 8 != 0;
}
void* _Script_Engine::AudioComponent::get_OnAudioPlaybackPercent() {
    return (void*)((uintptr_t)this + 0x738);
}
void _Script_Engine::AudioComponent::set_bAllowSpatialization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::AudioComponent::get_OnAudioMultiEnvelopeValue() {
    return (void*)((uintptr_t)this + 0x788);
}
bool _Script_Engine::AudioComponent::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 16 != 0;
}
void* _Script_Engine::AudioComponent::get_OnAudioPlayStateChanged() {
    return (void*)((uintptr_t)this + 0x6c0);
}
_Script_Engine::SoundEffectSourcePresetChain*& _Script_Engine::AudioComponent::get_SourceEffectChain() {
    return *(_Script_Engine::SoundEffectSourcePresetChain**)((uintptr_t)this + 0x250);
}
void _Script_Engine::AudioComponent::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::AudioComponent::get_bOverrideSubtitlePriority() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 32 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::AudioComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AudioComponent");
    return result;
}
void _Script_Engine::AudioComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled) {
    return;
}
void _Script_Engine::AudioComponent::set_bOverrideSubtitlePriority(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::AudioComponent::get_bIsUISound() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 64 != 0;
}
void _Script_Engine::AudioComponent::set_bIsUISound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Engine::AudioComponent::get_OnAudioSingleEnvelopeValue() {
    return (void*)((uintptr_t)this + 0x760);
}
bool _Script_Engine::AudioComponent::get_bEnableLowPassFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 128 != 0;
}
void _Script_Engine::AudioComponent::set_bEnableLowPassFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::AudioComponent::SetSubmixSend(_Script_Engine::SoundSubmixBase* Submix, float SendLevel) {
    return;
}
bool _Script_Engine::AudioComponent::get_bOverridePriority() {
    return (*(uint8_t*)((uintptr_t)this + 0x219 + 0)) & 1 != 0;
}
void _Script_Engine::AudioComponent::set_bOverridePriority(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x219 + 0);
    *(uint8_t*)((uintptr_t)this + 0x219 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AudioComponent::SetWaveParameter(void* InName, _Script_Engine::SoundWave* InWave) {
    return;
}
bool _Script_Engine::AudioComponent::get_bSuppressSubtitles() {
    return (*(uint8_t*)((uintptr_t)this + 0x219 + 0)) & 2 != 0;
}
void _Script_Engine::AudioComponent::set_bSuppressSubtitles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x219 + 0);
    *(uint8_t*)((uintptr_t)this + 0x219 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::AudioComponent::get_bAutoManageAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0x21a + 0)) & 16 != 0;
}
void _Script_Engine::AudioComponent::SetSourceBusSendPostEffect(_Script_Engine::SoundSourceBus* SoundSourceBus, float SourceBusSendLevel) {
    return;
}
void _Script_Engine::AudioComponent::set_bAutoManageAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21a + 0);
    *(uint8_t*)((uintptr_t)this + 0x21a + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::AudioComponent::get_ModulationRouting() {
    return (void*)((uintptr_t)this + 0x678);
}
void* _Script_Engine::AudioComponent::get_AudioComponentUserID() {
    return (void*)((uintptr_t)this + 0x220);
}
float& _Script_Engine::AudioComponent::get_VolumeModulationMin() {
    return *(float*)((uintptr_t)this + 0x230);
}
float& _Script_Engine::AudioComponent::get_PitchModulationMax() {
    return *(float*)((uintptr_t)this + 0x22c);
}
float& _Script_Engine::AudioComponent::get_VolumeModulationMax() {
    return *(float*)((uintptr_t)this + 0x234);
}
float& _Script_Engine::AudioComponent::get_VolumeMultiplier() {
    return *(float*)((uintptr_t)this + 0x238);
}
int32_t& _Script_Engine::AudioComponent::get_EnvelopeFollowerAttackTime() {
    return *(int32_t*)((uintptr_t)this + 0x23c);
}
int32_t& _Script_Engine::AudioComponent::get_EnvelopeFollowerReleaseTime() {
    return *(int32_t*)((uintptr_t)this + 0x240);
}
float& _Script_Engine::AudioComponent::get_Priority() {
    return *(float*)((uintptr_t)this + 0x244);
}
float& _Script_Engine::AudioComponent::get_SubtitlePriority() {
    return *(float*)((uintptr_t)this + 0x248);
}
float& _Script_Engine::AudioComponent::get_PitchMultiplier() {
    return *(float*)((uintptr_t)this + 0x258);
}
float& _Script_Engine::AudioComponent::get_LowPassFilterFrequency() {
    return *(float*)((uintptr_t)this + 0x25c);
}
_Script_Engine::SoundAttenuation*& _Script_Engine::AudioComponent::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x268);
}
void* _Script_Engine::AudioComponent::get_AttenuationOverrides() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_Engine::SoundConcurrency*& _Script_Engine::AudioComponent::get_ConcurrencySettings() {
    return *(_Script_Engine::SoundConcurrency**)((uintptr_t)this + 0x610);
}
void* _Script_Engine::AudioComponent::get_AutoAttachSocketName() {
    return (void*)((uintptr_t)this + 0x7c8);
}
void* _Script_Engine::AudioComponent::get_ConcurrencySet() {
    return (void*)((uintptr_t)this + 0x618);
}
void* _Script_Engine::AudioComponent::get_AutoAttachLocationRule() {
    return (void*)((uintptr_t)this + 0x674);
}
void* _Script_Engine::AudioComponent::get_AutoAttachRotationRule() {
    return (void*)((uintptr_t)this + 0x675);
}
void* _Script_Engine::AudioComponent::get_AutoAttachScaleRule() {
    return (void*)((uintptr_t)this + 0x676);
}
void* _Script_Engine::AudioComponent::get_OnAudioVirtualizationChanged() {
    return (void*)((uintptr_t)this + 0x6e8);
}
void* _Script_Engine::AudioComponent::get_OnQueueSubtitles() {
    return (void*)((uintptr_t)this + 0x7b0);
}
void _Script_Engine::AudioComponent::SetUISound(bool bInUISound) {
    return;
}
void* _Script_Engine::AudioComponent::get_AutoAttachParent() {
    return (void*)((uintptr_t)this + 0x7c0);
}
void* _Script_Engine::AudioComponent::GetPlayState() {
    return;
}
void _Script_Engine::AudioComponent::Stop() {
    return;
}
void _Script_Engine::AudioComponent::SetVolumeMultiplier(float NewVolumeMultiplier) {
    return;
}
void _Script_Engine::AudioComponent::SetSourceBusSendPreEffect(_Script_Engine::SoundSourceBus* SoundSourceBus, float SourceBusSendLevel) {
    return;
}
void _Script_Engine::AudioComponent::SetSound(_Script_Engine::SoundBase* NewSound) {
    return;
}
void _Script_Engine::AudioComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, void* FadeCurve) {
    return;
}
void _Script_Engine::AudioComponent::SetPaused(bool bPause) {
    return;
}
void _Script_Engine::AudioComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency) {
    return;
}
void _Script_Engine::AudioComponent::SetIntParameter(void* InName, int32_t inInt) {
    return;
}
void _Script_Engine::AudioComponent::SetFloatParameter(void* InName, float InFloat) {
    return;
}
void _Script_Engine::AudioComponent::SetBoolParameter(void* InName, bool InBool) {
    return;
}
void _Script_Engine::AudioComponent::SetAudioBusSendPreEffect(_Script_Engine::AudioBus* AudioBus, float AudioBusSendLevel) {
    return;
}
void _Script_Engine::AudioComponent::SetAudioBusSendPostEffect(_Script_Engine::AudioBus* AudioBus, float SourceBusSendLevel) {
    return;
}
void _Script_Engine::AudioComponent::PlayQuantized(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& InClockHandle, _Script_Engine::QuartzQuantizationBoundary& InQuantizationBoundary, void*& InDelegate, float InStartTime, float InFadeInDuration, float InFadeVolumeLevel, void* InFadeCurve) {
    return;
}
void _Script_Engine::AudioComponent::Play(float StartTime) {
    return;
}
bool _Script_Engine::AudioComponent::IsVirtualized() {
    return;
}
bool _Script_Engine::AudioComponent::IsPlaying() {
    return;
}
bool _Script_Engine::AudioComponent::HasCookedFFTData() {
    return;
}
bool _Script_Engine::AudioComponent::HasCookedAmplitudeEnvelopeData() {
    return;
}
bool _Script_Engine::AudioComponent::GetCookedFFTDataForAllPlayingSounds(void*& OutSoundWaveSpectralData) {
    return;
}
bool _Script_Engine::AudioComponent::GetCookedFFTData(void*& FrequenciesToGet, void*& OutSoundWaveSpectralData) {
    return;
}
bool _Script_Engine::AudioComponent::GetCookedEnvelopeDataForAllPlayingSounds(void*& OutEnvelopeData) {
    return;
}
void _Script_Engine::AudioComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel, void* FadeCurve) {
    return;
}
void _Script_Engine::AudioComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, void* FadeCurve) {
    return;
}
bool _Script_Engine::AudioComponent::BP_GetAttenuationSettingsToApply(_Script_Engine::SoundAttenuationSettings& OutAttenuationSettings) {
    return;
}
void _Script_Engine::AudioComponent::AdjustAttenuation(_Script_Engine::SoundAttenuationSettings& InAttenuationSettings) {
    return;
}
