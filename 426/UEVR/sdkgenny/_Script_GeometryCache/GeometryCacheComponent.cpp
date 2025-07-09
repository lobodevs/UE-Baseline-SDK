#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "GeometryCache.hpp"
#include "GeometryCacheComponent.hpp"
float& _Script_GeometryCache::GeometryCacheComponent::get_StartTimeOffset() {
    return *(float*)((uintptr_t)this + 0x474);
}
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheComponent");
    return result;
}
_Script_GeometryCache::GeometryCache*& _Script_GeometryCache::GeometryCacheComponent::get_GeometryCache() {
    return *(_Script_GeometryCache::GeometryCache**)((uintptr_t)this + 0x468);
}
float& _Script_GeometryCache::GeometryCacheComponent::get_PlaybackSpeed() {
    return *(float*)((uintptr_t)this + 0x478);
}
bool _Script_GeometryCache::GeometryCacheComponent::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x471 + 0)) & 1 != 0;
}
bool _Script_GeometryCache::GeometryCacheComponent::get_bRunning() {
    return (*(uint8_t*)((uintptr_t)this + 0x470 + 0)) & 1 != 0;
}
void _Script_GeometryCache::GeometryCacheComponent::set_bRunning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x470 + 0);
    *(uint8_t*)((uintptr_t)this + 0x470 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCache::GeometryCacheComponent::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x471 + 0);
    *(uint8_t*)((uintptr_t)this + 0x471 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_GeometryCache::GeometryCacheComponent::get_NumTracks() {
    return *(int32_t*)((uintptr_t)this + 0x47c);
}
float& _Script_GeometryCache::GeometryCacheComponent::get_ElapsedTime() {
    return *(float*)((uintptr_t)this + 0x480);
}
float& _Script_GeometryCache::GeometryCacheComponent::get_Duration() {
    return *(float*)((uintptr_t)this + 0x4b4);
}
bool _Script_GeometryCache::GeometryCacheComponent::get_bManualTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b8 + 0)) & 1 != 0;
}
void _Script_GeometryCache::GeometryCacheComponent::set_bManualTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCache::GeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::Stop() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::SetLooping(bool bNewLooping) {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::SetGeometryCache(_Script_GeometryCache::GeometryCache* NewGeomCache) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::PlayReversedFromEnd() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::PlayReversed() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::PlayFromStart() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::Play() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::Pause() {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::IsPlayingReversed() {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::IsPlaying() {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::IsLooping() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetStartTimeOffset() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetPlaybackSpeed() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetPlaybackDirection() {
    return;
}
int32_t _Script_GeometryCache::GeometryCacheComponent::GetNumberOfFrames() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetDuration() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetAnimationTime() {
    return;
}
