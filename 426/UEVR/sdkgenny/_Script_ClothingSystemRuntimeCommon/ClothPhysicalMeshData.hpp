#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeCommon {
#pragma pack(push, 1)
struct ClothPhysicalMeshData {
    private: char pad_0[0xf8]; public:
    void* get_Vertices();
    void* get_Normals();
    void* get_Indices();
    void* get_WeightMaps();
    void* get_InverseMasses();
    void* get_BoneData();
    int32_t& get_MaxBoneWeights();
    int32_t& get_NumFixedVerts();
    void* get_SelfCollisionIndices();
    void* get_MaxDistances();
    void* get_BackstopDistances();
    void* get_BackstopRadiuses();
    void* get_AnimDriveMultipliers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
