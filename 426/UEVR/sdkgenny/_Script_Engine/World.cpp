#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AISystemBase.hpp"
#include "AvoidanceManager.hpp"
#include "Canvas.hpp"
#include "DemoNetDriver.hpp"
#include "GameInstance.hpp"
#include "GameModeBase.hpp"
#include "GameNetworkManager.hpp"
#include "GameStateBase.hpp"
#include "Level.hpp"
#include "LineBatchComponent.hpp"
#include "NavigationSystemBase.hpp"
#include "NetDriver.hpp"
#include "ParticleEventManager.hpp"
#include "PhysicsCollisionHandler.hpp"
#include "PhysicsVolume.hpp"
#include "World.hpp"
#include "WorldComposition.hpp"
#include "WorldSettings.hpp"
_Script_Engine::Level*& _Script_Engine::World::get_PersistentLevel() {
    return *(_Script_Engine::Level**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::World::get_ComponentsThatNeedEndOfFrameUpdate_OnGameThread() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Script_Engine::World::get_ExtraReferencedObjects() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_Engine::NetDriver*& _Script_Engine::World::get_NetDriver() {
    return *(_Script_Engine::NetDriver**)((uintptr_t)this + 0x38);
}
_Script_Engine::LineBatchComponent*& _Script_Engine::World::get_LineBatcher() {
    return *(_Script_Engine::LineBatchComponent**)((uintptr_t)this + 0x40);
}
_Script_Engine::Level*& _Script_Engine::World::get_CurrentLevelPendingInvisibility() {
    return *(_Script_Engine::Level**)((uintptr_t)this + 0xd8);
}
_Script_Engine::GameNetworkManager*& _Script_Engine::World::get_NetworkManager() {
    return *(_Script_Engine::GameNetworkManager**)((uintptr_t)this + 0x58);
}
_Script_Engine::LineBatchComponent*& _Script_Engine::World::get_PersistentLineBatcher() {
    return *(_Script_Engine::LineBatchComponent**)((uintptr_t)this + 0x48);
}
_Script_Engine::DemoNetDriver*& _Script_Engine::World::get_DemoNetDriver() {
    return *(_Script_Engine::DemoNetDriver**)((uintptr_t)this + 0xe0);
}
_Script_Engine::LineBatchComponent*& _Script_Engine::World::get_ForegroundLineBatcher() {
    return *(_Script_Engine::LineBatchComponent**)((uintptr_t)this + 0x50);
}
void* _Script_Engine::World::get_LevelCollections() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_Engine::PhysicsCollisionHandler*& _Script_Engine::World::get_PhysicsCollisionHandler() {
    return *(_Script_Engine::PhysicsCollisionHandler**)((uintptr_t)this + 0x60);
}
void* _Script_Engine::World::get_PerModuleDataObjects() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::World::get_StreamingLevels() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::World::get_StreamingLevelsToConsider() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::World::get_StreamingLevelsPrefix() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::World::get_Levels() {
    return (void*)((uintptr_t)this + 0x138);
}
_Script_Engine::Level*& _Script_Engine::World::get_CurrentLevelPendingVisibility() {
    return *(_Script_Engine::Level**)((uintptr_t)this + 0xd0);
}
_Script_Engine::GameStateBase*& _Script_Engine::World::get_GameState() {
    return *(_Script_Engine::GameStateBase**)((uintptr_t)this + 0x120);
}
_Script_Engine::ParticleEventManager*& _Script_Engine::World::get_MyParticleEventManager() {
    return *(_Script_Engine::ParticleEventManager**)((uintptr_t)this + 0xe8);
}
_Script_Engine::PhysicsVolume*& _Script_Engine::World::get_DefaultPhysicsVolume() {
    return *(_Script_Engine::PhysicsVolume**)((uintptr_t)this + 0xf0);
}
bool _Script_Engine::World::get_bAreConstraintsDirty() {
    return (*(uint8_t*)((uintptr_t)this + 0x10e + 0)) & 4 != 0;
}
void _Script_Engine::World::set_bAreConstraintsDirty(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10e + 0);
    *(uint8_t*)((uintptr_t)this + 0x10e + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::World::HandleTimelineScrubbed() {
    return;
}
_Script_Engine::NavigationSystemBase*& _Script_Engine::World::get_NavigationSystem() {
    return *(_Script_Engine::NavigationSystemBase**)((uintptr_t)this + 0x110);
}
_Script_Engine::GameModeBase*& _Script_Engine::World::get_AuthorityGameMode() {
    return *(_Script_Engine::GameModeBase**)((uintptr_t)this + 0x118);
}
_Script_Engine::AISystemBase*& _Script_Engine::World::get_AISystem() {
    return *(_Script_Engine::AISystemBase**)((uintptr_t)this + 0x128);
}
_Script_Engine::AvoidanceManager*& _Script_Engine::World::get_AvoidanceManager() {
    return *(_Script_Engine::AvoidanceManager**)((uintptr_t)this + 0x130);
}
_Script_Engine::GameInstance*& _Script_Engine::World::get_OwningGameInstance() {
    return *(_Script_Engine::GameInstance**)((uintptr_t)this + 0x180);
}
void* _Script_Engine::World::get_ParameterCollectionInstances() {
    return (void*)((uintptr_t)this + 0x188);
}
_Script_Engine::Canvas*& _Script_Engine::World::get_CanvasForRenderingToTarget() {
    return *(_Script_Engine::Canvas**)((uintptr_t)this + 0x198);
}
_Script_Engine::Canvas*& _Script_Engine::World::get_CanvasForDrawMaterialToRenderTarget() {
    return *(_Script_Engine::Canvas**)((uintptr_t)this + 0x1a0);
}
void* _Script_Engine::World::get_ComponentsThatNeedPreEndOfFrameSync() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_Engine::World::get_ComponentsThatNeedEndOfFrameUpdate() {
    return (void*)((uintptr_t)this + 0x248);
}
_Script_Engine::WorldComposition*& _Script_Engine::World::get_WorldComposition() {
    return *(_Script_Engine::WorldComposition**)((uintptr_t)this + 0x5d8);
}
void* _Script_Engine::World::get_PSCPool() {
    return (void*)((uintptr_t)this + 0x668);
}
_Script_CoreUObject::Class* _Script_Engine::World::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.World");
    return result;
}
_Script_Engine::WorldSettings* _Script_Engine::World::K2_GetWorldSettings() {
    return;
}
