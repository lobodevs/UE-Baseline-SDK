#include "..\FUObjectArray.hpp"
#include "SolverTrailingData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_Chaos::SolverTrailingData::get_ParticleIndexMesh() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_Chaos::SolverTrailingData::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Chaos::SolverTrailingData::get_Velocity() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Chaos::SolverTrailingData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Chaos.SolverTrailingData");
    return result;
}
void* _Script_Chaos::SolverTrailingData::get_AngularVelocity() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Chaos::SolverTrailingData::get_Mass() {
    return *(float*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Chaos::SolverTrailingData::get_ParticleIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
