#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleAccelerationBase.hpp"
namespace _Script_Engine {
struct DistributionFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleAccelerationDragScaleOverLife : public ParticleModuleAccelerationBase {
    private: char pad_38[0x38]; public:
    _Script_Engine::DistributionFloat*& get_DragScale();
    void* get_DragScaleRaw();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
