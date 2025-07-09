#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExpandableArea.hpp"
#include "Widget.hpp"
void* _Script_UMG::ExpandableArea::get_AreaPadding() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Script_UMG::ExpandableArea::get_Style() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_UMG::ExpandableArea::get_BorderBrush() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_UMG::ExpandableArea::get_BorderColor() {
    return (void*)((uintptr_t)this + 0x2b8);
}
bool _Script_UMG::ExpandableArea::get_bIsExpanded() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e0 + 0)) & 1 != 0;
}
void _Script_UMG::ExpandableArea::set_bIsExpanded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_UMG::ExpandableArea::get_MaxHeight() {
    return *(float*)((uintptr_t)this + 0x2e4);
}
void* _Script_UMG::ExpandableArea::get_HeaderPadding() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void* _Script_UMG::ExpandableArea::get_OnExpansionChanged() {
    return (void*)((uintptr_t)this + 0x308);
}
_Script_UMG::Widget*& _Script_UMG::ExpandableArea::get_HeaderContent() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x318);
}
_Script_UMG::Widget*& _Script_UMG::ExpandableArea::get_BodyContent() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Script_UMG::ExpandableArea::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ExpandableArea");
    return result;
}
void _Script_UMG::ExpandableArea::SetIsExpanded_Animated(bool IsExpanded) {
    return;
}
void _Script_UMG::ExpandableArea::SetIsExpanded(bool IsExpanded) {
    return;
}
bool _Script_UMG::ExpandableArea::GetIsExpanded() {
    return;
}
