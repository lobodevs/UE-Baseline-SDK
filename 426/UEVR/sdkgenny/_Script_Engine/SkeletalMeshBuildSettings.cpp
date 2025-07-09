#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshBuildSettings.hpp"
void _Script_Engine::SkeletalMeshBuildSettings::set_bComputeWeightedNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::SkeletalMeshBuildSettings::get_bRecomputeNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshBuildSettings::set_bUseMikkTSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SkeletalMeshBuildSettings::set_bRecomputeNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMeshBuildSettings::get_bRecomputeTangents() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
bool _Script_Engine::SkeletalMeshBuildSettings::get_bComputeWeightedNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
void _Script_Engine::SkeletalMeshBuildSettings::set_bRecomputeTangents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SkeletalMeshBuildSettings::get_bUseMikkTSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
bool _Script_Engine::SkeletalMeshBuildSettings::get_bRemoveDegenerates() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_Engine::SkeletalMeshBuildSettings::set_bRemoveDegenerates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SkeletalMeshBuildSettings::get_bUseHighPrecisionTangentBasis() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_Engine::SkeletalMeshBuildSettings::set_bUseHighPrecisionTangentBasis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::SkeletalMeshBuildSettings::get_bUseFullPrecisionUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
void _Script_Engine::SkeletalMeshBuildSettings::set_bUseFullPrecisionUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::SkeletalMeshBuildSettings::get_bBuildAdjacencyBuffer() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 128 != 0;
}
void _Script_Engine::SkeletalMeshBuildSettings::set_bBuildAdjacencyBuffer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
float& _Script_Engine::SkeletalMeshBuildSettings::get_ThresholdPosition() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::SkeletalMeshBuildSettings::get_ThresholdTangentNormal() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::SkeletalMeshBuildSettings::get_ThresholdUV() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::SkeletalMeshBuildSettings::get_MorphThresholdPosition() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshBuildSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshBuildSettings");
    return result;
}
