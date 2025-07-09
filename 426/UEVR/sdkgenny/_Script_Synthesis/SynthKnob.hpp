#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct SynthKnob : public _Script_UMG::Widget {
    private: char pad_108[0x2f8]; public:
    float& get_Value();
    float& get_StepSize();
    float& get_MouseSpeed();
    float& get_MouseFineTuneSpeed();
    bool get_ShowTooltipInfo();
    void set_ShowTooltipInfo(bool value);
    void* get_ParameterName();
    void* get_ParameterUnits();
    void* get_ValueDelegate();
    void* get_WidgetStyle();
    bool get_Locked();
    void set_Locked(bool value);
    bool get_IsFocusable();
    void set_IsFocusable(bool value);
    void* get_OnMouseCaptureBegin();
    void* get_OnMouseCaptureEnd();
    void* get_OnControllerCaptureBegin();
    void* get_OnControllerCaptureEnd();
    void* get_OnValueChanged();
    static _Script_CoreUObject::Class* static_class();
    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetLocked(bool InValue);
    float GetValue();
}; // Size: 0x400
#pragma pack(pop)
}
