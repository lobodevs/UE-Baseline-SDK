#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BandwidthTestActor : public Actor {
    private: char pad_220[0x20]; public:
    void* get_BandwidthGenerator();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x240
#pragma pack(pop)
}
