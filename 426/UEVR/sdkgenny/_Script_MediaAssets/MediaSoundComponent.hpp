#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\SynthComponent.hpp"
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SoundAttenuationSettings;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct MediaSoundComponent : public _Script_AudioMixer::SynthComponent {
    private: char pad_6c0[0x220]; public:
    void* get_Channels();
    bool get_DynamicRateAdjustment();
    void set_DynamicRateAdjustment(bool value);
    float& get_RateAdjustmentFactor();
    void* get_RateAdjustmentRange();
    _Script_MediaAssets::MediaPlayer*& get_MediaPlayer();
    static _Script_CoreUObject::Class* static_class();
    void SetSpectralAnalysisSettings(void* InFrequenciesToAnalyze, void* InFFTSize);
    void SetMediaPlayer(_Script_MediaAssets::MediaPlayer* NewMediaPlayer);
    void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);
    void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
    void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
    void* GetSpectralData();
    void* GetNormalizedSpectralData();
    _Script_MediaAssets::MediaPlayer* GetMediaPlayer();
    float GetEnvelopeValue();
    bool BP_GetAttenuationSettingsToApply(_Script_Engine::SoundAttenuationSettings& OutAttenuationSettings);
}; // Size: 0x8e0
#pragma pack(pop)
}
