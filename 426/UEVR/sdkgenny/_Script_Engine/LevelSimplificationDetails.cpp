#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSimplificationDetails.hpp"
bool _Script_Engine::LevelSimplificationDetails::get_bGenerateLandscapeSpecularMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x129 + 0)) & 1 != 0;
}
bool _Script_Engine::LevelSimplificationDetails::get_bCreatePackagePerAsset() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::LevelSimplificationDetails::set_bCreatePackagePerAsset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::LevelSimplificationDetails::get_StaticMeshMaterialSettings() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::LevelSimplificationDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LevelSimplificationDetails");
    return result;
}
float& _Script_Engine::LevelSimplificationDetails::get_DetailsPercentage() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::LevelSimplificationDetails::get_LandscapeMaterialSettings() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_Engine::LevelSimplificationDetails::get_bOverrideLandscapeExportLOD() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_Engine::LevelSimplificationDetails::set_bOverrideLandscapeExportLOD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::LevelSimplificationDetails::get_LandscapeExportLOD() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
bool _Script_Engine::LevelSimplificationDetails::get_bBakeFoliageToLandscape() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void _Script_Engine::LevelSimplificationDetails::set_bBakeFoliageToLandscape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LevelSimplificationDetails::get_bBakeGrassToLandscape() {
    return (*(uint8_t*)((uintptr_t)this + 0x121 + 0)) & 1 != 0;
}
void _Script_Engine::LevelSimplificationDetails::set_bBakeGrassToLandscape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x121 + 0);
    *(uint8_t*)((uintptr_t)this + 0x121 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LevelSimplificationDetails::get_bGenerateMeshMetallicMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x123 + 0)) & 1 != 0;
}
bool _Script_Engine::LevelSimplificationDetails::get_bGenerateMeshNormalMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x122 + 0)) & 1 != 0;
}
bool _Script_Engine::LevelSimplificationDetails::get_bGenerateLandscapeNormalMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x126 + 0)) & 1 != 0;
}
void _Script_Engine::LevelSimplificationDetails::set_bGenerateMeshNormalMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x122 + 0);
    *(uint8_t*)((uintptr_t)this + 0x122 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::LevelSimplificationDetails::set_bGenerateMeshMetallicMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x123 + 0);
    *(uint8_t*)((uintptr_t)this + 0x123 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LevelSimplificationDetails::get_bGenerateMeshRoughnessMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 1 != 0;
}
void _Script_Engine::LevelSimplificationDetails::set_bGenerateMeshRoughnessMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::LevelSimplificationDetails::set_bGenerateMeshSpecularMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x125 + 0);
    *(uint8_t*)((uintptr_t)this + 0x125 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LevelSimplificationDetails::get_bGenerateMeshSpecularMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x125 + 0)) & 1 != 0;
}
void _Script_Engine::LevelSimplificationDetails::set_bGenerateLandscapeNormalMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x126 + 0);
    *(uint8_t*)((uintptr_t)this + 0x126 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LevelSimplificationDetails::get_bGenerateLandscapeMetallicMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x127 + 0)) & 1 != 0;
}
void _Script_Engine::LevelSimplificationDetails::set_bGenerateLandscapeMetallicMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x127 + 0);
    *(uint8_t*)((uintptr_t)this + 0x127 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LevelSimplificationDetails::get_bGenerateLandscapeRoughnessMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Script_Engine::LevelSimplificationDetails::set_bGenerateLandscapeRoughnessMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::LevelSimplificationDetails::set_bGenerateLandscapeSpecularMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x129 + 0);
    *(uint8_t*)((uintptr_t)this + 0x129 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
