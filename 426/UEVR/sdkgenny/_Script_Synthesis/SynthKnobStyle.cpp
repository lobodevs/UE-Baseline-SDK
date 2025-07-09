#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyle.hpp"
#include "SynthKnobStyle.hpp"
void* _Script_Synthesis::SynthKnobStyle::get_LargeKnob() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Synthesis::SynthKnobStyle::get_MediumKnobOverlay() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_Synthesis::SynthKnobStyle::get_LargeKnobOverlay() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_Synthesis::SynthKnobStyle::get_MaxValueAngle() {
    return *(float*)((uintptr_t)this + 0x22c);
}
void* _Script_Synthesis::SynthKnobStyle::get_MediumKnob() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_Synthesis::SynthKnobStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SynthKnobStyle");
    return result;
}
float& _Script_Synthesis::SynthKnobStyle::get_MinValueAngle() {
    return *(float*)((uintptr_t)this + 0x228);
}
void* _Script_Synthesis::SynthKnobStyle::get_KnobSize() {
    return (void*)((uintptr_t)this + 0x230);
}
