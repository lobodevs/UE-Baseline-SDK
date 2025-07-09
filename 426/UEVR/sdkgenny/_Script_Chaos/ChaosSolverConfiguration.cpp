#include "..\FUObjectArray.hpp"
#include "ChaosSolverConfiguration.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_Chaos::ChaosSolverConfiguration::get_CollisionMarginFraction() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Chaos::ChaosSolverConfiguration::get_ClusterUnionConnectionType() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Chaos::ChaosSolverConfiguration::get_Iterations() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Chaos::ChaosSolverConfiguration::get_TrailingFilterSettings() {
    return (void*)((uintptr_t)this + 0x54);
}
int32_t& _Script_Chaos::ChaosSolverConfiguration::get_CollisionPairIterations() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
float& _Script_Chaos::ChaosSolverConfiguration::get_CollisionMarginMax() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_Chaos::ChaosSolverConfiguration::get_CollisionFilterSettings() {
    return (void*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_Chaos::ChaosSolverConfiguration::get_PushOutIterations() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_Chaos::ChaosSolverConfiguration::get_CollisionCullDistance() {
    return *(float*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Chaos::ChaosSolverConfiguration::get_CollisionPushOutPairIterations() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Chaos::ChaosSolverConfiguration::get_JointPairIterations() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Chaos::ChaosSolverConfiguration::get_JointPushOutPairIterations() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
float& _Script_Chaos::ChaosSolverConfiguration::get_ClusterConnectionFactor() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_Chaos::ChaosSolverConfiguration::get_BreakingFilterSettings() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Chaos::ChaosSolverConfiguration::get_bGenerateCollisionData() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_Chaos::ChaosSolverConfiguration::set_bGenerateCollisionData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Chaos::ChaosSolverConfiguration::get_bGenerateBreakData() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_Chaos::ChaosSolverConfiguration::set_bGenerateBreakData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Chaos::ChaosSolverConfiguration::get_bGenerateTrailingData() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_Chaos::ChaosSolverConfiguration::set_bGenerateTrailingData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Chaos::ChaosSolverConfiguration::get_bGenerateContactGraph() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
void _Script_Chaos::ChaosSolverConfiguration::set_bGenerateContactGraph(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Chaos::ChaosSolverConfiguration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Chaos.ChaosSolverConfiguration");
    return result;
}
