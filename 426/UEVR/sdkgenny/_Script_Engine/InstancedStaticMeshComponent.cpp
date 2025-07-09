#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "InstancedStaticMeshComponent.hpp"
#include "StaticMeshComponent.hpp"
void* _Script_Engine::InstancedStaticMeshComponent::get_InstanceReorderTable() {
    return (void*)((uintptr_t)this + 0x508);
}
void* _Script_Engine::InstancedStaticMeshComponent::get_PerInstanceSMData() {
    return (void*)((uintptr_t)this + 0x4d0);
}
int32_t& _Script_Engine::InstancedStaticMeshComponent::get_NumCustomDataFloats() {
    return *(int32_t*)((uintptr_t)this + 0x4e0);
}
int32_t& _Script_Engine::InstancedStaticMeshComponent::get_NumPendingLightmaps() {
    return *(int32_t*)((uintptr_t)this + 0x560);
}
void* _Script_Engine::InstancedStaticMeshComponent::get_PerInstanceSMCustomData() {
    return (void*)((uintptr_t)this + 0x4e8);
}
int32_t& _Script_Engine::InstancedStaticMeshComponent::get_InstancingRandomSeed() {
    return *(int32_t*)((uintptr_t)this + 0x4f8);
}
int32_t& _Script_Engine::InstancedStaticMeshComponent::get_InstanceStartCullDistance() {
    return *(int32_t*)((uintptr_t)this + 0x4fc);
}
int32_t& _Script_Engine::InstancedStaticMeshComponent::get_InstanceEndCullDistance() {
    return *(int32_t*)((uintptr_t)this + 0x500);
}
void* _Script_Engine::InstancedStaticMeshComponent::get_CachedMappings() {
    return (void*)((uintptr_t)this + 0x568);
}
_Script_CoreUObject::Class* _Script_Engine::InstancedStaticMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InstancedStaticMeshComponent");
    return result;
}
bool _Script_Engine::InstancedStaticMeshComponent::UpdateInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return;
}
bool _Script_Engine::InstancedStaticMeshComponent::SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty) {
    return;
}
void _Script_Engine::InstancedStaticMeshComponent::SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance) {
    return;
}
bool _Script_Engine::InstancedStaticMeshComponent::RemoveInstance(int32_t InstanceIndex) {
    return;
}
bool _Script_Engine::InstancedStaticMeshComponent::GetInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& OutInstanceTransform, bool bWorldSpace) {
    return;
}
void* _Script_Engine::InstancedStaticMeshComponent::GetInstancesOverlappingSphere(_Script_CoreUObject::Vector& Center, float Radius, bool bSphereInWorldSpace) {
    return;
}
void* _Script_Engine::InstancedStaticMeshComponent::GetInstancesOverlappingBox(_Script_CoreUObject::Box& Box, bool bBoxInWorldSpace) {
    return;
}
int32_t _Script_Engine::InstancedStaticMeshComponent::GetInstanceCount() {
    return;
}
void _Script_Engine::InstancedStaticMeshComponent::ClearInstances() {
    return;
}
bool _Script_Engine::InstancedStaticMeshComponent::BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, void*& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return;
}
bool _Script_Engine::InstancedStaticMeshComponent::BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, _Script_CoreUObject::Transform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return;
}
int32_t _Script_Engine::InstancedStaticMeshComponent::AddInstanceWorldSpace(_Script_CoreUObject::Transform& WorldTransform) {
    return;
}
void* _Script_Engine::InstancedStaticMeshComponent::AddInstances(void*& InstanceTransforms, bool bShouldReturnIndices) {
    return;
}
int32_t _Script_Engine::InstancedStaticMeshComponent::AddInstance(_Script_CoreUObject::Transform& InstanceTransform) {
    return;
}
