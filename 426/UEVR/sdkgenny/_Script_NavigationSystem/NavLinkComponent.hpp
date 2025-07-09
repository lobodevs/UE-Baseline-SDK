#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavLinkComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_440[0x20]; public:
    void* get_Links();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x460
#pragma pack(pop)
}
