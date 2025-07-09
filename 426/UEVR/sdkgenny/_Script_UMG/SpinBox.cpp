#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "SpinBox.hpp"
#include "Widget.hpp"
float& _Script_UMG::SpinBox::get_Value() {
    return *(float*)((uintptr_t)this + 0x108);
}
void* _Script_UMG::SpinBox::get_ValueDelegate() {
    return (void*)((uintptr_t)this + 0x10c);
}
void* _Script_UMG::SpinBox::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x120);
}
float& _Script_UMG::SpinBox::get_MinDesiredWidth() {
    return *(float*)((uintptr_t)this + 0x484);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::SpinBox::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x408);
}
void _Script_UMG::SpinBox::set_bOverride_MinValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::SpinBox::set_bAlwaysUsesDeltaSnap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x418 + 0);
    *(uint8_t*)((uintptr_t)this + 0x418 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_UMG::SpinBox::get_MinFractionalDigits() {
    return *(int32_t*)((uintptr_t)this + 0x410);
}
bool _Script_UMG::SpinBox::get_bOverride_MinSliderValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x4f8 + 0)) & 4 != 0;
}
int32_t& _Script_UMG::SpinBox::get_MaxFractionalDigits() {
    return *(int32_t*)((uintptr_t)this + 0x414);
}
void* _Script_UMG::SpinBox::get_OnValueChanged() {
    return (void*)((uintptr_t)this + 0x4b8);
}
bool _Script_UMG::SpinBox::get_bAlwaysUsesDeltaSnap() {
    return (*(uint8_t*)((uintptr_t)this + 0x418 + 0)) & 1 != 0;
}
void _Script_UMG::SpinBox::ClearMinSliderValue() {
    return;
}
float& _Script_UMG::SpinBox::get_Delta() {
    return *(float*)((uintptr_t)this + 0x41c);
}
float& _Script_UMG::SpinBox::get_SliderExponent() {
    return *(float*)((uintptr_t)this + 0x420);
}
void* _Script_UMG::SpinBox::get_Font() {
    return (void*)((uintptr_t)this + 0x428);
}
void _Script_UMG::SpinBox::ClearMaxValue() {
    return;
}
void* _Script_UMG::SpinBox::get_Justification() {
    return (void*)((uintptr_t)this + 0x480);
}
float _Script_UMG::SpinBox::GetMinValue() {
    return;
}
bool _Script_UMG::SpinBox::get_ClearKeyboardFocusOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x488 + 0)) & 1 != 0;
}
void _Script_UMG::SpinBox::set_ClearKeyboardFocusOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x488 + 0);
    *(uint8_t*)((uintptr_t)this + 0x488 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::SpinBox::get_SelectAllTextOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x489 + 0)) & 1 != 0;
}
void _Script_UMG::SpinBox::set_SelectAllTextOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x489 + 0);
    *(uint8_t*)((uintptr_t)this + 0x489 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::SpinBox::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x490);
}
float& _Script_UMG::SpinBox::get_MaxSliderValue() {
    return *(float*)((uintptr_t)this + 0x508);
}
void* _Script_UMG::SpinBox::get_OnValueCommitted() {
    return (void*)((uintptr_t)this + 0x4c8);
}
void* _Script_UMG::SpinBox::get_OnBeginSliderMovement() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void* _Script_UMG::SpinBox::get_OnEndSliderMovement() {
    return (void*)((uintptr_t)this + 0x4e8);
}
bool _Script_UMG::SpinBox::get_bOverride_MinValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x4f8 + 0)) & 1 != 0;
}
bool _Script_UMG::SpinBox::get_bOverride_MaxValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x4f8 + 0)) & 2 != 0;
}
void _Script_UMG::SpinBox::set_bOverride_MaxValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4f8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_UMG::SpinBox::set_bOverride_MinSliderValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4f8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_UMG::SpinBox::get_bOverride_MaxSliderValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x4f8 + 0)) & 8 != 0;
}
void _Script_UMG::SpinBox::set_bOverride_MaxSliderValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4f8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_UMG::SpinBox::get_MinValue() {
    return *(float*)((uintptr_t)this + 0x4fc);
}
float& _Script_UMG::SpinBox::get_MaxValue() {
    return *(float*)((uintptr_t)this + 0x500);
}
float& _Script_UMG::SpinBox::get_MinSliderValue() {
    return *(float*)((uintptr_t)this + 0x504);
}
_Script_CoreUObject::Class* _Script_UMG::SpinBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.SpinBox");
    return result;
}
void _Script_UMG::SpinBox::SetValue(float NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetMinValue(float NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetMinSliderValue(float NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetMinFractionalDigits(int32_t NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetMaxValue(float NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetMaxSliderValue(float NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetMaxFractionalDigits(int32_t NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetForegroundColor(_Script_SlateCore::SlateColor InForegroundColor) {
    return;
}
void _Script_UMG::SpinBox::SetDelta(float NewValue) {
    return;
}
void _Script_UMG::SpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue) {
    return;
}
float _Script_UMG::SpinBox::GetValue() {
    return;
}
float _Script_UMG::SpinBox::GetMinSliderValue() {
    return;
}
int32_t _Script_UMG::SpinBox::GetMinFractionalDigits() {
    return;
}
float _Script_UMG::SpinBox::GetMaxValue() {
    return;
}
float _Script_UMG::SpinBox::GetMaxSliderValue() {
    return;
}
int32_t _Script_UMG::SpinBox::GetMaxFractionalDigits() {
    return;
}
bool _Script_UMG::SpinBox::GetAlwaysUsesDeltaSnap() {
    return;
}
float _Script_UMG::SpinBox::GetDelta() {
    return;
}
void _Script_UMG::SpinBox::ClearMinValue() {
    return;
}
void _Script_UMG::SpinBox::ClearMaxSliderValue() {
    return;
}
