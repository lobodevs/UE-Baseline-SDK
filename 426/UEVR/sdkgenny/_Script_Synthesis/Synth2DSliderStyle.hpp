#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\SlateWidgetStyle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct Synth2DSliderStyle : public _Script_SlateCore::SlateWidgetStyle {
    private: char pad_8[0x2b0]; public:
    void* get_NormalThumbImage();
    void* get_DisabledThumbImage();
    void* get_NormalBarImage();
    void* get_DisabledBarImage();
    void* get_BackgroundImage();
    float& get_BarThickness();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2b8
#pragma pack(pop)
}
