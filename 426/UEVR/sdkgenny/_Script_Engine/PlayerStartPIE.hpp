#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PlayerStart.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlayerStartPIE : public PlayerStart {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x250
#pragma pack(pop)
}
