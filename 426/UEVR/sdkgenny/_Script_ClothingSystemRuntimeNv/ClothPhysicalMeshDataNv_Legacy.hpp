#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ClothingSystemRuntimeInterface\ClothPhysicalMeshDataBase_Legacy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntimeNv {
#pragma pack(push, 1)
struct ClothPhysicalMeshDataNv_Legacy : public _Script_ClothingSystemRuntimeInterface::ClothPhysicalMeshDataBase_Legacy {
    private: char pad_e0[0x40]; public:
    void* get_MaxDistances();
    void* get_BackstopDistances();
    void* get_BackstopRadiuses();
    void* get_AnimDriveMultipliers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
