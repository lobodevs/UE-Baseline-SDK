#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\FrameTime.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\QualifiedFrameTime.hpp"
#include "MovieSceneObjectBindingID.hpp"
#include "MovieSceneSequence.hpp"
#include "MovieSceneSequencePlaybackParams.hpp"
#include "MovieSceneSequencePlayer.hpp"
#include "MovieSceneSequenceTickManager.hpp"
void* _Script_MovieScene::MovieSceneSequencePlayer::get_Status() {
    return (void*)((uintptr_t)this + 0x460);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnPlay() {
    return (void*)((uintptr_t)this + 0x410);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnPlayReverse() {
    return (void*)((uintptr_t)this + 0x420);
}
void _Script_MovieScene::MovieSceneSequencePlayer::set_bReversePlayback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x464 + 0);
    *(uint8_t*)((uintptr_t)this + 0x464 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::FrameRate _Script_MovieScene::MovieSceneSequencePlayer::GetFrameRate() {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnStop() {
    return (void*)((uintptr_t)this + 0x430);
}
void _Script_MovieScene::MovieSceneSequencePlayer::JumpToFrame(_Script_CoreUObject::FrameTime NewPosition) {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnPause() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnFinished() {
    return (void*)((uintptr_t)this + 0x450);
}
bool _Script_MovieScene::MovieSceneSequencePlayer::get_bReversePlayback() {
    return (*(uint8_t*)((uintptr_t)this + 0x464 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds) {
    return;
}
_Script_MovieScene::MovieSceneSequence*& _Script_MovieScene::MovieSceneSequencePlayer::get_Sequence() {
    return *(_Script_MovieScene::MovieSceneSequence**)((uintptr_t)this + 0x468);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_StartTime() {
    return (void*)((uintptr_t)this + 0x470);
}
int32_t& _Script_MovieScene::MovieSceneSequencePlayer::get_DurationFrames() {
    return *(int32_t*)((uintptr_t)this + 0x474);
}
float& _Script_MovieScene::MovieSceneSequencePlayer::get_DurationSubFrames() {
    return *(float*)((uintptr_t)this + 0x478);
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds) {
    return;
}
int32_t& _Script_MovieScene::MovieSceneSequencePlayer::get_CurrentNumLoops() {
    return *(int32_t*)((uintptr_t)this + 0x47c);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_PlaybackSettings() {
    return (void*)((uintptr_t)this + 0x480);
}
void _Script_MovieScene::MovieSceneSequencePlayer::Pause() {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_RootTemplateInstance() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_NetSyncProps() {
    return (void*)((uintptr_t)this + 0x5e8);
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetPlayRate() {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_PlaybackClient() {
    return (void*)((uintptr_t)this + 0x5f8);
}
_Script_MovieScene::MovieSceneSequenceTickManager*& _Script_MovieScene::MovieSceneSequencePlayer::get_TickManager() {
    return *(_Script_MovieScene::MovieSceneSequenceTickManager**)((uintptr_t)this + 0x608);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequencePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSequencePlayer");
    return result;
}
void _Script_MovieScene::MovieSceneSequencePlayer::StopAtCurrentTime() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::Stop() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetPlayRate(float PlayRate) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetPlaybackPosition(_Script_MovieScene::MovieSceneSequencePlaybackParams PlaybackParams) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayToFrame(_Script_CoreUObject::FrameTime NewPosition) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetFrameRate(_Script_CoreUObject::FrameRate FrameRate) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::ChangePlaybackDirection() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds) {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::ScrubToMarkedFrame(void* InLabel) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::ScrubToFrame(_Script_CoreUObject::FrameTime NewPosition) {
    return;
}
_Script_CoreUObject::QualifiedFrameTime _Script_MovieScene::MovieSceneSequencePlayer::GetEndTime() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::Scrub() {
    return;
}
_Script_CoreUObject::QualifiedFrameTime _Script_MovieScene::MovieSceneSequencePlayer::GetDuration() {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::PlayToMarkedFrame(void* InLabel) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::RPC_OnStopEvent(_Script_CoreUObject::FrameTime StoppedTime) {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::IsPaused() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(void* Method, _Script_CoreUObject::FrameTime RelevantTime) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayTo(_Script_MovieScene::MovieSceneSequencePlaybackParams PlaybackParams) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayReverse() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayLooping(int32_t NumLoops) {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::GetBoundObjects(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::Play() {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::JumpToMarkedFrame(void* InLabel) {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::IsReversed() {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::IsPlaying() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::GoToEndAndStop() {
    return;
}
_Script_CoreUObject::QualifiedFrameTime _Script_MovieScene::MovieSceneSequencePlayer::GetStartTime() {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::GetObjectBindings(_Script_CoreUObject::Object* InObject) {
    return;
}
int32_t _Script_MovieScene::MovieSceneSequencePlayer::GetFrameDuration() {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::GetDisableCameraCuts() {
    return;
}
_Script_CoreUObject::QualifiedFrameTime _Script_MovieScene::MovieSceneSequencePlayer::GetCurrentTime() {
    return;
}
