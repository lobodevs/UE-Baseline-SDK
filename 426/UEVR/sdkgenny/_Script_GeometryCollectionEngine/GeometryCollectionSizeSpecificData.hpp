#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCollectionEngine {
#pragma pack(push, 1)
struct GeometryCollectionSizeSpecificData {
    private: char pad_0[0x24]; public:
    float& get_MaxSize();
    void* get_CollisionType();
    void* get_ImplicitType();
    int32_t& get_MinLevelSetResolution();
    int32_t& get_MaxLevelSetResolution();
    int32_t& get_MinClusterLevelSetResolution();
    int32_t& get_MaxClusterLevelSetResolution();
    int32_t& get_CollisionObjectReductionPercentage();
    float& get_CollisionParticlesFraction();
    int32_t& get_MaximumCollisionParticles();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
