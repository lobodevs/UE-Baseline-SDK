#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Info.hpp"
namespace _Script_Engine {
struct AtmosphericFogComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AtmosphericFog : public Info {
    private: char pad_220[0x8]; public:
    _Script_Engine::AtmosphericFogComponent*& get_AtmosphericFogComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x228
#pragma pack(pop)
}
