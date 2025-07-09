#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ListView.hpp"
#include "ListViewBase.hpp"
void _Script_UMG::ListView::set_bIsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ListView::get_SelectionMode() {
    return (void*)((uintptr_t)this + 0x2d9);
}
void _Script_UMG::ListView::ClearListItems() {
    return;
}
void* _Script_UMG::ListView::get_Orientation() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Object* _Script_UMG::ListView::BP_GetSelectedItem() {
    return;
}
bool _Script_UMG::ListView::get_bIsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x2dc + 0)) & 1 != 0;
}
void _Script_UMG::ListView::set_bClearSelectionOnClick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2db + 0);
    *(uint8_t*)((uintptr_t)this + 0x2db + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::ListView::BP_CancelScrollIntoView() {
    return;
}
void* _Script_UMG::ListView::get_ConsumeMouseWheel() {
    return (void*)((uintptr_t)this + 0x2da);
}
bool _Script_UMG::ListView::get_bClearSelectionOnClick() {
    return (*(uint8_t*)((uintptr_t)this + 0x2db + 0)) & 1 != 0;
}
float& _Script_UMG::ListView::get_EntrySpacing() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
bool _Script_UMG::ListView::get_bReturnFocusToSelection() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 1 != 0;
}
void _Script_UMG::ListView::set_bReturnFocusToSelection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ListView::get_ListItems() {
    return (void*)((uintptr_t)this + 0x2e8);
}
int32_t _Script_UMG::ListView::GetNumItems() {
    return;
}
void* _Script_UMG::ListView::get_BP_OnItemClicked() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Script_UMG::ListView::get_BP_OnEntryInitialized() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Script_UMG::ListView::get_BP_OnItemDoubleClicked() {
    return (void*)((uintptr_t)this + 0x328);
}
void _Script_UMG::ListView::AddItem(_Script_CoreUObject::Object* Item) {
    return;
}
void* _Script_UMG::ListView::get_BP_OnItemIsHoveredChanged() {
    return (void*)((uintptr_t)this + 0x338);
}
int32_t _Script_UMG::ListView::BP_GetNumItemsSelected() {
    return;
}
void* _Script_UMG::ListView::get_BP_OnItemSelectionChanged() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Script_UMG::ListView::get_BP_OnItemScrolledIntoView() {
    return (void*)((uintptr_t)this + 0x358);
}
_Script_CoreUObject::Class* _Script_UMG::ListView::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ListView");
    return result;
}
void _Script_UMG::ListView::SetSelectionMode(void* SelectionMode) {
    return;
}
int32_t _Script_UMG::ListView::GetIndexForItem(_Script_CoreUObject::Object* Item) {
    return;
}
void _Script_UMG::ListView::SetSelectedIndex(int32_t Index) {
    return;
}
void _Script_UMG::ListView::ScrollIndexIntoView(int32_t Index) {
    return;
}
void _Script_UMG::ListView::BP_NavigateToItem(_Script_CoreUObject::Object* Item) {
    return;
}
void _Script_UMG::ListView::RemoveItem(_Script_CoreUObject::Object* Item) {
    return;
}
void _Script_UMG::ListView::NavigateToIndex(int32_t Index) {
    return;
}
bool _Script_UMG::ListView::IsRefreshPending() {
    return;
}
void* _Script_UMG::ListView::GetListItems() {
    return;
}
_Script_CoreUObject::Object* _Script_UMG::ListView::GetItemAt(int32_t Index) {
    return;
}
void _Script_UMG::ListView::BP_SetSelectedItem(_Script_CoreUObject::Object* Item) {
    return;
}
void _Script_UMG::ListView::BP_SetListItems(void*& InListItems) {
    return;
}
void _Script_UMG::ListView::BP_SetItemSelection(_Script_CoreUObject::Object* Item, bool bSelected) {
    return;
}
void _Script_UMG::ListView::BP_ScrollItemIntoView(_Script_CoreUObject::Object* Item) {
    return;
}
bool _Script_UMG::ListView::BP_IsItemVisible(_Script_CoreUObject::Object* Item) {
    return;
}
bool _Script_UMG::ListView::BP_GetSelectedItems(void*& Items) {
    return;
}
void _Script_UMG::ListView::BP_ClearSelection() {
    return;
}
