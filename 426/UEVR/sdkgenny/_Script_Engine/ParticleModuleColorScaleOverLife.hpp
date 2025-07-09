#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleColorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleColorScaleOverLife : public ParticleModuleColorBase {
    private: char pad_30[0x80]; public:
    void* get_ColorScaleOverLife();
    void* get_AlphaScaleOverLife();
    bool get_bEmitterTime();
    void set_bEmitterTime(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
