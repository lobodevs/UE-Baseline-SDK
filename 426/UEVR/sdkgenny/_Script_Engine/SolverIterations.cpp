#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SolverIterations.hpp"
_Script_CoreUObject::Class* _Script_Engine::SolverIterations::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SolverIterations");
    return result;
}
float& _Script_Engine::SolverIterations::get_FixedTimeStep() {
    return *(float*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::SolverIterations::get_SolverIterations() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::SolverIterations::get_JointIterations() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::SolverIterations::get_JointPushOutIterations() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Engine::SolverIterations::get_SolverPushOutIterations() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::SolverIterations::get_CollisionIterations() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::SolverIterations::get_CollisionPushOutIterations() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
