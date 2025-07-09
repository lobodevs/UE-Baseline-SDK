#include "..\FUObjectArray.hpp"
#include "..\_Script_ChaosSolverEngine\ChaosPhysicsCollisionInfo.hpp"
#include "..\_Script_ChaosSolverEngine\ChaosSolverActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "StaticMeshSimulationComponent.hpp"
#include "..\_Script_PhysicsCore\ChaosPhysicalMaterial.hpp"
void* _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_ObjectType() {
    return (void*)((uintptr_t)this + 0xba);
}
bool _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_Simulating() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::set_Simulating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_Mass() {
    return *(float*)((uintptr_t)this + 0xbc);
}
void* _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_SimulatedComponents() {
    return (void*)((uintptr_t)this + 0x120);
}
bool _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_bNotifyCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0xb9 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::set_bNotifyCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_CollisionType() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_ImplicitType() {
    return (void*)((uintptr_t)this + 0xc1);
}
int32_t& _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_MinLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0xc4);
}
int32_t& _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_MaxLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0xc8);
}
void* _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_InitialVelocityType() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_InitialLinearVelocity() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_InitialAngularVelocity() {
    return (void*)((uintptr_t)this + 0xdc);
}
float& _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_DamageThreshold() {
    return *(float*)((uintptr_t)this + 0xe8);
}
_Script_PhysicsCore::ChaosPhysicalMaterial*& _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_PhysicalMaterial() {
    return *(_Script_PhysicsCore::ChaosPhysicalMaterial**)((uintptr_t)this + 0xf0);
}
_Script_ChaosSolverEngine::ChaosSolverActor*& _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_ChaosSolverActor() {
    return *(_Script_ChaosSolverEngine::ChaosSolverActor**)((uintptr_t)this + 0xf8);
}
void* _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::get_OnChaosPhysicsCollision() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.StaticMeshSimulationComponent");
    return result;
}
void _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::ReceivePhysicsCollision(_Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo& CollisionInfo) {
    return;
}
void _Script_GeometryCollectionEngine::StaticMeshSimulationComponent::ForceRecreatePhysicsState() {
    return;
}
