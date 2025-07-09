#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct DemoNetDriver;
}
namespace _Script_Engine {
struct Level;
}
namespace _Script_Engine {
struct NetDriver;
}
namespace _Script_Engine {
struct LineBatchComponent;
}
namespace _Script_Engine {
struct PhysicsVolume;
}
namespace _Script_Engine {
struct GameNetworkManager;
}
namespace _Script_Engine {
struct PhysicsCollisionHandler;
}
namespace _Script_Engine {
struct ParticleEventManager;
}
namespace _Script_Engine {
struct NavigationSystemBase;
}
namespace _Script_Engine {
struct GameModeBase;
}
namespace _Script_Engine {
struct Canvas;
}
namespace _Script_Engine {
struct GameStateBase;
}
namespace _Script_Engine {
struct AISystemBase;
}
namespace _Script_Engine {
struct AvoidanceManager;
}
namespace _Script_Engine {
struct GameInstance;
}
namespace _Script_Engine {
struct WorldComposition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct WorldSettings;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct World : public _Script_CoreUObject::Object {
    private: char pad_28[0x760]; public:
    _Script_Engine::Level*& get_PersistentLevel();
    _Script_Engine::NetDriver*& get_NetDriver();
    _Script_Engine::LineBatchComponent*& get_LineBatcher();
    _Script_Engine::LineBatchComponent*& get_PersistentLineBatcher();
    _Script_Engine::LineBatchComponent*& get_ForegroundLineBatcher();
    _Script_Engine::GameNetworkManager*& get_NetworkManager();
    _Script_Engine::PhysicsCollisionHandler*& get_PhysicsCollisionHandler();
    void* get_ExtraReferencedObjects();
    void* get_PerModuleDataObjects();
    void* get_StreamingLevels();
    void* get_StreamingLevelsToConsider();
    void* get_StreamingLevelsPrefix();
    _Script_Engine::Level*& get_CurrentLevelPendingVisibility();
    _Script_Engine::Level*& get_CurrentLevelPendingInvisibility();
    _Script_Engine::DemoNetDriver*& get_DemoNetDriver();
    _Script_Engine::ParticleEventManager*& get_MyParticleEventManager();
    _Script_Engine::PhysicsVolume*& get_DefaultPhysicsVolume();
    bool get_bAreConstraintsDirty();
    void set_bAreConstraintsDirty(bool value);
    _Script_Engine::NavigationSystemBase*& get_NavigationSystem();
    _Script_Engine::GameModeBase*& get_AuthorityGameMode();
    _Script_Engine::GameStateBase*& get_GameState();
    _Script_Engine::AISystemBase*& get_AISystem();
    _Script_Engine::AvoidanceManager*& get_AvoidanceManager();
    void* get_Levels();
    void* get_LevelCollections();
    _Script_Engine::GameInstance*& get_OwningGameInstance();
    void* get_ParameterCollectionInstances();
    _Script_Engine::Canvas*& get_CanvasForRenderingToTarget();
    _Script_Engine::Canvas*& get_CanvasForDrawMaterialToRenderTarget();
    void* get_ComponentsThatNeedPreEndOfFrameSync();
    void* get_ComponentsThatNeedEndOfFrameUpdate();
    void* get_ComponentsThatNeedEndOfFrameUpdate_OnGameThread();
    _Script_Engine::WorldComposition*& get_WorldComposition();
    void* get_PSCPool();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::WorldSettings* K2_GetWorldSettings();
    void HandleTimelineScrubbed();
}; // Size: 0x788
#pragma pack(pop)
}
