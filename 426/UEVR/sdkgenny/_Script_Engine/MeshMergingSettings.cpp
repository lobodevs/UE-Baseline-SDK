#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshMergingSettings.hpp"
void _Script_Engine::MeshMergingSettings::set_bIncludeImposters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
int32_t& _Script_Engine::MeshMergingSettings::get_TargetLightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MeshMergingSettings::get_OutputUVs() {
    return (void*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::MeshMergingSettings::get_GutterSize() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
void* _Script_Engine::MeshMergingSettings::get_LODSelectionType() {
    return (void*)((uintptr_t)this + 0x9c);
}
void* _Script_Engine::MeshMergingSettings::get_MaterialSettings() {
    return (void*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::MeshMergingSettings::get_SpecificLOD() {
    return *(int32_t*)((uintptr_t)this + 0x98);
}
bool _Script_Engine::MeshMergingSettings::get_bGenerateLightMapUV() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 1 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bGenerateLightMapUV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bComputedLightMapResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 2 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bComputedLightMapResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bPivotPointAtZero() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 4 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bPivotPointAtZero(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bMergePhysicsData() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 8 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bMergePhysicsData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bMergeMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 16 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bMergeMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bCreateMergedMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 32 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bCreateMergedMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bBakeVertexDataToMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 64 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bBakeVertexDataToMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bUseVertexDataForBakingMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 128 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bUseVertexDataForBakingMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bUseTextureBinning() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e + 0)) & 1 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bUseTextureBinning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bReuseMeshLightmapUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e + 0)) & 2 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bReuseMeshLightmapUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bMergeEquivalentMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e + 0)) & 4 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bMergeEquivalentMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bUseLandscapeCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e + 0)) & 8 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bUseLandscapeCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bIncludeImposters() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e + 0)) & 16 != 0;
}
bool _Script_Engine::MeshMergingSettings::get_bAllowDistanceField() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e + 0)) & 32 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bAllowDistanceField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MeshMergingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshMergingSettings");
    return result;
}
