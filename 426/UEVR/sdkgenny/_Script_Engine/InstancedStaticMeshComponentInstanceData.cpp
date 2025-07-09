#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InstancedStaticMeshComponentInstanceData.hpp"
#include "SceneComponentInstanceData.hpp"
#include "StaticMesh.hpp"
void* _Script_Engine::InstancedStaticMeshComponentInstanceData::get_PerInstanceSMCustomData() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_Engine::StaticMesh*& _Script_Engine::InstancedStaticMeshComponentInstanceData::get_StaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::InstancedStaticMeshComponentInstanceData::get_CachedStaticLighting() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::InstancedStaticMeshComponentInstanceData::get_PerInstanceSMData() {
    return (void*)((uintptr_t)this + 0x100);
}
int32_t& _Script_Engine::InstancedStaticMeshComponentInstanceData::get_InstancingRandomSeed() {
    return *(int32_t*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_Engine::InstancedStaticMeshComponentInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InstancedStaticMeshComponentInstanceData");
    return result;
}
