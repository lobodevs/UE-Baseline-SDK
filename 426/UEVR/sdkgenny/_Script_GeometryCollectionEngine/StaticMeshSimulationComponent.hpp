#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_PhysicsCore {
struct ChaosPhysicalMaterial;
}
namespace _Script_ChaosSolverEngine {
struct ChaosSolverActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ChaosSolverEngine {
struct ChaosPhysicsCollisionInfo;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct StaticMeshSimulationComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x88]; public:
    bool get_Simulating();
    void set_Simulating(bool value);
    bool get_bNotifyCollisions();
    void set_bNotifyCollisions(bool value);
    void* get_ObjectType();
    float& get_Mass();
    void* get_CollisionType();
    void* get_ImplicitType();
    int32_t& get_MinLevelSetResolution();
    int32_t& get_MaxLevelSetResolution();
    void* get_InitialVelocityType();
    void* get_InitialLinearVelocity();
    void* get_InitialAngularVelocity();
    float& get_DamageThreshold();
    _Script_PhysicsCore::ChaosPhysicalMaterial*& get_PhysicalMaterial();
    _Script_ChaosSolverEngine::ChaosSolverActor*& get_ChaosSolverActor();
    void* get_OnChaosPhysicsCollision();
    void* get_SimulatedComponents();
    static _Script_CoreUObject::Class* static_class();
    void ReceivePhysicsCollision(_Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo& CollisionInfo);
    void ForceRecreatePhysicsState();
}; // Size: 0x138
#pragma pack(pop)
}
