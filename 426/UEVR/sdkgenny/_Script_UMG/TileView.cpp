#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ListView.hpp"
#include "TileView.hpp"
float& _Script_UMG::TileView::get_EntryHeight() {
    return *(float*)((uintptr_t)this + 0x368);
}
bool _Script_UMG::TileView::get_bWrapHorizontalNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0x371 + 0)) & 1 != 0;
}
float& _Script_UMG::TileView::get_EntryWidth() {
    return *(float*)((uintptr_t)this + 0x36c);
}
void _Script_UMG::TileView::SetEntryWidth(float NewWidth) {
    return;
}
void* _Script_UMG::TileView::get_TileAlignment() {
    return (void*)((uintptr_t)this + 0x370);
}
void _Script_UMG::TileView::set_bWrapHorizontalNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x371 + 0);
    *(uint8_t*)((uintptr_t)this + 0x371 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_UMG::TileView::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.TileView");
    return result;
}
float _Script_UMG::TileView::GetEntryWidth() {
    return;
}
void _Script_UMG::TileView::SetEntryHeight(float NewHeight) {
    return;
}
float _Script_UMG::TileView::GetEntryHeight() {
    return;
}
