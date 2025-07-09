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
struct ExponentialHeightFogData {
    private: char pad_0[0xc]; public:
    float& get_FogDensity();
    float& get_FogHeightFalloff();
    float& get_FogHeightOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
