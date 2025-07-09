#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Texture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Texture2D : public Texture {
    private: char pad_d8[0x28]; public:
    int32_t& get_LevelIndex();
    int32_t& get_FirstResourceMemMip();
    bool get_bTemporarilyDisableStreaming();
    void set_bTemporarilyDisableStreaming(bool value);
    void* get_AddressX();
    void* get_AddressY();
    void* get_ImportedSize();
    static _Script_CoreUObject::Class* static_class();
    int32_t Blueprint_GetSizeY();
    int32_t Blueprint_GetSizeX();
}; // Size: 0x100
#pragma pack(pop)
}
