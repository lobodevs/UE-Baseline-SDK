#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "ContentWidget.hpp"
#include "WindowTitleBarArea.hpp"
void _Script_UMG::WindowTitleBarArea::set_bDoubleClickTogglesFullscreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x121 + 0);
    *(uint8_t*)((uintptr_t)this + 0x121 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WindowTitleBarArea::get_bWindowButtonsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
bool _Script_UMG::WindowTitleBarArea::get_bDoubleClickTogglesFullscreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x121 + 0)) & 1 != 0;
}
void _Script_UMG::WindowTitleBarArea::set_bWindowButtonsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_UMG::WindowTitleBarArea::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WindowTitleBarArea");
    return result;
}
void _Script_UMG::WindowTitleBarArea::SetVerticalAlignment(void* InVerticalAlignment) {
    return;
}
void _Script_UMG::WindowTitleBarArea::SetPadding(_Script_SlateCore::Margin InPadding) {
    return;
}
void _Script_UMG::WindowTitleBarArea::SetHorizontalAlignment(void* InHorizontalAlignment) {
    return;
}
