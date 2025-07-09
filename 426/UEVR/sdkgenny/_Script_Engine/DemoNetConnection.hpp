#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NetConnection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DemoNetConnection : public NetConnection {
    private: char pad_1af0[0x70]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b60
#pragma pack(pop)
}
