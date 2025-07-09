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
struct ClothLODDataCommon {
    private: char pad_0[0x160]; public:
    void* get_PhysicalMeshData();
    void* get_CollisionData();
    bool get_bUseMultipleInfluences();
    void set_bUseMultipleInfluences(bool value);
    float& get_SkinningKernelRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
