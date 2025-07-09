#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\FrameNumber.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneAudioSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x250]; public:
    _Script_Engine::SoundBase*& get_Sound();
    void* get_StartFrameOffset();
    float& get_StartOffset();
    float& get_AudioStartTime();
    float& get_AudioDilationFactor();
    float& get_AudioVolume();
    void* get_SoundVolume();
    void* get_PitchMultiplier();
    void* get_AttachActorData();
    bool get_bLooping();
    void set_bLooping(bool value);
    bool get_bSuppressSubtitles();
    void set_bSuppressSubtitles(bool value);
    bool get_bOverrideAttenuation();
    void set_bOverrideAttenuation(bool value);
    _Script_Engine::SoundAttenuation*& get_AttenuationSettings();
    void* get_OnQueueSubtitles();
    void* get_OnAudioFinished();
    void* get_OnAudioPlaybackPercent();
    static _Script_CoreUObject::Class* static_class();
    void SetStartOffset(_Script_CoreUObject::FrameNumber InStartOffset);
    void SetSound(_Script_Engine::SoundBase* InSound);
    _Script_CoreUObject::FrameNumber GetStartOffset();
    _Script_Engine::SoundBase* GetSound();
}; // Size: 0x338
#pragma pack(pop)
}
