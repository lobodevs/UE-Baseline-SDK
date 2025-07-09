#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\TextBlockStyle.hpp"
#include "MultiLineEditableText.hpp"
#include "TextLayoutWidget.hpp"
void* _Script_UMG::MultiLineEditableText::get_Text() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_UMG::MultiLineEditableText::get_HintText() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_UMG::MultiLineEditableText::get_HintTextDelegate() {
    return (void*)((uintptr_t)this + 0x158);
}
bool _Script_UMG::MultiLineEditableText::get_SelectAllTextWhenFocused() {
    return (*(uint8_t*)((uintptr_t)this + 0x438 + 0)) & 1 != 0;
}
void* _Script_UMG::MultiLineEditableText::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x168);
}
bool _Script_UMG::MultiLineEditableText::get_bIsReadOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void* _Script_UMG::MultiLineEditableText::get_Font() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void _Script_UMG::MultiLineEditableText::set_bIsReadOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::MultiLineEditableText::set_SelectAllTextWhenFocused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x438 + 0);
    *(uint8_t*)((uintptr_t)this + 0x438 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MultiLineEditableText::get_ClearTextSelectionOnFocusLoss() {
    return (*(uint8_t*)((uintptr_t)this + 0x439 + 0)) & 1 != 0;
}
void _Script_UMG::MultiLineEditableText::set_ClearTextSelectionOnFocusLoss(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x439 + 0);
    *(uint8_t*)((uintptr_t)this + 0x439 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MultiLineEditableText::get_RevertTextOnEscape() {
    return (*(uint8_t*)((uintptr_t)this + 0x43a + 0)) & 1 != 0;
}
void _Script_UMG::MultiLineEditableText::set_RevertTextOnEscape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x43a + 0);
    *(uint8_t*)((uintptr_t)this + 0x43a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MultiLineEditableText::get_ClearKeyboardFocusOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x43b + 0)) & 1 != 0;
}
void _Script_UMG::MultiLineEditableText::set_ClearKeyboardFocusOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x43b + 0);
    *(uint8_t*)((uintptr_t)this + 0x43b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MultiLineEditableText::get_AllowContextMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x43c + 0)) & 1 != 0;
}
void _Script_UMG::MultiLineEditableText::set_AllowContextMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x43c + 0);
    *(uint8_t*)((uintptr_t)this + 0x43c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::MultiLineEditableText::get_OnTextChanged() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Script_UMG::MultiLineEditableText::get_VirtualKeyboardOptions() {
    return (void*)((uintptr_t)this + 0x43d);
}
void* _Script_UMG::MultiLineEditableText::get_VirtualKeyboardDismissAction() {
    return (void*)((uintptr_t)this + 0x43e);
}
void* _Script_UMG::MultiLineEditableText::get_OnTextCommitted() {
    return (void*)((uintptr_t)this + 0x450);
}
_Script_CoreUObject::Class* _Script_UMG::MultiLineEditableText::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MultiLineEditableText");
    return result;
}
void _Script_UMG::MultiLineEditableText::SetWidgetStyle(_Script_SlateCore::TextBlockStyle& InWidgetStyle) {
    return;
}
void _Script_UMG::MultiLineEditableText::SetText(void* InText) {
    return;
}
void _Script_UMG::MultiLineEditableText::SetIsReadOnly(bool bReadOnly) {
    return;
}
void _Script_UMG::MultiLineEditableText::SetHintText(void* InHintText) {
    return;
}
void* _Script_UMG::MultiLineEditableText::GetText() {
    return;
}
void* _Script_UMG::MultiLineEditableText::GetHintText() {
    return;
}
