#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_UMG\Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Synthesis {
#pragma pack(push, 1)
struct Synth2DSlider : public _Script_UMG::Widget {
    private: char pad_108[0x370]; public:
    float& get_ValueX();
    float& get_ValueY();
    void* get_ValueXDelegate();
    void* get_ValueYDelegate();
    void* get_WidgetStyle();
    void* get_SliderHandleColor();
    bool get_IndentHandle();
    void set_IndentHandle(bool value);
    bool get_Locked();
    void set_Locked(bool value);
    float& get_StepSize();
    bool get_IsFocusable();
    void set_IsFocusable(bool value);
    void* get_OnMouseCaptureBegin();
    void* get_OnMouseCaptureEnd();
    void* get_OnControllerCaptureBegin();
    void* get_OnControllerCaptureEnd();
    void* get_OnValueChangedX();
    void* get_OnValueChangedY();
    static _Script_CoreUObject::Class* static_class();
    void SetValue(_Script_CoreUObject::Vector2D InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(_Script_CoreUObject::LinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    _Script_CoreUObject::Vector2D GetValue();
}; // Size: 0x478
#pragma pack(pop)
}
