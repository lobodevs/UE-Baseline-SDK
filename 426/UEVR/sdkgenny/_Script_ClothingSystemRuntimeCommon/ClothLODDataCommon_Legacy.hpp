#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_ClothingSystemRuntimeInterface {
struct ClothPhysicalMeshDataBase_Legacy;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeCommon {
#pragma pack(push, 1)
struct ClothLODDataCommon_Legacy : public _Script_CoreUObject::Object {
    private: char pad_28[0x160]; public:
    _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy*& get_PhysicalMeshData();
    void* get_ClothPhysicalMeshData();
    void* get_CollisionData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x188
#pragma pack(pop)
}
