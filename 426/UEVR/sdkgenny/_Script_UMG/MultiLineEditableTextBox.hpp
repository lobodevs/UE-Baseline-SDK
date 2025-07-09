#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TextLayoutWidget.hpp"
namespace _Script_SlateCore {
struct SlateWidgetStyleAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
struct TextBlockStyle;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct MultiLineEditableTextBox : public TextLayoutWidget {
    private: char pad_128[0xb70]; public:
    void* get_Text();
    void* get_HintText();
    void* get_HintTextDelegate();
    void* get_WidgetStyle();
    void* get_TextStyle();
    bool get_bIsReadOnly();
    void set_bIsReadOnly(bool value);
    bool get_AllowContextMenu();
    void set_AllowContextMenu(bool value);
    void* get_VirtualKeyboardOptions();
    void* get_VirtualKeyboardDismissAction();
    _Script_SlateCore::SlateWidgetStyleAsset*& get_Style();
    void* get_Font();
    void* get_ForegroundColor();
    void* get_BackgroundColor();
    void* get_ReadOnlyForegroundColor();
    void* get_OnTextChanged();
    void* get_OnTextCommitted();
    static _Script_CoreUObject::Class* static_class();
    void SetTextStyle(_Script_SlateCore::TextBlockStyle& InTextStyle);
    void SetText(void* InText);
    void SetIsReadOnly(bool bReadOnly);
    void SetHintText(void* InHintText);
    void SetError(void* InError);
    void* GetText();
    void* GetHintText();
}; // Size: 0xc98
#pragma pack(pop)
}
