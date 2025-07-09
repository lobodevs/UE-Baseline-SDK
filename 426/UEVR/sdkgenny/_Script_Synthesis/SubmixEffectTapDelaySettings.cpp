#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubmixEffectTapDelaySettings.hpp"
float& _Script_Synthesis::SubmixEffectTapDelaySettings::get_MaximumDelayLength() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SubmixEffectTapDelaySettings::get_InterpolationTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Synthesis::SubmixEffectTapDelaySettings::get_Taps() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectTapDelaySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SubmixEffectTapDelaySettings");
    return result;
}
