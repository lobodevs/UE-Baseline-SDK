#include "..\FUObjectArray.hpp"
#include "ChaosPhysicsCollisionInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
_Script_Engine::PrimitiveComponent*& _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_Component() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x0);
}
void* _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_Velocity() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_Engine::PrimitiveComponent*& _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_OtherComponent() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x8);
}
void* _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_Location() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_AccumulatedImpulse() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_Normal() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_OtherVelocity() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_AngularVelocity() {
    return (void*)((uintptr_t)this + 0x4c);
}
void* _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_OtherAngularVelocity() {
    return (void*)((uintptr_t)this + 0x58);
}
float& _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_OtherMass() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::get_Mass() {
    return *(float*)((uintptr_t)this + 0x64);
}
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo");
    return result;
}
