#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HierarchicalSimplification.hpp"
float& _Script_Engine::HierarchicalSimplification::get_TransitionScreenSize() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::HierarchicalSimplification::get_OverrideDrawDistance() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_Engine::HierarchicalSimplification::get_bUseOverrideDrawDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::HierarchicalSimplification::set_bUseOverrideDrawDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::HierarchicalSimplification::get_bAllowSpecificExclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
void _Script_Engine::HierarchicalSimplification::set_bSimplifyMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::HierarchicalSimplification::set_bAllowSpecificExclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::HierarchicalSimplification::get_bSimplifyMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 4 != 0;
}
bool _Script_Engine::HierarchicalSimplification::get_bOnlyGenerateClustersForVolumes() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 8 != 0;
}
void _Script_Engine::HierarchicalSimplification::set_bOnlyGenerateClustersForVolumes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::HierarchicalSimplification::get_bReusePreviousLevelClusters() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 16 != 0;
}
void _Script_Engine::HierarchicalSimplification::set_bReusePreviousLevelClusters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::HierarchicalSimplification::get_ProxySetting() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::HierarchicalSimplification::get_MergeSetting() {
    return (void*)((uintptr_t)this + 0xb4);
}
float& _Script_Engine::HierarchicalSimplification::get_DesiredBoundRadius() {
    return *(float*)((uintptr_t)this + 0x154);
}
float& _Script_Engine::HierarchicalSimplification::get_DesiredFillingPercentage() {
    return *(float*)((uintptr_t)this + 0x158);
}
int32_t& _Script_Engine::HierarchicalSimplification::get_MinNumberOfActorsToBuild() {
    return *(int32_t*)((uintptr_t)this + 0x15c);
}
_Script_CoreUObject::Class* _Script_Engine::HierarchicalSimplification::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.HierarchicalSimplification");
    return result;
}
