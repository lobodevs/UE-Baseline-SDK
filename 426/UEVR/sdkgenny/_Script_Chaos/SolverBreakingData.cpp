#include "..\FUObjectArray.hpp"
#include "SolverBreakingData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_Chaos::SolverBreakingData::get_ParticleIndexMesh() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_Chaos::SolverBreakingData::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Chaos::SolverBreakingData::get_Velocity() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Chaos::SolverBreakingData::get_AngularVelocity() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Chaos::SolverBreakingData::get_Mass() {
    return *(float*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Chaos::SolverBreakingData::get_ParticleIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Chaos::SolverBreakingData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Chaos.SolverBreakingData");
    return result;
}
