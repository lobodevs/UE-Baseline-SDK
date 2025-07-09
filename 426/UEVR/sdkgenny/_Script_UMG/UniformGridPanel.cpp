#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "PanelWidget.hpp"
#include "UniformGridPanel.hpp"
#include "UniformGridSlot.hpp"
#include "Widget.hpp"
void* _Script_UMG::UniformGridPanel::get_SlotPadding() {
    return (void*)((uintptr_t)this + 0x120);
}
void _Script_UMG::UniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight) {
    return;
}
float& _Script_UMG::UniformGridPanel::get_MinDesiredSlotWidth() {
    return *(float*)((uintptr_t)this + 0x130);
}
float& _Script_UMG::UniformGridPanel::get_MinDesiredSlotHeight() {
    return *(float*)((uintptr_t)this + 0x134);
}
_Script_CoreUObject::Class* _Script_UMG::UniformGridPanel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.UniformGridPanel");
    return result;
}
void _Script_UMG::UniformGridPanel::SetSlotPadding(_Script_SlateCore::Margin InSlotPadding) {
    return;
}
void _Script_UMG::UniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth) {
    return;
}
_Script_UMG::UniformGridSlot* _Script_UMG::UniformGridPanel::AddChildToUniformGrid(_Script_UMG::Widget* Content, int32_t InRow, int32_t InColumn) {
    return;
}
