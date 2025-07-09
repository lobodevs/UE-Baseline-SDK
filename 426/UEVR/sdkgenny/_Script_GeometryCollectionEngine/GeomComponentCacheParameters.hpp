#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_GeometryCollectionEngine {
struct GeometryCollectionCache;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeomComponentCacheParameters {
    private: char pad_0[0x50]; public:
    void* get_CacheMode();
    _Script_GeometryCollectionEngine::GeometryCollectionCache*& get_TargetCache();
    float& get_ReverseCacheBeginTime();
    bool get_SaveCollisionData();
    void set_SaveCollisionData(bool value);
    bool get_DoGenerateCollisionData();
    void set_DoGenerateCollisionData(bool value);
    int32_t& get_CollisionDataSizeMax();
    bool get_DoCollisionDataSpatialHash();
    void set_DoCollisionDataSpatialHash(bool value);
    float& get_CollisionDataSpatialHashRadius();
    int32_t& get_MaxCollisionPerCell();
    bool get_SaveBreakingData();
    void set_SaveBreakingData(bool value);
    bool get_DoGenerateBreakingData();
    void set_DoGenerateBreakingData(bool value);
    int32_t& get_BreakingDataSizeMax();
    bool get_DoBreakingDataSpatialHash();
    void set_DoBreakingDataSpatialHash(bool value);
    float& get_BreakingDataSpatialHashRadius();
    int32_t& get_MaxBreakingPerCell();
    bool get_SaveTrailingData();
    void set_SaveTrailingData(bool value);
    bool get_DoGenerateTrailingData();
    void set_DoGenerateTrailingData(bool value);
    int32_t& get_TrailingDataSizeMax();
    float& get_TrailingMinSpeedThreshold();
    float& get_TrailingMinVolumeThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
