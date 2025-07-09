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
struct InlineEditableTextBlockStyle : public SlateWidgetStyle {
    private: char pad_8[0xa68]; public:
    void* get_EditableTextBoxStyle();
    void* get_TextStyle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa70
#pragma pack(pop)
}
