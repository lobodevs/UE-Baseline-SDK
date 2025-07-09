#include "..\FUObjectArray.hpp"
#include "SolverCollisionData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_Chaos::SolverCollisionData::get_AngularVelocity1() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Chaos::SolverCollisionData::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Chaos::SolverCollisionData::get_AccumulatedImpulse() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Chaos::SolverCollisionData::get_Mass1() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_Chaos::SolverCollisionData::get_AngularVelocity2() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Chaos::SolverCollisionData::get_Normal() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Chaos::SolverCollisionData::get_Velocity1() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_Chaos::SolverCollisionData::get_Velocity2() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Chaos::SolverCollisionData::get_Mass2() {
    return *(float*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Chaos::SolverCollisionData::get_ParticleIndex() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
int32_t& _Script_Chaos::SolverCollisionData::get_LevelsetIndex() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Chaos::SolverCollisionData::get_ParticleIndexMesh() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
int32_t& _Script_Chaos::SolverCollisionData::get_LevelsetIndexMesh() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Chaos::SolverCollisionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Chaos.SolverCollisionData");
    return result;
}
