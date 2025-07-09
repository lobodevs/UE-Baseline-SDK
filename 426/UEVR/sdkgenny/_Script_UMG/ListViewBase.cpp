#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ListViewBase.hpp"
#include "Widget.hpp"
void* _Script_UMG::ListViewBase::get_EntryWidgetClass() {
    return (void*)((uintptr_t)this + 0x108);
}
float& _Script_UMG::ListViewBase::get_WheelScrollMultiplier() {
    return *(float*)((uintptr_t)this + 0x110);
}
void* _Script_UMG::ListViewBase::get_BP_OnEntryGenerated() {
    return (void*)((uintptr_t)this + 0x120);
}
void _Script_UMG::ListViewBase::set_bEnableScrollAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x114 + 0);
    *(uint8_t*)((uintptr_t)this + 0x114 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::ListViewBase::get_bEnableScrollAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x114 + 0)) & 1 != 0;
}
float& _Script_UMG::ListViewBase::get_FixedLineScrollOffset() {
    return *(float*)((uintptr_t)this + 0x118);
}
bool _Script_UMG::ListViewBase::get_bEnableFixedLineOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x115 + 0)) & 1 != 0;
}
void _Script_UMG::ListViewBase::set_bEnableFixedLineOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x115 + 0);
    *(uint8_t*)((uintptr_t)this + 0x115 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ListViewBase::get_BP_OnEntryReleased() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_UMG::ListViewBase::get_EntryWidgetPool() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_UMG::ListViewBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ListViewBase");
    return result;
}
void _Script_UMG::ListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
    return;
}
void _Script_UMG::ListViewBase::SetScrollOffset(float InScrollOffset) {
    return;
}
void _Script_UMG::ListViewBase::SetScrollbarVisibility(void* InVisibility) {
    return;
}
void _Script_UMG::ListViewBase::ScrollToTop() {
    return;
}
void _Script_UMG::ListViewBase::ScrollToBottom() {
    return;
}
void _Script_UMG::ListViewBase::RequestRefresh() {
    return;
}
void _Script_UMG::ListViewBase::RegenerateAllEntries() {
    return;
}
void* _Script_UMG::ListViewBase::GetDisplayedEntryWidgets() {
    return;
}
