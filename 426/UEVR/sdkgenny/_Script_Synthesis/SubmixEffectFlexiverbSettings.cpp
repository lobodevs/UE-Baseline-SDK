#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubmixEffectFlexiverbSettings.hpp"
float& _Script_Synthesis::SubmixEffectFlexiverbSettings::get_PreDelay() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Synthesis::SubmixEffectFlexiverbSettings::get_DecayTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Synthesis::SubmixEffectFlexiverbSettings::get_RoomDampening() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Synthesis::SubmixEffectFlexiverbSettings::get_Complexity() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Synthesis::SubmixEffectFlexiverbSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Synthesis.SubmixEffectFlexiverbSettings");
    return result;
}
