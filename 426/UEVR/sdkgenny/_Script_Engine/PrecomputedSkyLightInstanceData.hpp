#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponentInstanceData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PrecomputedSkyLightInstanceData : public SceneComponentInstanceData {
    private: char pad_b8[0xb8]; public:
    void* get_LightGuid();
    float& get_AverageBrightness();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
