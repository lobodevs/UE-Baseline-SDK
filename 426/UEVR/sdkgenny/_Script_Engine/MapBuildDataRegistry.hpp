#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MapBuildDataRegistry : public _Script_CoreUObject::Object {
    private: char pad_28[0x210]; public:
    void* get_LevelLightingQuality();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x238
#pragma pack(pop)
}
