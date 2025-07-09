#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Synth2DSlider.hpp"
#include "..\_Script_UMG\Widget.hpp"
bool _Script_Synthesis::Synth2DSlider::get_IsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x400 + 0)) & 1 != 0;
}
float& _Script_Synthesis::Synth2DSlider::get_ValueY() {
    return *(float*)((uintptr_t)this + 0x10c);
}
float& _Script_Synthesis::Synth2DSlider::get_ValueX() {
    return *(float*)((uintptr_t)this + 0x108);
}
void* _Script_Synthesis::Synth2DSlider::get_ValueXDelegate() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Synthesis::Synth2DSlider::get_ValueYDelegate() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Synthesis::Synth2DSlider::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Synthesis::Synth2DSlider::get_SliderHandleColor() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void _Script_Synthesis::Synth2DSlider::set_Locked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Synthesis::Synth2DSlider::get_IndentHandle() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f8 + 0)) & 1 != 0;
}
void _Script_Synthesis::Synth2DSlider::set_IndentHandle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Synthesis::Synth2DSlider::get_Locked() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f9 + 0)) & 1 != 0;
}
float& _Script_Synthesis::Synth2DSlider::get_StepSize() {
    return *(float*)((uintptr_t)this + 0x3fc);
}
void _Script_Synthesis::Synth2DSlider::set_IsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x400 + 0);
    *(uint8_t*)((uintptr_t)this + 0x400 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Synthesis::Synth2DSlider::get_OnMouseCaptureBegin() {
    return (void*)((uintptr_t)this + 0x408);
}
void* _Script_Synthesis::Synth2DSlider::get_OnMouseCaptureEnd() {
    return (void*)((uintptr_t)this + 0x418);
}
_Script_CoreUObject::Class* _Script_Synthesis::Synth2DSlider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.Synth2DSlider");
    return result;
}
void* _Script_Synthesis::Synth2DSlider::get_OnControllerCaptureBegin() {
    return (void*)((uintptr_t)this + 0x428);
}
_Script_CoreUObject::Vector2D _Script_Synthesis::Synth2DSlider::GetValue() {
    return;
}
void* _Script_Synthesis::Synth2DSlider::get_OnControllerCaptureEnd() {
    return (void*)((uintptr_t)this + 0x438);
}
void _Script_Synthesis::Synth2DSlider::SetLocked(bool InValue) {
    return;
}
void* _Script_Synthesis::Synth2DSlider::get_OnValueChangedX() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Script_Synthesis::Synth2DSlider::get_OnValueChangedY() {
    return (void*)((uintptr_t)this + 0x458);
}
void _Script_Synthesis::Synth2DSlider::SetValue(_Script_CoreUObject::Vector2D InValue) {
    return;
}
void _Script_Synthesis::Synth2DSlider::SetStepSize(float InValue) {
    return;
}
void _Script_Synthesis::Synth2DSlider::SetSliderHandleColor(_Script_CoreUObject::LinearColor InValue) {
    return;
}
void _Script_Synthesis::Synth2DSlider::SetIndentHandle(bool InValue) {
    return;
}
