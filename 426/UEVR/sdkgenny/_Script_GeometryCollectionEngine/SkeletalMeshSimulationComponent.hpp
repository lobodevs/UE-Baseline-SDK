#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_PhysicsCore {
struct ChaosPhysicalMaterial;
}
namespace _Script_Engine {
struct PhysicsAsset;
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
struct SkeletalMeshSimulationComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x88]; public:
    _Script_PhysicsCore::ChaosPhysicalMaterial*& get_PhysicalMaterial();
    _Script_ChaosSolverEngine::ChaosSolverActor*& get_ChaosSolverActor();
    _Script_Engine::PhysicsAsset*& get_OverridePhysicsAsset();
    bool get_bSimulating();
    void set_bSimulating(bool value);
    bool get_bNotifyCollisions();
    void set_bNotifyCollisions(bool value);
    void* get_ObjectType();
    float& get_Density();
    float& get_MinMass();
    float& get_MaxMass();
    void* get_CollisionType();
    float& get_ImplicitShapeParticlesPerUnitArea();
    int32_t& get_ImplicitShapeMinNumParticles();
    int32_t& get_ImplicitShapeMaxNumParticles();
    int32_t& get_MinLevelSetResolution();
    int32_t& get_MaxLevelSetResolution();
    int32_t& get_CollisionGroup();
    void* get_InitialVelocityType();
    void* get_InitialLinearVelocity();
    void* get_InitialAngularVelocity();
    void* get_OnChaosPhysicsCollision();
    static _Script_CoreUObject::Class* static_class();
    void ReceivePhysicsCollision(_Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo& CollisionInfo);
}; // Size: 0x138
#pragma pack(pop)
}
