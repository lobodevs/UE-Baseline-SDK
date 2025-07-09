#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundWave.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundWaveProcedural : public SoundWave {
    private: char pad_370[0x50]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c0
#pragma pack(pop)
}
