#include "..\FUObjectArray.hpp"
#include "..\_Script_ChaosSolverEngine\ChaosPhysicsCollisionInfo.hpp"
#include "..\_Script_ChaosSolverEngine\ChaosSolverActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\PhysicsAsset.hpp"
#include "SkeletalMeshSimulationComponent.hpp"
#include "..\_Script_PhysicsCore\ChaosPhysicalMaterial.hpp"
_Script_ChaosSolverEngine::ChaosSolverActor*& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_ChaosSolverActor() {
    return *(_Script_ChaosSolverEngine::ChaosSolverActor**)((uintptr_t)this + 0xc0);
}
_Script_PhysicsCore::ChaosPhysicalMaterial*& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_PhysicalMaterial() {
    return *(_Script_PhysicsCore::ChaosPhysicalMaterial**)((uintptr_t)this + 0xb8);
}
bool _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_bSimulating() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
_Script_Engine::PhysicsAsset*& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_OverridePhysicsAsset() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0xc8);
}
void _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::set_bNotifyCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::set_bSimulating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_bNotifyCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0xd1 + 0)) & 1 != 0;
}
void* _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_ObjectType() {
    return (void*)((uintptr_t)this + 0xd2);
}
float& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_Density() {
    return *(float*)((uintptr_t)this + 0xd4);
}
float& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_MinMass() {
    return *(float*)((uintptr_t)this + 0xd8);
}
float& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_MaxMass() {
    return *(float*)((uintptr_t)this + 0xdc);
}
void* _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_CollisionType() {
    return (void*)((uintptr_t)this + 0xe0);
}
float& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_ImplicitShapeParticlesPerUnitArea() {
    return *(float*)((uintptr_t)this + 0xe4);
}
int32_t& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_ImplicitShapeMinNumParticles() {
    return *(int32_t*)((uintptr_t)this + 0xe8);
}
int32_t& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_ImplicitShapeMaxNumParticles() {
    return *(int32_t*)((uintptr_t)this + 0xec);
}
int32_t& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_MinLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0xf0);
}
int32_t& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_MaxLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0xf4);
}
int32_t& _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_CollisionGroup() {
    return *(int32_t*)((uintptr_t)this + 0xf8);
}
void* _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_InitialVelocityType() {
    return (void*)((uintptr_t)this + 0xfc);
}
void* _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_InitialLinearVelocity() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_InitialAngularVelocity() {
    return (void*)((uintptr_t)this + 0x10c);
}
void* _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::get_OnChaosPhysicsCollision() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent");
    return result;
}
void _Script_GeometryCollectionEngine::SkeletalMeshSimulationComponent::ReceivePhysicsCollision(_Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo& CollisionInfo) {
    return;
}
