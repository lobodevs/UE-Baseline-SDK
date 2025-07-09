#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct SoundClass;
}
namespace _Script_Engine {
struct SoundConcurrency;
}
namespace _Script_Engine {
struct SoundEffectSourcePresetChain;
}
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_Engine {
struct SoundSubmixBase;
}
namespace _Script_AudioMixer {
struct QuartzClockHandle;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct QuartzQuantizationBoundary;
}
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_Engine {
struct SoundSourceBus;
}
namespace _Script_Engine {
struct AudioBus;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct SoundAttenuationSettings;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AudioComponent : public SceneComponent {
    private: char pad_200[0x660]; public:
    _Script_Engine::SoundBase*& get_Sound();
    void* get_InstanceParameters();
    _Script_Engine::SoundClass*& get_SoundClassOverride();
    bool get_bAutoDestroy();
    void set_bAutoDestroy(bool value);
    bool get_bStopWhenOwnerDestroyed();
    void set_bStopWhenOwnerDestroyed(bool value);
    bool get_bShouldRemainActiveIfDropped();
    void set_bShouldRemainActiveIfDropped(bool value);
    bool get_bAllowSpatialization();
    void set_bAllowSpatialization(bool value);
    bool get_bOverrideAttenuation();
    void set_bOverrideAttenuation(bool value);
    bool get_bOverrideSubtitlePriority();
    void set_bOverrideSubtitlePriority(bool value);
    bool get_bIsUISound();
    void set_bIsUISound(bool value);
    bool get_bEnableLowPassFilter();
    void set_bEnableLowPassFilter(bool value);
    bool get_bOverridePriority();
    void set_bOverridePriority(bool value);
    bool get_bSuppressSubtitles();
    void set_bSuppressSubtitles(bool value);
    bool get_bAutoManageAttachment();
    void set_bAutoManageAttachment(bool value);
    void* get_AudioComponentUserID();
    float& get_PitchModulationMin();
    float& get_PitchModulationMax();
    float& get_VolumeModulationMin();
    float& get_VolumeModulationMax();
    float& get_VolumeMultiplier();
    int32_t& get_EnvelopeFollowerAttackTime();
    int32_t& get_EnvelopeFollowerReleaseTime();
    float& get_Priority();
    float& get_SubtitlePriority();
    _Script_Engine::SoundEffectSourcePresetChain*& get_SourceEffectChain();
    float& get_PitchMultiplier();
    float& get_LowPassFilterFrequency();
    _Script_Engine::SoundAttenuation*& get_AttenuationSettings();
    void* get_AttenuationOverrides();
    _Script_Engine::SoundConcurrency*& get_ConcurrencySettings();
    void* get_ConcurrencySet();
    void* get_AutoAttachLocationRule();
    void* get_AutoAttachRotationRule();
    void* get_AutoAttachScaleRule();
    void* get_ModulationRouting();
    void* get_OnAudioPlayStateChanged();
    void* get_OnAudioVirtualizationChanged();
    void* get_OnAudioFinished();
    void* get_OnAudioPlaybackPercent();
    void* get_OnAudioSingleEnvelopeValue();
    void* get_OnAudioMultiEnvelopeValue();
    void* get_OnQueueSubtitles();
    void* get_AutoAttachParent();
    void* get_AutoAttachSocketName();
    static _Script_CoreUObject::Class* static_class();
    void StopDelayed(float DelayTime);
    void Stop();
    void SetWaveParameter(void* InName, _Script_Engine::SoundWave* InWave);
    void SetVolumeMultiplier(float NewVolumeMultiplier);
    void SetUISound(bool bInUISound);
    void SetSubmixSend(_Script_Engine::SoundSubmixBase* Submix, float SendLevel);
    void SetSourceBusSendPreEffect(_Script_Engine::SoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    void SetSourceBusSendPostEffect(_Script_Engine::SoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    void SetSound(_Script_Engine::SoundBase* NewSound);
    void SetPitchMultiplier(float NewPitchMultiplier);
    void SetPaused(bool bPause);
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    void SetIntParameter(void* InName, int32_t inInt);
    void SetFloatParameter(void* InName, float InFloat);
    void SetBoolParameter(void* InName, bool InBool);
    void SetAudioBusSendPreEffect(_Script_Engine::AudioBus* AudioBus, float AudioBusSendLevel);
    void SetAudioBusSendPostEffect(_Script_Engine::AudioBus* AudioBus, float SourceBusSendLevel);
    void PlayQuantized(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& InClockHandle, _Script_Engine::QuartzQuantizationBoundary& InQuantizationBoundary, void*& InDelegate, float InStartTime, float InFadeInDuration, float InFadeVolumeLevel, void* InFadeCurve);
    void Play(float StartTime);
    bool IsVirtualized();
    bool IsPlaying();
    bool HasCookedFFTData();
    bool HasCookedAmplitudeEnvelopeData();
    void* GetPlayState();
    bool GetCookedFFTDataForAllPlayingSounds(void*& OutSoundWaveSpectralData);
    bool GetCookedFFTData(void*& FrequenciesToGet, void*& OutSoundWaveSpectralData);
    bool GetCookedEnvelopeDataForAllPlayingSounds(void*& OutEnvelopeData);
    bool GetCookedEnvelopeData(float& OutEnvelopeData);
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel, void* FadeCurve);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, void* FadeCurve);
    bool BP_GetAttenuationSettingsToApply(_Script_Engine::SoundAttenuationSettings& OutAttenuationSettings);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, void* FadeCurve);
    void AdjustAttenuation(_Script_Engine::SoundAttenuationSettings& InAttenuationSettings);
}; // Size: 0x860
#pragma pack(pop)
}
