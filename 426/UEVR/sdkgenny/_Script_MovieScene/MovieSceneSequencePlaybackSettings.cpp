#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSequencePlaybackSettings.hpp"
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bAutoPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bAutoPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_LoopCount() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_StartTime() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bRandomStartTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bRandomStartTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bRestoreState() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 2 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bRestoreState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bDisableMovementInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 4 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bDisableMovementInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bDisableLookAtInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 8 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bDisableLookAtInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bHidePlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 16 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bHidePlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bHideHud() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 32 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bHideHud(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bDisableCameraCuts() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 64 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bDisableCameraCuts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlaybackSettings::get_bPauseAtEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 128 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlaybackSettings::set_bPauseAtEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequencePlaybackSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSequencePlaybackSettings");
    return result;
}
