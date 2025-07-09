#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Level.hpp"
#include "LevelScriptActor.hpp"
#include "LevelStreaming.hpp"
void _Script_Engine::LevelStreaming::set_bShouldBeVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba + 0);
    *(uint8_t*)((uintptr_t)this + 0xba + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_Engine::LevelStreaming* _Script_Engine::LevelStreaming::CreateInstance(void* UniqueInstanceName) {
    return;
}
void* _Script_Engine::LevelStreaming::get_WorldAsset() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::LevelStreaming::get_OnLevelShown() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_Engine::LevelStreaming::get_bShouldBeVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0xba + 0)) & 8 != 0;
}
void* _Script_Engine::LevelStreaming::get_PackageNameToLoad() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::LevelStreaming::get_LODPackageNames() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::LevelStreaming::get_LevelTransform() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_Engine::Level*& _Script_Engine::LevelStreaming::get_PendingUnloadLevel() {
    return *(_Script_Engine::Level**)((uintptr_t)this + 0x130);
}
int32_t& _Script_Engine::LevelStreaming::get_LevelLODIndex() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
int32_t& _Script_Engine::LevelStreaming::get_StreamingPriority() {
    return *(int32_t*)((uintptr_t)this + 0xb4);
}
void _Script_Engine::LevelStreaming::set_bDrawOnLevelStatusMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbb + 0);
    *(uint8_t*)((uintptr_t)this + 0xbb + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::LevelStreaming::get_bShouldBeLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0xba + 0)) & 16 != 0;
}
void _Script_Engine::LevelStreaming::set_bShouldBeLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba + 0);
    *(uint8_t*)((uintptr_t)this + 0xba + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::LevelStreaming::get_bLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0xba + 0)) & 32 != 0;
}
void _Script_Engine::LevelStreaming::set_bLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba + 0);
    *(uint8_t*)((uintptr_t)this + 0xba + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::LevelStreaming::get_bShouldBlockOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0xba + 0)) & 128 != 0;
}
bool _Script_Engine::LevelStreaming::get_bIsStatic() {
    return (*(uint8_t*)((uintptr_t)this + 0xba + 0)) & 64 != 0;
}
void _Script_Engine::LevelStreaming::set_bIsStatic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba + 0);
    *(uint8_t*)((uintptr_t)this + 0xba + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::LevelStreaming::set_bShouldBlockOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba + 0);
    *(uint8_t*)((uintptr_t)this + 0xba + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::LevelStreaming::get_bShouldBlockOnUnload() {
    return (*(uint8_t*)((uintptr_t)this + 0xbb + 0)) & 1 != 0;
}
bool _Script_Engine::LevelStreaming::IsStreamingStatePending() {
    return;
}
void _Script_Engine::LevelStreaming::set_bShouldBlockOnUnload(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbb + 0);
    *(uint8_t*)((uintptr_t)this + 0xbb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LevelStreaming::get_bDisableDistanceStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0xbb + 0)) & 2 != 0;
}
void _Script_Engine::LevelStreaming::set_bDisableDistanceStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbb + 0);
    *(uint8_t*)((uintptr_t)this + 0xbb + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::LevelStreaming::get_bDrawOnLevelStatusMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xbb + 0)) & 4 != 0;
}
void* _Script_Engine::LevelStreaming::get_LevelColor() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_Engine::LevelStreaming::get_EditorStreamingVolumes() {
    return (void*)((uintptr_t)this + 0xd0);
}
float& _Script_Engine::LevelStreaming::get_MinTimeBetweenVolumeUnloadRequests() {
    return *(float*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::LevelStreaming::get_OnLevelLoaded() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Engine::LevelStreaming::get_OnLevelUnloaded() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_Engine::LevelStreaming::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelStreaming");
    return result;
}
void* _Script_Engine::LevelStreaming::get_OnLevelHidden() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_Engine::Level*& _Script_Engine::LevelStreaming::get_LoadedLevel() {
    return *(_Script_Engine::Level**)((uintptr_t)this + 0x128);
}
bool _Script_Engine::LevelStreaming::ShouldBeLoaded() {
    return;
}
void _Script_Engine::LevelStreaming::SetShouldBeVisible(bool bInShouldBeVisible) {
    return;
}
void _Script_Engine::LevelStreaming::SetShouldBeLoaded(bool bInShouldBeLoaded) {
    return;
}
void _Script_Engine::LevelStreaming::SetPriority(int32_t NewPriority) {
    return;
}
void _Script_Engine::LevelStreaming::SetLevelLODIndex(int32_t LODIndex) {
    return;
}
void _Script_Engine::LevelStreaming::SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval) {
    return;
}
bool _Script_Engine::LevelStreaming::IsLevelVisible() {
    return;
}
bool _Script_Engine::LevelStreaming::IsLevelLoaded() {
    return;
}
void* _Script_Engine::LevelStreaming::GetWorldAssetPackageFName() {
    return;
}
_Script_Engine::Level* _Script_Engine::LevelStreaming::GetLoadedLevel() {
    return;
}
_Script_Engine::LevelScriptActor* _Script_Engine::LevelStreaming::GetLevelScriptActor() {
    return;
}
bool _Script_Engine::LevelStreaming::GetIsRequestingUnloadAndRemoval() {
    return;
}
