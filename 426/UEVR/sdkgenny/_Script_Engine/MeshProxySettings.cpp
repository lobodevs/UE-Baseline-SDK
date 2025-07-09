#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshProxySettings.hpp"
void* _Script_Engine::MeshProxySettings::get_MaterialSettings() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_Engine::MeshProxySettings::set_bReuseMeshLightmapUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa7 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::MeshProxySettings::get_ScreenSize() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::MeshProxySettings::get_VoxelSize() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::MeshProxySettings::get_MergeDistance() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::MeshProxySettings::get_HardAngleThreshold() {
    return *(float*)((uintptr_t)this + 0x9c);
}
void* _Script_Engine::MeshProxySettings::get_UnresolvedGeometryColor() {
    return (void*)((uintptr_t)this + 0x94);
}
void _Script_Engine::MeshProxySettings::set_bCreateCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa7 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::MeshProxySettings::get_MaxRayCastDist() {
    return *(float*)((uintptr_t)this + 0x98);
}
int32_t& _Script_Engine::MeshProxySettings::get_LightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::MeshProxySettings::get_NormalCalculationMethod() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_Engine::MeshProxySettings::get_LandscapeCullingPrecision() {
    return (void*)((uintptr_t)this + 0xa5);
}
bool _Script_Engine::MeshProxySettings::get_bCalculateCorrectLODModel() {
    return (*(uint8_t*)((uintptr_t)this + 0xa6 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bCalculateCorrectLODModel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bOverrideVoxelSize() {
    return (*(uint8_t*)((uintptr_t)this + 0xa6 + 0)) & 2 != 0;
}
void _Script_Engine::MeshProxySettings::set_bAllowDistanceField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshProxySettings::set_bOverrideVoxelSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa6 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bOverrideTransferDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0xa6 + 0)) & 4 != 0;
}
bool _Script_Engine::MeshProxySettings::get_bReuseMeshLightmapUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0xa7 + 0)) & 2 != 0;
}
void _Script_Engine::MeshProxySettings::set_bOverrideTransferDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa6 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bUseHardAngleThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0xa6 + 0)) & 8 != 0;
}
void _Script_Engine::MeshProxySettings::set_bUseHardAngleThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa6 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bComputeLightMapResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0xa6 + 0)) & 16 != 0;
}
void _Script_Engine::MeshProxySettings::set_bComputeLightMapResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa6 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bRecalculateNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0xa6 + 0)) & 32 != 0;
}
void _Script_Engine::MeshProxySettings::set_bRecalculateNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa6 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bUseLandscapeCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0xa6 + 0)) & 64 != 0;
}
void _Script_Engine::MeshProxySettings::set_bUseLandscapeCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa6 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bAllowAdjacency() {
    return (*(uint8_t*)((uintptr_t)this + 0xa6 + 0)) & 128 != 0;
}
void _Script_Engine::MeshProxySettings::set_bAllowAdjacency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa6 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bAllowDistanceField() {
    return (*(uint8_t*)((uintptr_t)this + 0xa7 + 0)) & 1 != 0;
}
bool _Script_Engine::MeshProxySettings::get_bCreateCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xa7 + 0)) & 4 != 0;
}
bool _Script_Engine::MeshProxySettings::get_bAllowVertexColors() {
    return (*(uint8_t*)((uintptr_t)this + 0xa7 + 0)) & 8 != 0;
}
void _Script_Engine::MeshProxySettings::set_bAllowVertexColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa7 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bGenerateLightmapUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0xa7 + 0)) & 16 != 0;
}
void _Script_Engine::MeshProxySettings::set_bGenerateLightmapUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa7 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MeshProxySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshProxySettings");
    return result;
}
