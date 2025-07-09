#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeMixer : public SoundNode {
    private: char pad_48[0x10]; public:
    void* get_InputVolume();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
