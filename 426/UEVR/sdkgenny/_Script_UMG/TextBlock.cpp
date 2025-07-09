#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_SlateCore\SlateFontInfo.hpp"
#include "TextBlock.hpp"
#include "TextLayoutWidget.hpp"
void* _Script_UMG::TextBlock::get_ShadowOffset() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Script_UMG::TextBlock::get_ColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x150);
}
void _Script_UMG::TextBlock::SetText(void* InText) {
    return;
}
void* _Script_UMG::TextBlock::get_Text() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_UMG::TextBlock::get_TextDelegate() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_UMG::TextBlock::get_ColorAndOpacityDelegate() {
    return (void*)((uintptr_t)this + 0x178);
}
_Script_Engine::MaterialInstanceDynamic* _Script_UMG::TextBlock::GetDynamicOutlineMaterial() {
    return;
}
void* _Script_UMG::TextBlock::get_Font() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_UMG::TextBlock::get_StrikeBrush() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_UMG::TextBlock::get_ShadowColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_UMG::TextBlock::get_ShadowColorAndOpacityDelegate() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Script_UMG::TextBlock::SetAutoWrapText(bool InAutoTextWrap) {
    return;
}
float& _Script_UMG::TextBlock::get_MinDesiredWidth() {
    return *(float*)((uintptr_t)this + 0x290);
}
bool _Script_UMG::TextBlock::get_bWrapWithInvalidationPanel() {
    return (*(uint8_t*)((uintptr_t)this + 0x294 + 0)) & 1 != 0;
}
void _Script_UMG::TextBlock::SetColorAndOpacity(_Script_SlateCore::SlateColor InColorAndOpacity) {
    return;
}
void _Script_UMG::TextBlock::set_bWrapWithInvalidationPanel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x294 + 0);
    *(uint8_t*)((uintptr_t)this + 0x294 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::TextBlock::get_bAutoWrapText() {
    return (*(uint8_t*)((uintptr_t)this + 0x295 + 0)) & 1 != 0;
}
void _Script_UMG::TextBlock::set_bAutoWrapText(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x295 + 0);
    *(uint8_t*)((uintptr_t)this + 0x295 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::TextBlock::get_TextTransformPolicy() {
    return (void*)((uintptr_t)this + 0x296);
}
bool _Script_UMG::TextBlock::get_bSimpleTextMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x297 + 0)) & 1 != 0;
}
void _Script_UMG::TextBlock::set_bSimpleTextMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x297 + 0);
    *(uint8_t*)((uintptr_t)this + 0x297 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_UMG::TextBlock::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.TextBlock");
    return result;
}
void _Script_UMG::TextBlock::SetTextTransformPolicy(void* InTransformPolicy) {
    return;
}
void _Script_UMG::TextBlock::SetStrikeBrush(_Script_SlateCore::SlateBrush InStrikeBrush) {
    return;
}
void _Script_UMG::TextBlock::SetShadowOffset(_Script_CoreUObject::Vector2D InShadowOffset) {
    return;
}
void _Script_UMG::TextBlock::SetShadowColorAndOpacity(_Script_CoreUObject::LinearColor InShadowColorAndOpacity) {
    return;
}
void _Script_UMG::TextBlock::SetOpacity(float InOpacity) {
    return;
}
void _Script_UMG::TextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
    return;
}
void _Script_UMG::TextBlock::SetFont(_Script_SlateCore::SlateFontInfo InFontInfo) {
    return;
}
void* _Script_UMG::TextBlock::GetText() {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_UMG::TextBlock::GetDynamicFontMaterial() {
    return;
}
