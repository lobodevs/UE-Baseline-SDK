#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyle.hpp"
#include "Synth2DSliderStyle.hpp"
void* _Script_Synthesis::Synth2DSliderStyle::get_NormalThumbImage() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Synthesis::Synth2DSliderStyle::get_DisabledThumbImage() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Synthesis::Synth2DSliderStyle::get_NormalBarImage() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_Synthesis::Synth2DSliderStyle::get_DisabledBarImage() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_Synthesis::Synth2DSliderStyle::get_BackgroundImage() {
    return (void*)((uintptr_t)this + 0x228);
}
float& _Script_Synthesis::Synth2DSliderStyle::get_BarThickness() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Script_Synthesis::Synth2DSliderStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.Synth2DSliderStyle");
    return result;
}
