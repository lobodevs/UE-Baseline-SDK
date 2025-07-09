#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "MovieSceneSkeletalAnimationTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationTrack::get_AnimationSections() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationTrack::get_bUseLegacySectionIndexBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationTrack::set_bUseLegacySectionIndexBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationTrack::get_bBlendFirstChildOfRoot() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationTrack::get_RootMotionParams() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationTrack::set_bBlendFirstChildOfRoot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
