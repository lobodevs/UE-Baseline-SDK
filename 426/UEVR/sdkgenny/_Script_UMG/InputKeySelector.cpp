#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Slate\InputChord.hpp"
#include "InputKeySelector.hpp"
#include "Widget.hpp"
void* _Script_UMG::InputKeySelector::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x108);
}
void _Script_UMG::InputKeySelector::SetSelectedKey(_Script_Slate::InputChord& InSelectedKey) {
    return;
}
void* _Script_UMG::InputKeySelector::get_TextStyle() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Script_UMG::InputKeySelector::get_KeySelectionText() {
    return (void*)((uintptr_t)this + 0x688);
}
bool _Script_UMG::InputKeySelector::get_bAllowGamepadKeys() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b9 + 0)) & 1 != 0;
}
void* _Script_UMG::InputKeySelector::get_Font() {
    return (void*)((uintptr_t)this + 0x610);
}
void* _Script_UMG::InputKeySelector::get_SelectedKey() {
    return (void*)((uintptr_t)this + 0x5f0);
}
void* _Script_UMG::InputKeySelector::get_Margin() {
    return (void*)((uintptr_t)this + 0x668);
}
void* _Script_UMG::InputKeySelector::get_ColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x678);
}
void* _Script_UMG::InputKeySelector::get_NoKeySpecifiedText() {
    return (void*)((uintptr_t)this + 0x6a0);
}
bool _Script_UMG::InputKeySelector::get_bAllowModifierKeys() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b8 + 0)) & 1 != 0;
}
void _Script_UMG::InputKeySelector::set_bAllowModifierKeys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::InputKeySelector::set_bAllowGamepadKeys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::InputKeySelector::get_EscapeKeys() {
    return (void*)((uintptr_t)this + 0x6c0);
}
void* _Script_UMG::InputKeySelector::get_OnKeySelected() {
    return (void*)((uintptr_t)this + 0x6d0);
}
void* _Script_UMG::InputKeySelector::get_OnIsSelectingKeyChanged() {
    return (void*)((uintptr_t)this + 0x6e0);
}
_Script_CoreUObject::Class* _Script_UMG::InputKeySelector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.InputKeySelector");
    return result;
}
void _Script_UMG::InputKeySelector::SetTextBlockVisibility(void* InVisibility) {
    return;
}
void _Script_UMG::InputKeySelector::SetNoKeySpecifiedText(void* InNoKeySpecifiedText) {
    return;
}
void _Script_UMG::InputKeySelector::SetEscapeKeys(void*& InKeys) {
    return;
}
void _Script_UMG::InputKeySelector::SetKeySelectionText(void* InKeySelectionText) {
    return;
}
void _Script_UMG::InputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys) {
    return;
}
void _Script_UMG::InputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys) {
    return;
}
bool _Script_UMG::InputKeySelector::GetIsSelectingKey() {
    return;
}
