#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Info.hpp"
#include "NavigationSystemConfig.hpp"
#include "PlayerState.hpp"
#include "SoundMix.hpp"
#include "WorldSettings.hpp"
void _Script_Engine::WorldSettings::set_bUseClientSideLevelStreamingVolumes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22d + 0);
    *(uint8_t*)((uintptr_t)this + 0x22d + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::WorldSettings::set_bPrecomputeVisibility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22d + 0);
    *(uint8_t*)((uintptr_t)this + 0x22d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::WorldSettings::get_bHighPriorityLoadingLocal() {
    return (*(uint8_t*)((uintptr_t)this + 0x22e + 0)) & 32 != 0;
}
int32_t& _Script_Engine::WorldSettings::get_VisibilityCellSize() {
    return *(int32_t*)((uintptr_t)this + 0x228);
}
void _Script_Engine::WorldSettings::set_bPlaceCellsOnlyAlongCameraTracks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22d + 0);
    *(uint8_t*)((uintptr_t)this + 0x22d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::WorldSettings::get_VisibilityAggressiveness() {
    return (void*)((uintptr_t)this + 0x22c);
}
bool _Script_Engine::WorldSettings::get_bPrecomputeVisibility() {
    return (*(uint8_t*)((uintptr_t)this + 0x22d + 0)) & 1 != 0;
}
bool _Script_Engine::WorldSettings::get_bPlaceCellsOnlyAlongCameraTracks() {
    return (*(uint8_t*)((uintptr_t)this + 0x22d + 0)) & 2 != 0;
}
void* _Script_Engine::WorldSettings::get_DefaultAmbientZoneSettings() {
    return (void*)((uintptr_t)this + 0x2b8);
}
bool _Script_Engine::WorldSettings::get_bEnableWorldBoundsChecks() {
    return (*(uint8_t*)((uintptr_t)this + 0x22d + 0)) & 4 != 0;
}
void _Script_Engine::WorldSettings::set_bEnableWorldBoundsChecks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22d + 0);
    *(uint8_t*)((uintptr_t)this + 0x22d + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::WorldSettings::get_bEnableNavigationSystem() {
    return (*(uint8_t*)((uintptr_t)this + 0x22d + 0)) & 8 != 0;
}
void _Script_Engine::WorldSettings::set_bEnableNavigationSystem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22d + 0);
    *(uint8_t*)((uintptr_t)this + 0x22d + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::WorldSettings::get_bEnableAISystem() {
    return (*(uint8_t*)((uintptr_t)this + 0x22d + 0)) & 16 != 0;
}
void _Script_Engine::WorldSettings::set_bEnableAISystem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22d + 0);
    *(uint8_t*)((uintptr_t)this + 0x22d + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::WorldSettings::get_bEnableWorldComposition() {
    return (*(uint8_t*)((uintptr_t)this + 0x22d + 0)) & 32 != 0;
}
void _Script_Engine::WorldSettings::set_bEnableWorldComposition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22d + 0);
    *(uint8_t*)((uintptr_t)this + 0x22d + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_Engine::WorldSettings::get_DefaultMaxDistanceFieldOcclusionDistance() {
    return *(float*)((uintptr_t)this + 0x288);
}
bool _Script_Engine::WorldSettings::get_bUseClientSideLevelStreamingVolumes() {
    return (*(uint8_t*)((uintptr_t)this + 0x22d + 0)) & 64 != 0;
}
float& _Script_Engine::WorldSettings::get_KillZ() {
    return *(float*)((uintptr_t)this + 0x244);
}
bool _Script_Engine::WorldSettings::get_bEnableWorldOriginRebasing() {
    return (*(uint8_t*)((uintptr_t)this + 0x22d + 0)) & 128 != 0;
}
void _Script_Engine::WorldSettings::set_bEnableWorldOriginRebasing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22d + 0);
    *(uint8_t*)((uintptr_t)this + 0x22d + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::WorldSettings::get_bWorldGravitySet() {
    return (*(uint8_t*)((uintptr_t)this + 0x22e + 0)) & 1 != 0;
}
void _Script_Engine::WorldSettings::set_bWorldGravitySet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22e + 0);
    *(uint8_t*)((uintptr_t)this + 0x22e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::WorldSettings::set_bGlobalGravitySet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22e + 0);
    *(uint8_t*)((uintptr_t)this + 0x22e + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::WorldSettings::get_bGlobalGravitySet() {
    return (*(uint8_t*)((uintptr_t)this + 0x22e + 0)) & 2 != 0;
}
float& _Script_Engine::WorldSettings::get_GlobalGravityZ() {
    return *(float*)((uintptr_t)this + 0x254);
}
bool _Script_Engine::WorldSettings::get_bMinimizeBSPSections() {
    return (*(uint8_t*)((uintptr_t)this + 0x22e + 0)) & 4 != 0;
}
void _Script_Engine::WorldSettings::set_bMinimizeBSPSections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22e + 0);
    *(uint8_t*)((uintptr_t)this + 0x22e + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::WorldSettings::get_MonoCullingDistance() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
bool _Script_Engine::WorldSettings::get_bForceNoPrecomputedLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x22e + 0)) & 8 != 0;
}
void* _Script_Engine::WorldSettings::get_GameNetworkManagerClass() {
    return (void*)((uintptr_t)this + 0x270);
}
void _Script_Engine::WorldSettings::set_bForceNoPrecomputedLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22e + 0);
    *(uint8_t*)((uintptr_t)this + 0x22e + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::WorldSettings::get_bHighPriorityLoading() {
    return (*(uint8_t*)((uintptr_t)this + 0x22e + 0)) & 16 != 0;
}
void _Script_Engine::WorldSettings::set_bHighPriorityLoading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22e + 0);
    *(uint8_t*)((uintptr_t)this + 0x22e + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::WorldSettings::set_bHighPriorityLoadingLocal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22e + 0);
    *(uint8_t*)((uintptr_t)this + 0x22e + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::WorldSettings::get_bOverrideDefaultBroadphaseSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x22e + 0)) & 64 != 0;
}
void _Script_Engine::WorldSettings::set_bOverrideDefaultBroadphaseSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22e + 0);
    *(uint8_t*)((uintptr_t)this + 0x22e + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
_Script_Engine::NavigationSystemConfig*& _Script_Engine::WorldSettings::get_NavigationSystemConfig() {
    return *(_Script_Engine::NavigationSystemConfig**)((uintptr_t)this + 0x230);
}
_Script_Engine::NavigationSystemConfig*& _Script_Engine::WorldSettings::get_NavigationSystemConfigOverride() {
    return *(_Script_Engine::NavigationSystemConfig**)((uintptr_t)this + 0x238);
}
float& _Script_Engine::WorldSettings::get_WorldToMeters() {
    return *(float*)((uintptr_t)this + 0x240);
}
void* _Script_Engine::WorldSettings::get_KillZDamageType() {
    return (void*)((uintptr_t)this + 0x248);
}
float& _Script_Engine::WorldSettings::get_WorldGravityZ() {
    return *(float*)((uintptr_t)this + 0x250);
}
void* _Script_Engine::WorldSettings::get_DefaultPhysicsVolumeClass() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Script_Engine::WorldSettings::get_PhysicsCollisionHandlerClass() {
    return (void*)((uintptr_t)this + 0x260);
}
float& _Script_Engine::WorldSettings::get_MaxGlobalTimeDilation() {
    return *(float*)((uintptr_t)this + 0x2f8);
}
void* _Script_Engine::WorldSettings::get_DefaultGameMode() {
    return (void*)((uintptr_t)this + 0x268);
}
int32_t& _Script_Engine::WorldSettings::get_PackedLightAndShadowMapTextureSize() {
    return *(int32_t*)((uintptr_t)this + 0x278);
}
void* _Script_Engine::WorldSettings::get_DefaultColorScale() {
    return (void*)((uintptr_t)this + 0x27c);
}
void* _Script_Engine::WorldSettings::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x360);
}
float& _Script_Engine::WorldSettings::get_GlobalDistanceFieldViewDistance() {
    return *(float*)((uintptr_t)this + 0x28c);
}
float& _Script_Engine::WorldSettings::get_DynamicIndirectShadowsSelfShadowingIntensity() {
    return *(float*)((uintptr_t)this + 0x290);
}
void* _Script_Engine::WorldSettings::get_DefaultReverbSettings() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_Engine::SoundMix*& _Script_Engine::WorldSettings::get_DefaultBaseSoundMix() {
    return *(_Script_Engine::SoundMix**)((uintptr_t)this + 0x2e0);
}
float& _Script_Engine::WorldSettings::get_TimeDilation() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
float& _Script_Engine::WorldSettings::get_MatineeTimeDilation() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Script_Engine::WorldSettings::get_DemoPlayTimeDilation() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
float& _Script_Engine::WorldSettings::get_MinGlobalTimeDilation() {
    return *(float*)((uintptr_t)this + 0x2f4);
}
float& _Script_Engine::WorldSettings::get_MinUndilatedFrameTime() {
    return *(float*)((uintptr_t)this + 0x2fc);
}
void* _Script_Engine::WorldSettings::get_BroadphaseSettings() {
    return (void*)((uintptr_t)this + 0x304);
}
float& _Script_Engine::WorldSettings::get_MaxUndilatedFrameTime() {
    return *(float*)((uintptr_t)this + 0x300);
}
_Script_Engine::PlayerState*& _Script_Engine::WorldSettings::get_Pauser() {
    return *(_Script_Engine::PlayerState**)((uintptr_t)this + 0x348);
}
void* _Script_Engine::WorldSettings::get_ReplicationViewers() {
    return (void*)((uintptr_t)this + 0x350);
}
_Script_Engine::PlayerState*& _Script_Engine::WorldSettings::get_PauserPlayerState() {
    return *(_Script_Engine::PlayerState**)((uintptr_t)this + 0x370);
}
int32_t& _Script_Engine::WorldSettings::get_MaxNumberOfBookmarks() {
    return *(int32_t*)((uintptr_t)this + 0x378);
}
void* _Script_Engine::WorldSettings::get_DefaultBookmarkClass() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Script_Engine::WorldSettings::get_BookmarkArray() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Script_Engine::WorldSettings::get_LastBookmarkClass() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Script_Engine::WorldSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.WorldSettings");
    return result;
}
void _Script_Engine::WorldSettings::OnRep_WorldGravityZ() {
    return;
}
