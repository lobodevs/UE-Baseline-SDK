#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleVelocity.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleVelocity_Seeded : public ParticleModuleVelocity {
    private: char pad_b0[0x20]; public:
    void* get_RandomSeedInfo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
