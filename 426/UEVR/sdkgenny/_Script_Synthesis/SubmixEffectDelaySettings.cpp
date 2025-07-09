#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubmixEffectDelaySettings.hpp"
float& _Script_Synthesis::SubmixEffectDelaySettings::get_DelayLength() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Synthesis::SubmixEffectDelaySettings::get_MaximumDelayLength() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SubmixEffectDelaySettings::get_InterpolationTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectDelaySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SubmixEffectDelaySettings");
    return result;
}
