#include "..\FUObjectArray.hpp"
#include "ChaosBreakEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
_Script_Engine::PrimitiveComponent*& _Script_ChaosSolverEngine::ChaosBreakEvent::get_Component() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x0);
}
void* _Script_ChaosSolverEngine::ChaosBreakEvent::get_Location() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ChaosSolverEngine::ChaosBreakEvent::get_Velocity() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ChaosSolverEngine::ChaosBreakEvent::get_AngularVelocity() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_ChaosSolverEngine::ChaosBreakEvent::get_Mass() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::ChaosBreakEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ChaosSolverEngine.ChaosBreakEvent");
    return result;
}
