#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_ChaosSolverEngine {
struct ChaosGameplayEventDispatcher;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosSolverEngine {
#pragma pack(push, 1)
struct ChaosSolverActor : public _Script_Engine::Actor {
    private: char pad_220[0xf8]; public:
    void* get_Properties();
    float& get_TimeStepMultiplier();
    int32_t& get_CollisionIterations();
    int32_t& get_PushOutIterations();
    int32_t& get_PushOutPairIterations();
    float& get_ClusterConnectionFactor();
    void* get_ClusterUnionConnectionType();
    bool get_DoGenerateCollisionData();
    void set_DoGenerateCollisionData(bool value);
    void* get_CollisionFilterSettings();
    bool get_DoGenerateBreakingData();
    void set_DoGenerateBreakingData(bool value);
    void* get_BreakingFilterSettings();
    bool get_DoGenerateTrailingData();
    void set_DoGenerateTrailingData(bool value);
    void* get_TrailingFilterSettings();
    float& get_MassScale();
    bool get_bGenerateContactGraph();
    void set_bGenerateContactGraph(bool value);
    bool get_bHasFloor();
    void set_bHasFloor(bool value);
    float& get_FloorHeight();
    void* get_ChaosDebugSubstepControl();
    _Script_Engine::BillboardComponent*& get_SpriteComponent();
    _Script_ChaosSolverEngine::ChaosGameplayEventDispatcher*& get_GameplayEventDispatcherComponent();
    static _Script_CoreUObject::Class* static_class();
    void SetSolverActive(bool bActive);
    void SetAsCurrentWorldSolver();
}; // Size: 0x318
#pragma pack(pop)
}
