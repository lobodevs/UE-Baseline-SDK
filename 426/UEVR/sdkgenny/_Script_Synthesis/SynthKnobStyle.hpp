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
struct SynthKnobStyle : public _Script_SlateCore::SlateWidgetStyle {
    private: char pad_8[0x230]; public:
    void* get_LargeKnob();
    void* get_LargeKnobOverlay();
    void* get_MediumKnob();
    void* get_MediumKnobOverlay();
    float& get_MinValueAngle();
    float& get_MaxValueAngle();
    void* get_KnobSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x238
#pragma pack(pop)
}
