#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeInterface {
#pragma pack(push, 1)
struct ClothVertBoneData {
    private: char pad_0[0x4c]; public:
    int32_t& get_NumInfluences();
    void* get_BoneIndices();
    float& get_BoneWeights();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4c
#pragma pack(pop)
}
