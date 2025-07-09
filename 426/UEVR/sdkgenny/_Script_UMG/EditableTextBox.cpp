#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "EditableTextBox.hpp"
#include "Widget.hpp"
void* _Script_UMG::EditableTextBox::get_Text() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_UMG::EditableTextBox::get_OnTextCommitted() {
    return (void*)((uintptr_t)this + 0xa18);
}
void* _Script_UMG::EditableTextBox::get_TextDelegate() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::EditableTextBox::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_UMG::EditableTextBox::get_Font() {
    return (void*)((uintptr_t)this + 0x958);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::EditableTextBox::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x928);
}
void _Script_UMG::EditableTextBox::SetHintText(void* InText) {
    return;
}
void* _Script_UMG::EditableTextBox::get_HintText() {
    return (void*)((uintptr_t)this + 0x930);
}
void* _Script_UMG::EditableTextBox::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x9b0);
}
void _Script_UMG::EditableTextBox::SetIsPassword(bool bIsPassword) {
    return;
}
void* _Script_UMG::EditableTextBox::get_HintTextDelegate() {
    return (void*)((uintptr_t)this + 0x948);
}
bool _Script_UMG::EditableTextBox::get_SelectAllTextOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x9fc + 0)) & 1 != 0;
}
void* _Script_UMG::EditableTextBox::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0x9c0);
}
void* _Script_UMG::EditableTextBox::get_ReadOnlyForegroundColor() {
    return (void*)((uintptr_t)this + 0x9d0);
}
bool _Script_UMG::EditableTextBox::get_IsReadOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e0 + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_IsReadOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableTextBox::get_IsPassword() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e1 + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_IsPassword(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_UMG::EditableTextBox::get_MinimumDesiredWidth() {
    return *(float*)((uintptr_t)this + 0x9e4);
}
void* _Script_UMG::EditableTextBox::get_Padding() {
    return (void*)((uintptr_t)this + 0x9e8);
}
bool _Script_UMG::EditableTextBox::get_IsCaretMovedWhenGainFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x9f8 + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_IsCaretMovedWhenGainFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableTextBox::get_SelectAllTextWhenFocused() {
    return (*(uint8_t*)((uintptr_t)this + 0x9f9 + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_SelectAllTextWhenFocused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableTextBox::get_RevertTextOnEscape() {
    return (*(uint8_t*)((uintptr_t)this + 0x9fa + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_RevertTextOnEscape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x9fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableTextBox::get_ClearKeyboardFocusOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x9fb + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_ClearKeyboardFocusOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9fb + 0);
    *(uint8_t*)((uintptr_t)this + 0x9fb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableTextBox::get_AllowContextMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x9fd + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_SelectAllTextOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x9fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::EditableTextBox::set_AllowContextMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9fd + 0);
    *(uint8_t*)((uintptr_t)this + 0x9fd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::EditableTextBox::get_KeyboardType() {
    return (void*)((uintptr_t)this + 0x9fe);
}
void* _Script_UMG::EditableTextBox::get_VirtualKeyboardOptions() {
    return (void*)((uintptr_t)this + 0x9ff);
}
void* _Script_UMG::EditableTextBox::get_VirtualKeyboardTrigger() {
    return (void*)((uintptr_t)this + 0xa00);
}
void* _Script_UMG::EditableTextBox::get_VirtualKeyboardDismissAction() {
    return (void*)((uintptr_t)this + 0xa01);
}
void* _Script_UMG::EditableTextBox::get_Justification() {
    return (void*)((uintptr_t)this + 0xa02);
}
void* _Script_UMG::EditableTextBox::get_ShapedTextOptions() {
    return (void*)((uintptr_t)this + 0xa03);
}
void _Script_UMG::EditableTextBox::SetError(void* InError) {
    return;
}
void* _Script_UMG::EditableTextBox::get_OnTextChanged() {
    return (void*)((uintptr_t)this + 0xa08);
}
_Script_CoreUObject::Class* _Script_UMG::EditableTextBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.EditableTextBox");
    return result;
}
void _Script_UMG::EditableTextBox::SetText(void* InText) {
    return;
}
void _Script_UMG::EditableTextBox::SetIsReadOnly(bool bReadOnly) {
    return;
}
void _Script_UMG::EditableTextBox::SetJustification(void* InJustification) {
    return;
}
bool _Script_UMG::EditableTextBox::HasError() {
    return;
}
void* _Script_UMG::EditableTextBox::GetText() {
    return;
}
void _Script_UMG::EditableTextBox::ClearError() {
    return;
}
