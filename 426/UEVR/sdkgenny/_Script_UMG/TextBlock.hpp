#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_SlateCore\SlateFontInfo.hpp"
#include "TextLayoutWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct TextBlock : public TextLayoutWidget {
    private: char pad_128[0x180]; public:
    void* get_Text();
    void* get_TextDelegate();
    void* get_ColorAndOpacity();
    void* get_ColorAndOpacityDelegate();
    void* get_Font();
    void* get_StrikeBrush();
    void* get_ShadowOffset();
    void* get_ShadowColorAndOpacity();
    void* get_ShadowColorAndOpacityDelegate();
    float& get_MinDesiredWidth();
    bool get_bWrapWithInvalidationPanel();
    void set_bWrapWithInvalidationPanel(bool value);
    bool get_bAutoWrapText();
    void set_bAutoWrapText(bool value);
    void* get_TextTransformPolicy();
    bool get_bSimpleTextMode();
    void set_bSimpleTextMode(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetTextTransformPolicy(void* InTransformPolicy);
    void SetText(void* InText);
    void SetStrikeBrush(_Script_SlateCore::SlateBrush InStrikeBrush);
    void SetShadowOffset(_Script_CoreUObject::Vector2D InShadowOffset);
    void SetShadowColorAndOpacity(_Script_CoreUObject::LinearColor InShadowColorAndOpacity);
    void SetOpacity(float InOpacity);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetFont(_Script_SlateCore::SlateFontInfo InFontInfo);
    void SetColorAndOpacity(_Script_SlateCore::SlateColor InColorAndOpacity);
    void SetAutoWrapText(bool InAutoTextWrap);
    void* GetText();
    _Script_Engine::MaterialInstanceDynamic* GetDynamicOutlineMaterial();
    _Script_Engine::MaterialInstanceDynamic* GetDynamicFontMaterial();
}; // Size: 0x2a8
#pragma pack(pop)
}
