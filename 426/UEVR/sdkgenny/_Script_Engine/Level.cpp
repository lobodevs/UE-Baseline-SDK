#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Level.hpp"
#include "LevelActorContainer.hpp"
#include "LevelScriptActor.hpp"
#include "MapBuildDataRegistry.hpp"
#include "Model.hpp"
#include "NavigationObjectBase.hpp"
#include "World.hpp"
#include "WorldSettings.hpp"
_Script_Engine::NavigationObjectBase*& _Script_Engine::Level::get_NavListStart() {
    return *(_Script_Engine::NavigationObjectBase**)((uintptr_t)this + 0xf0);
}
_Script_Engine::World*& _Script_Engine::Level::get_OwningWorld() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::Level::get_ModelComponents() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_Engine::LevelScriptActor*& _Script_Engine::Level::get_LevelScriptActor() {
    return *(_Script_Engine::LevelScriptActor**)((uintptr_t)this + 0xe8);
}
_Script_Engine::Model*& _Script_Engine::Level::get_Model() {
    return *(_Script_Engine::Model**)((uintptr_t)this + 0xc0);
}
void _Script_Engine::Level::set_bStaticComponentsRegisteredInStreamingManager(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_Engine::LevelActorContainer*& _Script_Engine::Level::get_ActorCluster() {
    return *(_Script_Engine::LevelActorContainer**)((uintptr_t)this + 0xd8);
}
int32_t& _Script_Engine::Level::get_NumTextureStreamingUnbuiltComponents() {
    return *(int32_t*)((uintptr_t)this + 0xe0);
}
int32_t& _Script_Engine::Level::get_NumTextureStreamingDirtyResources() {
    return *(int32_t*)((uintptr_t)this + 0xe4);
}
_Script_Engine::NavigationObjectBase*& _Script_Engine::Level::get_NavListEnd() {
    return *(_Script_Engine::NavigationObjectBase**)((uintptr_t)this + 0xf8);
}
void* _Script_Engine::Level::get_NavDataChunks() {
    return (void*)((uintptr_t)this + 0x100);
}
float& _Script_Engine::Level::get_LightmapTotalSize() {
    return *(float*)((uintptr_t)this + 0x110);
}
float& _Script_Engine::Level::get_ShadowmapTotalSize() {
    return *(float*)((uintptr_t)this + 0x114);
}
void* _Script_Engine::Level::get_StaticNavigableGeometry() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_Engine::Level::get_StreamingTextureGuids() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::Level::get_LevelBuildDataId() {
    return (void*)((uintptr_t)this + 0x1d0);
}
_Script_Engine::MapBuildDataRegistry*& _Script_Engine::Level::get_MapBuildData() {
    return *(_Script_Engine::MapBuildDataRegistry**)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::Level::get_LightBuildLevelOffset() {
    return (void*)((uintptr_t)this + 0x1e8);
}
bool _Script_Engine::Level::get_bIsLightingScenario() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f4 + 0)) & 1 != 0;
}
void _Script_Engine::Level::set_bIsLightingScenario(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Level::get_bTextureStreamingRotationChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f4 + 0)) & 8 != 0;
}
void* _Script_Engine::Level::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x268);
}
void _Script_Engine::Level::set_bTextureStreamingRotationChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::Level::get_DestroyedReplicatedStaticActors() {
    return (void*)((uintptr_t)this + 0x288);
}
bool _Script_Engine::Level::get_bStaticComponentsRegisteredInStreamingManager() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f4 + 0)) & 16 != 0;
}
bool _Script_Engine::Level::get_bIsVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f4 + 0)) & 32 != 0;
}
void _Script_Engine::Level::set_bIsVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f4 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_Engine::WorldSettings*& _Script_Engine::Level::get_WorldSettings() {
    return *(_Script_Engine::WorldSettings**)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Script_Engine::Level::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Level");
    return result;
}
