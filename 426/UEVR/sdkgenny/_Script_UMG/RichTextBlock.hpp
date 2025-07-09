#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_SlateCore\SlateFontInfo.hpp"
#include "TextLayoutWidget.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_UMG {
struct RichTextBlockDecorator;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
struct TextBlockStyle;
}
namespace _Script_SlateCore {
struct SlateBrush;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct RichTextBlock : public TextLayoutWidget {
    private: char pad_128[0x550]; public:
    void* get_Text();
    _Script_Engine::DataTable*& get_TextStyleSet();
    void* get_DecoratorClasses();
    bool get_bOverrideDefaultStyle();
    void set_bOverrideDefaultStyle(bool value);
    void* get_DefaultTextStyleOverride();
    float& get_MinDesiredWidth();
    void* get_TextTransformPolicy();
    void* get_DefaultTextStyle();
    void* get_InstanceDecorators();
    static _Script_CoreUObject::Class* static_class();
    void SetTextTransformPolicy(void* InTransformPolicy);
    void SetTextStyleSet(_Script_Engine::DataTable* NewTextStyleSet);
    void SetText(void*& InText);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetDefaultTextStyle(_Script_SlateCore::TextBlockStyle& InDefaultTextStyle);
    void SetDefaultStrikeBrush(_Script_SlateCore::SlateBrush& InStrikeBrush);
    void SetDefaultShadowOffset(_Script_CoreUObject::Vector2D InShadowOffset);
    void SetDefaultShadowColorAndOpacity(_Script_CoreUObject::LinearColor InShadowColorAndOpacity);
    void SetDefaultFont(_Script_SlateCore::SlateFontInfo InFontInfo);
    void SetDefaultColorAndOpacity(_Script_SlateCore::SlateColor InColorAndOpacity);
    void SetAutoWrapText(bool InAutoTextWrap);
    void* GetText();
    _Script_UMG::RichTextBlockDecorator* GetDecoratorByClass(void* DecoratorClass);
    void ClearAllDefaultStyleOverrides();
}; // Size: 0x678
#pragma pack(pop)
}
