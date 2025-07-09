#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\FrameTime.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\QualifiedFrameTime.hpp"
#include "MovieSceneObjectBindingID.hpp"
#include "MovieSceneSequencePlaybackParams.hpp"
namespace _Script_MovieScene {
struct MovieSceneSequence;
}
namespace _Script_MovieScene {
struct MovieSceneSequenceTickManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSequencePlayer : public _Script_CoreUObject::Object {
    private: char pad_28[0x658]; public:
    void* get_OnPlay();
    void* get_OnPlayReverse();
    void* get_OnStop();
    void* get_OnPause();
    void* get_OnFinished();
    void* get_Status();
    bool get_bReversePlayback();
    void set_bReversePlayback(bool value);
    _Script_MovieScene::MovieSceneSequence*& get_Sequence();
    void* get_StartTime();
    int32_t& get_DurationFrames();
    float& get_DurationSubFrames();
    int32_t& get_CurrentNumLoops();
    void* get_PlaybackSettings();
    void* get_RootTemplateInstance();
    void* get_NetSyncProps();
    void* get_PlaybackClient();
    _Script_MovieScene::MovieSceneSequenceTickManager*& get_TickManager();
    static _Script_CoreUObject::Class* static_class();
    void StopAtCurrentTime();
    void Stop();
    void SetTimeRange(float StartTime, float Duration);
    void SetPlayRate(float PlayRate);
    void SetPlaybackPosition(_Script_MovieScene::MovieSceneSequencePlaybackParams PlaybackParams);
    void SetFrameRate(_Script_CoreUObject::FrameRate FrameRate);
    void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void ScrubToSeconds(float TimeInSeconds);
    bool ScrubToMarkedFrame(void* InLabel);
    void ScrubToFrame(_Script_CoreUObject::FrameTime NewPosition);
    void Scrub();
    void RPC_OnStopEvent(_Script_CoreUObject::FrameTime StoppedTime);
    void RPC_ExplicitServerUpdateEvent(void* Method, _Script_CoreUObject::FrameTime RelevantTime);
    void PlayToSeconds(float TimeInSeconds);
    bool PlayToMarkedFrame(void* InLabel);
    void PlayToFrame(_Script_CoreUObject::FrameTime NewPosition);
    void PlayTo(_Script_MovieScene::MovieSceneSequencePlaybackParams PlaybackParams);
    void PlayReverse();
    void PlayLooping(int32_t NumLoops);
    void Play();
    void Pause();
    void JumpToSeconds(float TimeInSeconds);
    bool JumpToMarkedFrame(void* InLabel);
    void JumpToFrame(_Script_CoreUObject::FrameTime NewPosition);
    bool IsReversed();
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    _Script_CoreUObject::QualifiedFrameTime GetStartTime();
    float GetPlayRate();
    void* GetObjectBindings(_Script_CoreUObject::Object* InObject);
    _Script_CoreUObject::FrameRate GetFrameRate();
    int32_t GetFrameDuration();
    _Script_CoreUObject::QualifiedFrameTime GetEndTime();
    _Script_CoreUObject::QualifiedFrameTime GetDuration();
    bool GetDisableCameraCuts();
    _Script_CoreUObject::QualifiedFrameTime GetCurrentTime();
    void* GetBoundObjects(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
}; // Size: 0x680
#pragma pack(pop)
}
