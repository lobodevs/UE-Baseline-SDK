#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationData.hpp"
#include "RecastNavMesh.hpp"
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawTriangleEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 1 != 0;
}
int32_t& _Script_NavigationSystem::RecastNavMesh::get_LayerChunkSplits() {
    return *(int32_t*)((uintptr_t)this + 0x494);
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawNavMeshEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawFilledPolys() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 4 != 0;
}
float& _Script_NavigationSystem::RecastNavMesh::get_MinRegionArea() {
    return *(float*)((uintptr_t)this + 0x454);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bUseVirtualFilters() {
    return (*(uint8_t*)((uintptr_t)this + 0x499 + 0)) & 2 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawPolyEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawTriangleEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawPolyEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 2 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawFilledPolys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
int32_t& _Script_NavigationSystem::RecastNavMesh::get_MaxSimultaneousTileGenerationJobsCount() {
    return *(int32_t*)((uintptr_t)this + 0x460);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawNavMeshEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 8 != 0;
}
int32_t& _Script_NavigationSystem::RecastNavMesh::get_PolyRefTileBits() {
    return *(int32_t*)((uintptr_t)this + 0x468);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawTileBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 16 != 0;
}
float& _Script_NavigationSystem::RecastNavMesh::get_MergeRegionSize() {
    return *(float*)((uintptr_t)this + 0x458);
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawTileBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawPathCollidingGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 32 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawPathCollidingGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawTileLabels() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 64 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawTileLabels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_NavigationSystem::RecastNavMesh::get_DefaultMaxSearchNodes() {
    return *(float*)((uintptr_t)this + 0x484);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawPolygonLabels() {
    return (*(uint8_t*)((uintptr_t)this + 0x428 + 0)) & 128 != 0;
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDistinctlyDrawTilesBeingBuilt() {
    return (*(uint8_t*)((uintptr_t)this + 0x42a + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawPolygonLabels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x428 + 0);
    *(uint8_t*)((uintptr_t)this + 0x428 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_NavigationSystem::RecastNavMesh::set_bSortNavigationAreasByCost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawDefaultPolygonCost() {
    return (*(uint8_t*)((uintptr_t)this + 0x429 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawDefaultPolygonCost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x429 + 0);
    *(uint8_t*)((uintptr_t)this + 0x429 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawLabelsOnPathNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x429 + 0)) & 2 != 0;
}
float& _Script_NavigationSystem::RecastNavMesh::get_DefaultDrawDistance() {
    return *(float*)((uintptr_t)this + 0x480);
}
float& _Script_NavigationSystem::RecastNavMesh::get_AgentMaxSlope() {
    return *(float*)((uintptr_t)this + 0x44c);
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawLabelsOnPathNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x429 + 0);
    *(uint8_t*)((uintptr_t)this + 0x429 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawFailedNavLinks() {
    return (*(uint8_t*)((uintptr_t)this + 0x429 + 0)) & 8 != 0;
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawNavLinks() {
    return (*(uint8_t*)((uintptr_t)this + 0x429 + 0)) & 4 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawMarkedForbiddenPolys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x429 + 0);
    *(uint8_t*)((uintptr_t)this + 0x429 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawNavLinks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x429 + 0);
    *(uint8_t*)((uintptr_t)this + 0x429 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_NavigationSystem::RecastNavMesh::get_LayerPartitioning() {
    return (void*)((uintptr_t)this + 0x48d);
}
float& _Script_NavigationSystem::RecastNavMesh::get_AgentHeight() {
    return *(float*)((uintptr_t)this + 0x448);
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawFailedNavLinks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x429 + 0);
    *(uint8_t*)((uintptr_t)this + 0x429 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawClusters() {
    return (*(uint8_t*)((uintptr_t)this + 0x429 + 0)) & 16 != 0;
}
bool _Script_NavigationSystem::RecastNavMesh::get_bFixedTilePoolSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x430 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawClusters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x429 + 0);
    *(uint8_t*)((uintptr_t)this + 0x429 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawOctree() {
    return (*(uint8_t*)((uintptr_t)this + 0x429 + 0)) & 32 != 0;
}
float& _Script_NavigationSystem::RecastNavMesh::get_DefaultMaxHierarchicalSearchNodes() {
    return *(float*)((uintptr_t)this + 0x488);
}
float& _Script_NavigationSystem::RecastNavMesh::get_CellHeight() {
    return *(float*)((uintptr_t)this + 0x440);
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawOctree(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x429 + 0);
    *(uint8_t*)((uintptr_t)this + 0x429 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawOctreeDetails() {
    return (*(uint8_t*)((uintptr_t)this + 0x429 + 0)) & 64 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bDrawOctreeDetails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x429 + 0);
    *(uint8_t*)((uintptr_t)this + 0x429 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDrawMarkedForbiddenPolys() {
    return (*(uint8_t*)((uintptr_t)this + 0x429 + 0)) & 128 != 0;
}
int32_t& _Script_NavigationSystem::RecastNavMesh::get_TilePoolSize() {
    return *(int32_t*)((uintptr_t)this + 0x434);
}
void _Script_NavigationSystem::RecastNavMesh::set_bDistinctlyDrawTilesBeingBuilt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x42a + 0);
    *(uint8_t*)((uintptr_t)this + 0x42a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_NavigationSystem::RecastNavMesh::get_DrawOffset() {
    return *(float*)((uintptr_t)this + 0x42c);
}
void _Script_NavigationSystem::RecastNavMesh::set_bFixedTilePoolSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x430 + 0);
    *(uint8_t*)((uintptr_t)this + 0x430 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_NavigationSystem::RecastNavMesh::get_TileSizeUU() {
    return *(float*)((uintptr_t)this + 0x438);
}
float& _Script_NavigationSystem::RecastNavMesh::get_CellSize() {
    return *(float*)((uintptr_t)this + 0x43c);
}
float& _Script_NavigationSystem::RecastNavMesh::get_AgentRadius() {
    return *(float*)((uintptr_t)this + 0x444);
}
float& _Script_NavigationSystem::RecastNavMesh::get_AgentMaxStepHeight() {
    return *(float*)((uintptr_t)this + 0x450);
}
float& _Script_NavigationSystem::RecastNavMesh::get_MaxSimplificationError() {
    return *(float*)((uintptr_t)this + 0x45c);
}
int32_t& _Script_NavigationSystem::RecastNavMesh::get_TileNumberHardLimit() {
    return *(int32_t*)((uintptr_t)this + 0x464);
}
int32_t& _Script_NavigationSystem::RecastNavMesh::get_PolyRefNavPolyBits() {
    return *(int32_t*)((uintptr_t)this + 0x46c);
}
int32_t& _Script_NavigationSystem::RecastNavMesh::get_PolyRefSaltBits() {
    return *(int32_t*)((uintptr_t)this + 0x470);
}
void* _Script_NavigationSystem::RecastNavMesh::get_NavMeshOriginOffset() {
    return (void*)((uintptr_t)this + 0x474);
}
void* _Script_NavigationSystem::RecastNavMesh::get_RegionPartitioning() {
    return (void*)((uintptr_t)this + 0x48c);
}
int32_t& _Script_NavigationSystem::RecastNavMesh::get_RegionChunkSplits() {
    return *(int32_t*)((uintptr_t)this + 0x490);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bSortNavigationAreasByCost() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 1 != 0;
}
bool _Script_NavigationSystem::RecastNavMesh::get_bPerformVoxelFiltering() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 2 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bPerformVoxelFiltering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bMarkLowHeightAreas() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 4 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bMarkLowHeightAreas(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bUseExtraTopCellWhenMarkingAreas() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 8 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bUseExtraTopCellWhenMarkingAreas(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bFilterLowSpanSequences() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 16 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bFilterLowSpanSequences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bFilterLowSpanFromTileCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 32 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bFilterLowSpanFromTileCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bDoFullyAsyncNavDataGathering() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 64 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bDoFullyAsyncNavDataGathering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bUseBetterOffsetsFromCorners() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 128 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bUseBetterOffsetsFromCorners(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bStoreEmptyTileLayers() {
    return (*(uint8_t*)((uintptr_t)this + 0x499 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bStoreEmptyTileLayers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x499 + 0);
    *(uint8_t*)((uintptr_t)this + 0x499 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NavigationSystem::RecastNavMesh::set_bUseVirtualFilters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x499 + 0);
    *(uint8_t*)((uintptr_t)this + 0x499 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bAllowNavLinkAsPathEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x499 + 0)) & 4 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bAllowNavLinkAsPathEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x499 + 0);
    *(uint8_t*)((uintptr_t)this + 0x499 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_NavigationSystem::RecastNavMesh::get_bUseVoxelCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x499 + 0)) & 8 != 0;
}
void _Script_NavigationSystem::RecastNavMesh::set_bUseVoxelCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x499 + 0);
    *(uint8_t*)((uintptr_t)this + 0x499 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_NavigationSystem::RecastNavMesh::get_TileSetUpdateInterval() {
    return *(float*)((uintptr_t)this + 0x49c);
}
float& _Script_NavigationSystem::RecastNavMesh::get_HeuristicScale() {
    return *(float*)((uintptr_t)this + 0x4a0);
}
float& _Script_NavigationSystem::RecastNavMesh::get_VerticalDeviationFromGroundCompensation() {
    return *(float*)((uintptr_t)this + 0x4a4);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::RecastNavMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.RecastNavMesh");
    return result;
}
bool _Script_NavigationSystem::RecastNavMesh::K2_ReplaceAreaInTileBounds(_Script_CoreUObject::Box Bounds, void* OldArea, void* NewArea, bool ReplaceLinks) {
    return;
}
