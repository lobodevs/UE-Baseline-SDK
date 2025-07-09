#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RecastNavMeshGenerationProperties.hpp"
float& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_AgentMaxStepHeight() {
    return *(float*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_TilePoolSize() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_CellHeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_TileSizeUU() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_CellSize() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_AgentRadius() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_AgentHeight() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_MergeRegionSize() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_AgentMaxSlope() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_MinRegionArea() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_MaxSimplificationError() {
    return *(float*)((uintptr_t)this + 0x28);
}
int32_t& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_TileNumberHardLimit() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_RegionPartitioning() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_RegionChunkSplits() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
void* _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_LayerPartitioning() {
    return (void*)((uintptr_t)this + 0x31);
}
int32_t& _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_LayerChunkSplits() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
bool _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_bSortNavigationAreasByCost() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RecastNavMeshGenerationProperties::set_bSortNavigationAreasByCost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NavigationSystem::RecastNavMeshGenerationProperties::set_bFilterLowSpanSequences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_bPerformVoxelFiltering() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 2 != 0;
}
bool _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_bMarkLowHeightAreas() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 4 != 0;
}
void _Script_NavigationSystem::RecastNavMeshGenerationProperties::set_bPerformVoxelFiltering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_NavigationSystem::RecastNavMeshGenerationProperties::set_bMarkLowHeightAreas(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_bUseExtraTopCellWhenMarkingAreas() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 8 != 0;
}
void _Script_NavigationSystem::RecastNavMeshGenerationProperties::set_bUseExtraTopCellWhenMarkingAreas(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_bFilterLowSpanSequences() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 16 != 0;
}
bool _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_bFilterLowSpanFromTileCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 32 != 0;
}
void _Script_NavigationSystem::RecastNavMeshGenerationProperties::set_bFilterLowSpanFromTileCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_NavigationSystem::RecastNavMeshGenerationProperties::get_bFixedTilePoolSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 64 != 0;
}
void _Script_NavigationSystem::RecastNavMeshGenerationProperties::set_bFixedTilePoolSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::RecastNavMeshGenerationProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NavigationSystem.RecastNavMeshGenerationProperties");
    return result;
}
