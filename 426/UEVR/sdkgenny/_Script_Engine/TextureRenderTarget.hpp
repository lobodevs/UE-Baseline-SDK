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
struct TextureRenderTarget : public Texture {
    private: char pad_d8[0x8]; public:
    float& get_TargetGamma();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
