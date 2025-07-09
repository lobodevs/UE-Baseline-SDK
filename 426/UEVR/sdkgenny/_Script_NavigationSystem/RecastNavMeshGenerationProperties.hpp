#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct RecastNavMeshGenerationProperties {
    private: char pad_0[0x40]; public:
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
    int32_t& get_TileNumberHardLimit();
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
    bool get_bFixedTilePoolSize();
    void set_bFixedTilePoolSize(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
