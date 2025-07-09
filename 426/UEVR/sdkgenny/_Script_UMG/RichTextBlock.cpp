#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_SlateCore\SlateFontInfo.hpp"
#include "..\_Script_SlateCore\TextBlockStyle.hpp"
#include "RichTextBlock.hpp"
#include "RichTextBlockDecorator.hpp"
#include "TextLayoutWidget.hpp"
void* _Script_UMG::RichTextBlock::get_DefaultTextStyleOverride() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_UMG::RichTextBlock::get_Text() {
    return (void*)((uintptr_t)this + 0x128);
}
_Script_Engine::DataTable*& _Script_UMG::RichTextBlock::get_TextStyleSet() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x140);
}
void* _Script_UMG::RichTextBlock::get_DecoratorClasses() {
    return (void*)((uintptr_t)this + 0x148);
}
void _Script_UMG::RichTextBlock::set_bOverrideDefaultStyle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x158 + 0);
    *(uint8_t*)((uintptr_t)this + 0x158 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::RichTextBlock::get_bOverrideDefaultStyle() {
    return (*(uint8_t*)((uintptr_t)this + 0x158 + 0)) & 1 != 0;
}
float& _Script_UMG::RichTextBlock::get_MinDesiredWidth() {
    return *(float*)((uintptr_t)this + 0x3d0);
}
void* _Script_UMG::RichTextBlock::get_TextTransformPolicy() {
    return (void*)((uintptr_t)this + 0x3d4);
}
void* _Script_UMG::RichTextBlock::get_DefaultTextStyle() {
    return (void*)((uintptr_t)this + 0x3d8);
}
void* _Script_UMG::RichTextBlock::get_InstanceDecorators() {
    return (void*)((uintptr_t)this + 0x648);
}
_Script_CoreUObject::Class* _Script_UMG::RichTextBlock::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.RichTextBlock");
    return result;
}
void _Script_UMG::RichTextBlock::SetText(void*& InText) {
    return;
}
void _Script_UMG::RichTextBlock::SetTextTransformPolicy(void* InTransformPolicy) {
    return;
}
void _Script_UMG::RichTextBlock::SetTextStyleSet(_Script_Engine::DataTable* NewTextStyleSet) {
    return;
}
void _Script_UMG::RichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
    return;
}
void _Script_UMG::RichTextBlock::SetDefaultTextStyle(_Script_SlateCore::TextBlockStyle& InDefaultTextStyle) {
    return;
}
void _Script_UMG::RichTextBlock::SetDefaultStrikeBrush(_Script_SlateCore::SlateBrush& InStrikeBrush) {
    return;
}
void _Script_UMG::RichTextBlock::SetDefaultShadowOffset(_Script_CoreUObject::Vector2D InShadowOffset) {
    return;
}
void _Script_UMG::RichTextBlock::SetDefaultShadowColorAndOpacity(_Script_CoreUObject::LinearColor InShadowColorAndOpacity) {
    return;
}
void _Script_UMG::RichTextBlock::SetDefaultFont(_Script_SlateCore::SlateFontInfo InFontInfo) {
    return;
}
void _Script_UMG::RichTextBlock::SetDefaultColorAndOpacity(_Script_SlateCore::SlateColor InColorAndOpacity) {
    return;
}
void _Script_UMG::RichTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
    return;
}
_Script_UMG::RichTextBlockDecorator* _Script_UMG::RichTextBlock::GetDecoratorByClass(void* DecoratorClass) {
    return;
}
void* _Script_UMG::RichTextBlock::GetText() {
    return;
}
void _Script_UMG::RichTextBlock::ClearAllDefaultStyleOverrides() {
    return;
}
