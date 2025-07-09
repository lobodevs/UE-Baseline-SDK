#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Box.hpp"
#include "NavigationData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct RecastNavMesh : public NavigationData {
    private: char pad_428[0xb0]; public:
    bool get_bDrawTriangleEdges();
    void set_bDrawTriangleEdges(bool value);
    bool get_bDrawPolyEdges();
    void set_bDrawPolyEdges(bool value);
    bool get_bDrawFilledPolys();
    void set_bDrawFilledPolys(bool value);
    bool get_bDrawNavMeshEdges();
    void set_bDrawNavMeshEdges(bool value);
    bool get_bDrawTileBounds();
    void set_bDrawTileBounds(bool value);
    bool get_bDrawPathCollidingGeometry();
    void set_bDrawPathCollidingGeometry(bool value);
    bool get_bDrawTileLabels();
    void set_bDrawTileLabels(bool value);
    bool get_bDrawPolygonLabels();
    void set_bDrawPolygonLabels(bool value);
    bool get_bDrawDefaultPolygonCost();
    void set_bDrawDefaultPolygonCost(bool value);
    bool get_bDrawLabelsOnPathNodes();
    void set_bDrawLabelsOnPathNodes(bool value);
    bool get_bDrawNavLinks();
    void set_bDrawNavLinks(bool value);
    bool get_bDrawFailedNavLinks();
    void set_bDrawFailedNavLinks(bool value);
    bool get_bDrawClusters();
    void set_bDrawClusters(bool value);
    bool get_bDrawOctree();
    void set_bDrawOctree(bool value);
    bool get_bDrawOctreeDetails();
    void set_bDrawOctreeDetails(bool value);
    bool get_bDrawMarkedForbiddenPolys();
    void set_bDrawMarkedForbiddenPolys(bool value);
    bool get_bDistinctlyDrawTilesBeingBuilt();
    void set_bDistinctlyDrawTilesBeingBuilt(bool value);
    float& get_DrawOffset();
    bool get_bFixedTilePoolSize();
    void set_bFixedTilePoolSize(bool value);
    int32_t& get_TilePoolSize();
    float& get_TileSizeUU();
    float& get_CellSize();
    float& get_CellHeight();
    float& get_AgentRadius();
    float& get_AgentHeight();
    float& get_AgentMaxSlope();
    float& get_AgentMaxStepHeight();
    float& get_MinRegionArea();
    float& get_MergeRegionSize();
    float& get_MaxSimplificationError();
    int32_t& get_MaxSimultaneousTileGenerationJobsCount();
    int32_t& get_TileNumberHardLimit();
    int32_t& get_PolyRefTileBits();
    int32_t& get_PolyRefNavPolyBits();
    int32_t& get_PolyRefSaltBits();
    void* get_NavMeshOriginOffset();
    float& get_DefaultDrawDistance();
    float& get_DefaultMaxSearchNodes();
    float& get_DefaultMaxHierarchicalSearchNodes();
    void* get_RegionPartitioning();
    void* get_LayerPartitioning();
    int32_t& get_RegionChunkSplits();
    int32_t& get_LayerChunkSplits();
    bool get_bSortNavigationAreasByCost();
    void set_bSortNavigationAreasByCost(bool value);
    bool get_bPerformVoxelFiltering();
    void set_bPerformVoxelFiltering(bool value);
    bool get_bMarkLowHeightAreas();
    void set_bMarkLowHeightAreas(bool value);
    bool get_bUseExtraTopCellWhenMarkingAreas();
    void set_bUseExtraTopCellWhenMarkingAreas(bool value);
    bool get_bFilterLowSpanSequences();
    void set_bFilterLowSpanSequences(bool value);
    bool get_bFilterLowSpanFromTileCache();
    void set_bFilterLowSpanFromTileCache(bool value);
    bool get_bDoFullyAsyncNavDataGathering();
    void set_bDoFullyAsyncNavDataGathering(bool value);
    bool get_bUseBetterOffsetsFromCorners();
    void set_bUseBetterOffsetsFromCorners(bool value);
    bool get_bStoreEmptyTileLayers();
    void set_bStoreEmptyTileLayers(bool value);
    bool get_bUseVirtualFilters();
    void set_bUseVirtualFilters(bool value);
    bool get_bAllowNavLinkAsPathEnd();
    void set_bAllowNavLinkAsPathEnd(bool value);
    bool get_bUseVoxelCache();
    void set_bUseVoxelCache(bool value);
    float& get_TileSetUpdateInterval();
    float& get_HeuristicScale();
    float& get_VerticalDeviationFromGroundCompensation();
    static _Script_CoreUObject::Class* static_class();
    bool K2_ReplaceAreaInTileBounds(_Script_CoreUObject::Box Bounds, void* OldArea, void* NewArea, bool ReplaceLinks);
}; // Size: 0x4d8
#pragma pack(pop)
}
