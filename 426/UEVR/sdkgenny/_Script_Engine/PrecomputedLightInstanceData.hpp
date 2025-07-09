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
struct PrecomputedLightInstanceData : public SceneComponentInstanceData {
    private: char pad_b8[0x58]; public:
    void* get_Transform();
    void* get_LightGuid();
    int32_t& get_PreviewShadowMapChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x110
#pragma pack(pop)
}
