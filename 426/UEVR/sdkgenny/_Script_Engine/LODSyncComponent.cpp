#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponent.hpp"
#include "LODSyncComponent.hpp"
int32_t& _Script_Engine::LODSyncComponent::get_CurrentNumLODs() {
    return *(int32_t*)((uintptr_t)this + 0x11c);
}
int32_t& _Script_Engine::LODSyncComponent::get_NumLODs() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
int32_t& _Script_Engine::LODSyncComponent::get_ForcedLOD() {
    return *(int32_t*)((uintptr_t)this + 0xb4);
}
void* _Script_Engine::LODSyncComponent::get_ComponentsToSync() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::LODSyncComponent::get_DriveComponents() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::LODSyncComponent::get_CustomLODMapping() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::LODSyncComponent::get_SubComponents() {
    return (void*)((uintptr_t)this + 0x130);
}
int32_t& _Script_Engine::LODSyncComponent::get_CurrentLOD() {
    return *(int32_t*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_Engine::LODSyncComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LODSyncComponent");
    return result;
}
void* _Script_Engine::LODSyncComponent::GetLODSyncDebugText() {
    return;
}
