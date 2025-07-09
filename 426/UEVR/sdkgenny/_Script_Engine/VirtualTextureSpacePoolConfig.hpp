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
struct VirtualTextureSpacePoolConfig {
    private: char pad_0[0x28]; public:
    int32_t& get_MinTileSize();
    int32_t& get_MaxTileSize();
    void* get_Formats();
    int32_t& get_SizeInMegabyte();
    bool get_bAllowSizeScale();
    void set_bAllowSizeScale(bool value);
    void* get_ScalabilityGroup();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
