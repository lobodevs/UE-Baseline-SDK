#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TextureSourceBlock {
    private: char pad_0[0x18]; public:
    int32_t& get_BlockX();
    int32_t& get_BlockY();
    int32_t& get_SizeX();
    int32_t& get_SizeY();
    int32_t& get_NumSlices();
    int32_t& get_NumMips();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
