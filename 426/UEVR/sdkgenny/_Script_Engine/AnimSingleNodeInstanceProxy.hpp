#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimInstanceProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimSingleNodeInstanceProxy : public AnimInstanceProxy {
    private: char pad_760[0x150]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8b0
#pragma pack(pop)
}
