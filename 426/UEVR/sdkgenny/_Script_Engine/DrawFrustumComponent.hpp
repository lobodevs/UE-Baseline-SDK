#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DrawFrustumComponent : public PrimitiveComponent {
    private: char pad_440[0x20]; public:
    void* get_FrustumColor();
    float& get_FrustumAngle();
    float& get_FrustumAspectRatio();
    float& get_FrustumStartDist();
    float& get_FrustumEndDist();
    _Script_Engine::Texture*& get_Texture();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x460
#pragma pack(pop)
}
