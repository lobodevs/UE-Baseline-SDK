#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "ContentWidget.hpp"
#include "MenuAnchor.hpp"
bool _Script_UMG::MenuAnchor::HasOpenSubMenus() {
    return;
}
void _Script_UMG::MenuAnchor::set_bFitInWindow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x149 + 0);
    *(uint8_t*)((uintptr_t)this + 0x149 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::MenuAnchor::get_MenuClass() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::MenuAnchor::get_Placement() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_UMG::MenuAnchor::get_OnGetUserMenuContentEvent() {
    return (void*)((uintptr_t)this + 0x138);
}
void _Script_UMG::MenuAnchor::FitInWindow(bool bFit) {
    return;
}
void* _Script_UMG::MenuAnchor::get_OnGetMenuContentEvent() {
    return (void*)((uintptr_t)this + 0x128);
}
void _Script_UMG::MenuAnchor::set_ShouldDeferPaintingAfterWindowContent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14a + 0);
    *(uint8_t*)((uintptr_t)this + 0x14a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MenuAnchor::get_bFitInWindow() {
    return (*(uint8_t*)((uintptr_t)this + 0x149 + 0)) & 1 != 0;
}
bool _Script_UMG::MenuAnchor::get_ShouldDeferPaintingAfterWindowContent() {
    return (*(uint8_t*)((uintptr_t)this + 0x14a + 0)) & 1 != 0;
}
bool _Script_UMG::MenuAnchor::get_UseApplicationMenuStack() {
    return (*(uint8_t*)((uintptr_t)this + 0x14b + 0)) & 1 != 0;
}
void _Script_UMG::MenuAnchor::set_UseApplicationMenuStack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14b + 0);
    *(uint8_t*)((uintptr_t)this + 0x14b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::MenuAnchor::get_OnMenuOpenChanged() {
    return (void*)((uintptr_t)this + 0x150);
}
_Script_CoreUObject::Class* _Script_UMG::MenuAnchor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MenuAnchor");
    return result;
}
void _Script_UMG::MenuAnchor::ToggleOpen(bool bFocusOnOpen) {
    return;
}
bool _Script_UMG::MenuAnchor::ShouldOpenDueToClick() {
    return;
}
void _Script_UMG::MenuAnchor::SetPlacement(void* InPlacement) {
    return;
}
void _Script_UMG::MenuAnchor::Open(bool bFocusMenu) {
    return;
}
bool _Script_UMG::MenuAnchor::IsOpen() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::MenuAnchor::GetMenuPosition() {
    return;
}
void _Script_UMG::MenuAnchor::Close() {
    return;
}
