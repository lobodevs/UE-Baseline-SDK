#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneSkeletalAnimationSection.hpp"
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_StartOffset() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_Params() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_Engine::AnimSequence*& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_AnimSequence() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x1c0);
}
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_EndOffset() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
_Script_Engine::AnimSequenceBase*& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_Animation() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x1c8);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_bReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x1dc + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::set_bReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_SlotName() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::set_bMatchIncludeZHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x225 + 0);
    *(uint8_t*)((uintptr_t)this + 0x225 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_StartLocationOffset() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_StartRotationOffset() {
    return (void*)((uintptr_t)this + 0x1f4);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_bMatchWithPrevious() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::set_bMatchWithPrevious(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_MatchedBoneName() {
    return (void*)((uintptr_t)this + 0x204);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_MatchedLocationOffset() {
    return (void*)((uintptr_t)this + 0x20c);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_MatchedRotationOffset() {
    return (void*)((uintptr_t)this + 0x218);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_bMatchIncludeZHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x225 + 0)) & 1 != 0;
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_bMatchTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x224 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::set_bMatchTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x224 + 0);
    *(uint8_t*)((uintptr_t)this + 0x224 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_bMatchRotationYaw() {
    return (*(uint8_t*)((uintptr_t)this + 0x226 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::set_bMatchRotationYaw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x226 + 0);
    *(uint8_t*)((uintptr_t)this + 0x226 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_bMatchRotationPitch() {
    return (*(uint8_t*)((uintptr_t)this + 0x227 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::set_bMatchRotationPitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x227 + 0);
    *(uint8_t*)((uintptr_t)this + 0x227 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_bMatchRotationRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::set_bMatchRotationRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection");
    return result;
}
