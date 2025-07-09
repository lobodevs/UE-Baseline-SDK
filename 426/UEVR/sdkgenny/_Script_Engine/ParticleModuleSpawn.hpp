#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleSpawnBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleSpawn : public ParticleModuleSpawnBase {
    private: char pad_38[0xb0]; public:
    void* get_Rate();
    void* get_RateScale();
    void* get_ParticleBurstMethod();
    void* get_BurstList();
    void* get_BurstScale();
    bool get_bApplyGlobalSpawnRateScale();
    void set_bApplyGlobalSpawnRateScale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
