#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavigationGraphNode : public _Script_Engine::Actor {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x220
#pragma pack(pop)
}
