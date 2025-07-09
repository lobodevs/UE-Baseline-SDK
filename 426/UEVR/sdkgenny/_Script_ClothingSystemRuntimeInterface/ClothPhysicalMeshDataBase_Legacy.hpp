#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeInterface {
#pragma pack(push, 1)
struct ClothPhysicalMeshDataBase_Legacy : public _Script_CoreUObject::Object {
    private: char pad_28[0xb8]; public:
    void* get_Vertices();
    void* get_Normals();
    void* get_Indices();
    void* get_InverseMasses();
    void* get_BoneData();
    int32_t& get_NumFixedVerts();
    int32_t& get_MaxBoneWeights();
    void* get_SelfCollisionIndices();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
