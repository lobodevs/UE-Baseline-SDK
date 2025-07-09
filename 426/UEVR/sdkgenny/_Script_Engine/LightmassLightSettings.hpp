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
struct LightmassLightSettings {
    private: char pad_0[0xc]; public:
    float& get_IndirectLightingSaturation();
    float& get_ShadowExponent();
    bool get_bUseAreaShadowsForStationaryLight();
    void set_bUseAreaShadowsForStationaryLight(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
