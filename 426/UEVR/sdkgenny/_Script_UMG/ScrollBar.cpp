#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "ScrollBar.hpp"
#include "Widget.hpp"
void* _Script_UMG::ScrollBar::get_Thickness() {
    return (void*)((uintptr_t)this + 0x5e4);
}
void* _Script_UMG::ScrollBar::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_UMG::ScrollBar::get_Orientation() {
    return (void*)((uintptr_t)this + 0x5e2);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::ScrollBar::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x5d8);
}
void _Script_UMG::ScrollBar::set_bAlwaysShowScrollbarTrack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::ScrollBar::set_bAlwaysShowScrollbar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::ScrollBar::get_bAlwaysShowScrollbar() {
    return (*(uint8_t*)((uintptr_t)this + 0x5e0 + 0)) & 1 != 0;
}
bool _Script_UMG::ScrollBar::get_bAlwaysShowScrollbarTrack() {
    return (*(uint8_t*)((uintptr_t)this + 0x5e1 + 0)) & 1 != 0;
}
void* _Script_UMG::ScrollBar::get_Padding() {
    return (void*)((uintptr_t)this + 0x5ec);
}
_Script_CoreUObject::Class* _Script_UMG::ScrollBar::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ScrollBar");
    return result;
}
void _Script_UMG::ScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction) {
    return;
}
