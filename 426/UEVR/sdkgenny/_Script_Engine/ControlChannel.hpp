#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Channel.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ControlChannel : public Channel {
    private: char pad_70[0x18]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
