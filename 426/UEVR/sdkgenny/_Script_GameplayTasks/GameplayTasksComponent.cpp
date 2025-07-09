#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "GameplayTask.hpp"
#include "GameplayTasksComponent.hpp"
bool _Script_GameplayTasks::GameplayTasksComponent::get_bIsNetDirty() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 2 != 0;
}
void* _Script_GameplayTasks::GameplayTasksComponent::get_KnownTasks() {
    return (void*)((uintptr_t)this + 0x100);
}
void _Script_GameplayTasks::GameplayTasksComponent::set_bIsNetDirty(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_GameplayTasks::GameplayTasksComponent::get_SimulatedTasks() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_GameplayTasks::GameplayTasksComponent::get_TaskPriorityQueue() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_GameplayTasks::GameplayTasksComponent::get_TickingTasks() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_GameplayTasks::GameplayTasksComponent::get_OnClaimedResourcesChange() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_GameplayTasks::GameplayTasksComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTasks.GameplayTasksComponent");
    return result;
}
void _Script_GameplayTasks::GameplayTasksComponent::OnRep_SimulatedTasks() {
    return;
}
void* _Script_GameplayTasks::GameplayTasksComponent::K2_RunGameplayTask(void* TaskOwner, _Script_GameplayTasks::GameplayTask* Task, void* Priority, void* AdditionalRequiredResources, void* AdditionalClaimedResources) {
    return;
}
