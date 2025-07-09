#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SynthKnob.hpp"
#include "..\_Script_UMG\Widget.hpp"
float& _Script_Synthesis::SynthKnob::get_MouseFineTuneSpeed() {
    return *(float*)((uintptr_t)this + 0x114);
}
float& _Script_Synthesis::SynthKnob::get_Value() {
    return *(float*)((uintptr_t)this + 0x108);
}
float& _Script_Synthesis::SynthKnob::get_StepSize() {
    return *(float*)((uintptr_t)this + 0x10c);
}
float& _Script_Synthesis::SynthKnob::get_MouseSpeed() {
    return *(float*)((uintptr_t)this + 0x110);
}
bool _Script_Synthesis::SynthKnob::get_ShowTooltipInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
void _Script_Synthesis::SynthKnob::set_ShowTooltipInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Synthesis::SynthKnob::get_ParameterUnits() {
    return (void*)((uintptr_t)this + 0x138);
}
void _Script_Synthesis::SynthKnob::SetValue(float InValue) {
    return;
}
void* _Script_Synthesis::SynthKnob::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Synthesis::SynthKnob::get_ValueDelegate() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_Synthesis::SynthKnob::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x160);
}
bool _Script_Synthesis::SynthKnob::get_Locked() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
void _Script_Synthesis::SynthKnob::set_Locked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Synthesis::SynthKnob::set_IsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x399 + 0);
    *(uint8_t*)((uintptr_t)this + 0x399 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Synthesis::SynthKnob::get_IsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x399 + 0)) & 1 != 0;
}
void* _Script_Synthesis::SynthKnob::get_OnMouseCaptureBegin() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Script_Synthesis::SynthKnob::get_OnMouseCaptureEnd() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Script_Synthesis::SynthKnob::get_OnControllerCaptureBegin() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_Synthesis::SynthKnob::get_OnControllerCaptureEnd() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_Synthesis::SynthKnob::get_OnValueChanged() {
    return (void*)((uintptr_t)this + 0x3e0);
}
_Script_CoreUObject::Class* _Script_Synthesis::SynthKnob::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Synthesis.SynthKnob");
    return result;
}
void _Script_Synthesis::SynthKnob::SetStepSize(float InValue) {
    return;
}
void _Script_Synthesis::SynthKnob::SetLocked(bool InValue) {
    return;
}
float _Script_Synthesis::SynthKnob::GetValue() {
    return;
}
