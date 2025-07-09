#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SlateWidgetStyle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct TextBlockStyle : public SlateWidgetStyle {
    private: char pad_8[0x268]; public:
    void* get_Font();
    void* get_ColorAndOpacity();
    void* get_ShadowOffset();
    void* get_ShadowColorAndOpacity();
    void* get_SelectedBackgroundColor();
    void* get_HighlightColor();
    void* get_HighlightShape();
    void* get_StrikeBrush();
    void* get_UnderlineBrush();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
