#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NavigationObjectBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlayerStart : public NavigationObjectBase {
    private: char pad_248[0x8]; public:
    void* get_PlayerStartTag();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x250
#pragma pack(pop)
}
