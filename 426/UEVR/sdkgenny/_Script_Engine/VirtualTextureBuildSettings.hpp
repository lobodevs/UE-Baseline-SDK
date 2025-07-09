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
struct VirtualTextureBuildSettings {
    private: char pad_0[0xc]; public:
    int32_t& get_TileSize();
    int32_t& get_TileBorderSize();
    bool get_bEnableCompressCrunch();
    void set_bEnableCompressCrunch(bool value);
    bool get_bEnableCompressZlib();
    void set_bEnableCompressZlib(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
