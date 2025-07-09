#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "PanelWidget.hpp"
#include "ScrollBox.hpp"
#include "Widget.hpp"
void* _Script_UMG::ScrollBox::get_ConsumeMouseWheel() {
    return (void*)((uintptr_t)this + 0x82a);
}
void* _Script_UMG::ScrollBox::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::ScrollBox::get_ScrollbarThickness() {
    return (void*)((uintptr_t)this + 0x82c);
}
void* _Script_UMG::ScrollBox::get_WidgetBarStyle() {
    return (void*)((uintptr_t)this + 0x348);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::ScrollBox::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x818);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::ScrollBox::get_BarStyle() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x820);
}
void* _Script_UMG::ScrollBox::get_Orientation() {
    return (void*)((uintptr_t)this + 0x828);
}
void* _Script_UMG::ScrollBox::get_ScrollBarVisibility() {
    return (void*)((uintptr_t)this + 0x829);
}
float _Script_UMG::ScrollBox::GetScrollOffsetOfEnd() {
    return;
}
void* _Script_UMG::ScrollBox::get_ScrollbarPadding() {
    return (void*)((uintptr_t)this + 0x834);
}
bool _Script_UMG::ScrollBox::get_AlwaysShowScrollbar() {
    return (*(uint8_t*)((uintptr_t)this + 0x844 + 0)) & 1 != 0;
}
void _Script_UMG::ScrollBox::set_AlwaysShowScrollbar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x844 + 0);
    *(uint8_t*)((uintptr_t)this + 0x844 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::ScrollBox::get_AlwaysShowScrollbarTrack() {
    return (*(uint8_t*)((uintptr_t)this + 0x845 + 0)) & 1 != 0;
}
void _Script_UMG::ScrollBox::set_AlwaysShowScrollbarTrack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x845 + 0);
    *(uint8_t*)((uintptr_t)this + 0x845 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::ScrollBox::get_AllowOverscroll() {
    return (*(uint8_t*)((uintptr_t)this + 0x846 + 0)) & 1 != 0;
}
void _Script_UMG::ScrollBox::set_AllowOverscroll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x846 + 0);
    *(uint8_t*)((uintptr_t)this + 0x846 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::ScrollBox::get_bAnimateWheelScrolling() {
    return (*(uint8_t*)((uintptr_t)this + 0x847 + 0)) & 1 != 0;
}
void _Script_UMG::ScrollBox::set_bAnimateWheelScrolling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x847 + 0);
    *(uint8_t*)((uintptr_t)this + 0x847 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ScrollBox::get_NavigationDestination() {
    return (void*)((uintptr_t)this + 0x848);
}
void _Script_UMG::ScrollBox::EndInertialScrolling() {
    return;
}
void _Script_UMG::ScrollBox::SetScrollbarPadding(_Script_SlateCore::Margin& NewScrollbarPadding) {
    return;
}
float& _Script_UMG::ScrollBox::get_NavigationScrollPadding() {
    return *(float*)((uintptr_t)this + 0x84c);
}
void* _Script_UMG::ScrollBox::get_ScrollWhenFocusChanges() {
    return (void*)((uintptr_t)this + 0x850);
}
bool _Script_UMG::ScrollBox::get_bAllowRightClickDragScrolling() {
    return (*(uint8_t*)((uintptr_t)this + 0x851 + 0)) & 1 != 0;
}
void _Script_UMG::ScrollBox::set_bAllowRightClickDragScrolling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x851 + 0);
    *(uint8_t*)((uintptr_t)this + 0x851 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ScrollBox::get_OnUserScrolled() {
    return (void*)((uintptr_t)this + 0x858);
}
float& _Script_UMG::ScrollBox::get_WheelScrollMultiplier() {
    return *(float*)((uintptr_t)this + 0x854);
}
_Script_CoreUObject::Class* _Script_UMG::ScrollBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ScrollBox");
    return result;
}
void _Script_UMG::ScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
    return;
}
void _Script_UMG::ScrollBox::SetScrollbarVisibility(void* NewScrollBarVisibility) {
    return;
}
void _Script_UMG::ScrollBox::SetScrollOffset(float NewScrollOffset) {
    return;
}
void _Script_UMG::ScrollBox::SetScrollbarThickness(_Script_CoreUObject::Vector2D& NewScrollbarThickness) {
    return;
}
void _Script_UMG::ScrollBox::SetOrientation(void* NewOrientation) {
    return;
}
float _Script_UMG::ScrollBox::GetScrollOffset() {
    return;
}
void _Script_UMG::ScrollBox::SetConsumeMouseWheel(void* NewConsumeMouseWheel) {
    return;
}
void _Script_UMG::ScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling) {
    return;
}
void _Script_UMG::ScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
    return;
}
void _Script_UMG::ScrollBox::SetAllowOverscroll(bool NewAllowOverscroll) {
    return;
}
void _Script_UMG::ScrollBox::ScrollWidgetIntoView(_Script_UMG::Widget* WidgetToFind, bool AnimateScroll, void* ScrollDestination, float Padding) {
    return;
}
void _Script_UMG::ScrollBox::ScrollToStart() {
    return;
}
void _Script_UMG::ScrollBox::ScrollToEnd() {
    return;
}
float _Script_UMG::ScrollBox::GetViewOffsetFraction() {
    return;
}
