#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshOptimizationSettings.hpp"
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_NumOfVertPercentage() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_TerminationCriterion() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_NumOfTrianglesPercentage() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_SilhouetteImportance() {
    return (void*)((uintptr_t)this + 0x19);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_MaxNumOfTriangles() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_MaxDeviationPercentage() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_MaxNumOfVerts() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_ReductionMethod() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_TextureImportance() {
    return (void*)((uintptr_t)this + 0x1a);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_ShadingImportance() {
    return (void*)((uintptr_t)this + 0x1b);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_SkinningImportance() {
    return (void*)((uintptr_t)this + 0x1c);
}
bool _Script_Engine::SkeletalMeshOptimizationSettings::get_bRemapMorphTargets() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshOptimizationSettings::set_bRemapMorphTargets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMeshOptimizationSettings::get_bRecalcNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 2 != 0;
}
void _Script_Engine::SkeletalMeshOptimizationSettings::set_bRecalcNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_WeldingThreshold() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_NormalsThreshold() {
    return *(float*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Engine::SkeletalMeshOptimizationSettings::get_MaxBonesPerVertex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::SkeletalMeshOptimizationSettings::get_bEnforceBoneBoundaries() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshOptimizationSettings::set_bEnforceBoneBoundaries(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_VolumeImportance() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::SkeletalMeshOptimizationSettings::get_bLockEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshOptimizationSettings::set_bLockEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMeshOptimizationSettings::get_bLockColorBounaries() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 2 != 0;
}
void _Script_Engine::SkeletalMeshOptimizationSettings::set_bLockColorBounaries(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::SkeletalMeshOptimizationSettings::get_BaseLOD() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshOptimizationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshOptimizationSettings");
    return result;
}
