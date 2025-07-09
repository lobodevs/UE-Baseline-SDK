#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "StereoLayerShape.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StereoLayerShapeCylinder : public StereoLayerShape {
    private: char pad_28[0x10]; public:
    float& get_Radius();
    float& get_OverlayArc();
    int32_t& get_Height();
    static _Script_CoreUObject::Class* static_class();
    void SetRadius(float InRadius);
    void SetOverlayArc(float InOverlayArc);
    void SetHeight(int32_t InHeight);
}; // Size: 0x38
#pragma pack(pop)
}
