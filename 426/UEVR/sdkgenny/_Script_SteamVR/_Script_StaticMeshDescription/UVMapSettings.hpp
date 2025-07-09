#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_StaticMeshDescription {
#pragma pack(push, 1)
struct UVMapSettings {
    private: char pad_0[0x38]; public:
    void* get_Size();
    void* get_UVTile();
    void* get_Position();
    void* get_Rotation();
    void* get_Scale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
