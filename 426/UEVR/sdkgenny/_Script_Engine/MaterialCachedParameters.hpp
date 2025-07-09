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
struct MaterialCachedParameters {
    private: char pad_0[0x1a0]; public:
    void* get_RuntimeEntries();
    void* get_ScalarValues();
    void* get_VectorValues();
    void* get_TextureValues();
    void* get_FontValues();
    void* get_FontPageValues();
    void* get_RuntimeVirtualTextureValues();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
