#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "InterpData.hpp"
#include "MatineeActor.hpp"
bool _Script_Engine::MatineeActor::get_bHidePlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 4 != 0;
}
void _Script_Engine::MatineeActor::set_bForceStartPos(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x234 + 0);
    *(uint8_t*)((uintptr_t)this + 0x234 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_Engine::InterpData*& _Script_Engine::MatineeActor::get_MatineeData() {
    return *(_Script_Engine::InterpData**)((uintptr_t)this + 0x220);
}
void* _Script_Engine::MatineeActor::get_MatineeControllerName() {
    return (void*)((uintptr_t)this + 0x228);
}
void _Script_Engine::MatineeActor::set_bShouldShowGore(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x258 + 0);
    *(uint8_t*)((uintptr_t)this + 0x258 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MatineeActor::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x230);
}
float& _Script_Engine::MatineeActor::get_ForceStartPosition() {
    return *(float*)((uintptr_t)this + 0x238);
}
bool _Script_Engine::MatineeActor::get_bPlayOnLevelLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x234 + 0)) & 1 != 0;
}
void _Script_Engine::MatineeActor::set_bPlayOnLevelLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x234 + 0);
    *(uint8_t*)((uintptr_t)this + 0x234 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MatineeActor::get_bForceStartPos() {
    return (*(uint8_t*)((uintptr_t)this + 0x234 + 0)) & 2 != 0;
}
bool _Script_Engine::MatineeActor::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 1 != 0;
}
void _Script_Engine::MatineeActor::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MatineeActor::set_bSkipUpdateIfNotVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::MatineeActor::get_bRewindOnPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 2 != 0;
}
void _Script_Engine::MatineeActor::set_bRewindOnPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MatineeActor::get_bNoResetOnRewind() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 4 != 0;
}
void _Script_Engine::MatineeActor::set_bNoResetOnRewind(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MatineeActor::get_bRewindIfAlreadyPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 8 != 0;
}
void _Script_Engine::MatineeActor::set_bRewindIfAlreadyPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::MatineeActor::get_bDisableRadioFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 16 != 0;
}
void _Script_Engine::MatineeActor::set_bDisableRadioFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::MatineeActor::Play() {
    return;
}
bool _Script_Engine::MatineeActor::get_bClientSideOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 32 != 0;
}
void _Script_Engine::MatineeActor::set_bClientSideOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::MatineeActor::get_OnPlay() {
    return (void*)((uintptr_t)this + 0x290);
}
bool _Script_Engine::MatineeActor::get_bSkipUpdateIfNotVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 64 != 0;
}
void _Script_Engine::MatineeActor::set_bPaused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MatineeActor::get_bIsSkippable() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 128 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::MatineeActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MatineeActor");
    return result;
}
void _Script_Engine::MatineeActor::set_bIsSkippable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
int32_t& _Script_Engine::MatineeActor::get_PreferredSplitScreenNum() {
    return *(int32_t*)((uintptr_t)this + 0x240);
}
bool _Script_Engine::MatineeActor::get_bDisableMovementInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 1 != 0;
}
void _Script_Engine::MatineeActor::set_bDisableMovementInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MatineeActor::get_bDisableLookAtInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 2 != 0;
}
void _Script_Engine::MatineeActor::set_bReversePlayback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::MatineeActor::set_bDisableLookAtInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::MatineeActor::get_InterpPosition() {
    return *(float*)((uintptr_t)this + 0x284);
}
void _Script_Engine::MatineeActor::set_bHidePlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MatineeActor::get_bHideHud() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 8 != 0;
}
void _Script_Engine::MatineeActor::set_bHideHud(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::MatineeActor::Reverse() {
    return;
}
void* _Script_Engine::MatineeActor::get_GroupActorInfos() {
    return (void*)((uintptr_t)this + 0x248);
}
void _Script_Engine::MatineeActor::SetPosition(float NewPosition, bool bJump) {
    return;
}
bool _Script_Engine::MatineeActor::get_bShouldShowGore() {
    return (*(uint8_t*)((uintptr_t)this + 0x258 + 0)) & 1 != 0;
}
void* _Script_Engine::MatineeActor::get_GroupInst() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Script_Engine::MatineeActor::get_CameraCuts() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_Engine::MatineeActor::get_ReplicationForceIsPlaying() {
    return (void*)((uintptr_t)this + 0x28c);
}
bool _Script_Engine::MatineeActor::get_bIsPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 1 != 0;
}
void _Script_Engine::MatineeActor::set_bIsPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MatineeActor::get_bReversePlayback() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 2 != 0;
}
bool _Script_Engine::MatineeActor::get_bPaused() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 4 != 0;
}
bool _Script_Engine::MatineeActor::get_bPendingStop() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 8 != 0;
}
void _Script_Engine::MatineeActor::set_bPendingStop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::MatineeActor::get_OnStop() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_Engine::MatineeActor::get_OnPause() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void _Script_Engine::MatineeActor::Stop() {
    return;
}
void _Script_Engine::MatineeActor::SetLoopingState(bool bNewLooping) {
    return;
}
void _Script_Engine::MatineeActor::Pause() {
    return;
}
void _Script_Engine::MatineeActor::EnableGroupByName(void* GroupName, bool bEnable) {
    return;
}
void _Script_Engine::MatineeActor::ChangePlaybackDirection() {
    return;
}
