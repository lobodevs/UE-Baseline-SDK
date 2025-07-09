#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EquirectProps.hpp"
#include "StereoLayerShape.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StereoLayerShapeEquirect : public StereoLayerShape {
    private: char pad_28[0x48]; public:
    void* get_LeftUVRect();
    void* get_RightUVRect();
    void* get_LeftScale();
    void* get_RightScale();
    void* get_LeftBias();
    void* get_RightBias();
    static _Script_CoreUObject::Class* static_class();
    void SetEquirectProps(_Script_Engine::EquirectProps InScaleBiases);
}; // Size: 0x70
#pragma pack(pop)
}
