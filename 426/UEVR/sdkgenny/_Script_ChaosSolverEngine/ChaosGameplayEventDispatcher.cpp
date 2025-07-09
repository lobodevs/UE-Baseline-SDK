#include "..\FUObjectArray.hpp"
#include "ChaosEventListenerComponent.hpp"
#include "ChaosGameplayEventDispatcher.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ChaosSolverEngine::ChaosGameplayEventDispatcher::get_CollisionEventRegistrations() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_ChaosSolverEngine::ChaosGameplayEventDispatcher::get_BreakEventRegistrations() {
    return (void*)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::ChaosGameplayEventDispatcher::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher");
    return result;
}
