#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct TextLayoutWidget : public Widget {
    private: char pad_108[0x20]; public:
    void* get_ShapedTextOptions();
    void* get_Justification();
    void* get_WrappingPolicy();
    bool get_AutoWrapText();
    void set_AutoWrapText(bool value);
    float& get_WrapTextAt();
    void* get_Margin();
    float& get_LineHeightPercentage();
    static _Script_CoreUObject::Class* static_class();
    void SetJustification(void* InJustification);
}; // Size: 0x128
#pragma pack(pop)
}
