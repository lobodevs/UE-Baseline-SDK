#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PointLightComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SpotLightComponent : public PointLightComponent {
    float& get_InnerConeAngle();
    float& get_OuterConeAngle();
    static _Script_CoreUObject::Class* static_class();
    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetInnerConeAngle(float NewInnerConeAngle);
}; // Size: 0x360
#pragma pack(pop)
}
