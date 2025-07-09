#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleSubUV.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleSubUVMovie : public ParticleModuleSubUV {
    private: char pad_70[0x40]; public:
    bool get_bUseEmitterTime();
    void set_bUseEmitterTime(bool value);
    void* get_FrameRate();
    int32_t& get_StartingFrame();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
