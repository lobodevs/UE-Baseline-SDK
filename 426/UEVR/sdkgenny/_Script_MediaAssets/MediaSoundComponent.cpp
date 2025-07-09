#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundAttenuationSettings.hpp"
#include "MediaPlayer.hpp"
#include "MediaSoundComponent.hpp"
void* _Script_MediaAssets::MediaSoundComponent::get_Channels() {
    return (void*)((uintptr_t)this + 0x6c0);
}
bool _Script_MediaAssets::MediaSoundComponent::get_DynamicRateAdjustment() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c4 + 0)) & 1 != 0;
}
void* _Script_MediaAssets::MediaSoundComponent::get_RateAdjustmentRange() {
    return (void*)((uintptr_t)this + 0x6cc);
}
void _Script_MediaAssets::MediaSoundComponent::set_DynamicRateAdjustment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_MediaAssets::MediaSoundComponent::get_RateAdjustmentFactor() {
    return *(float*)((uintptr_t)this + 0x6c8);
}
void _Script_MediaAssets::MediaSoundComponent::SetSpectralAnalysisSettings(void* InFrequenciesToAnalyze, void* InFFTSize) {
    return;
}
_Script_MediaAssets::MediaPlayer*& _Script_MediaAssets::MediaSoundComponent::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x6e0);
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaSoundComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaSoundComponent");
    return result;
}
void _Script_MediaAssets::MediaSoundComponent::SetMediaPlayer(_Script_MediaAssets::MediaPlayer* NewMediaPlayer) {
    return;
}
void _Script_MediaAssets::MediaSoundComponent::SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec) {
    return;
}
void _Script_MediaAssets::MediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled) {
    return;
}
void _Script_MediaAssets::MediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing) {
    return;
}
void* _Script_MediaAssets::MediaSoundComponent::GetSpectralData() {
    return;
}
void* _Script_MediaAssets::MediaSoundComponent::GetNormalizedSpectralData() {
    return;
}
_Script_MediaAssets::MediaPlayer* _Script_MediaAssets::MediaSoundComponent::GetMediaPlayer() {
    return;
}
float _Script_MediaAssets::MediaSoundComponent::GetEnvelopeValue() {
    return;
}
bool _Script_MediaAssets::MediaSoundComponent::BP_GetAttenuationSettingsToApply(_Script_Engine::SoundAttenuationSettings& OutAttenuationSettings) {
    return;
}
