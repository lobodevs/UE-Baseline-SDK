#include "..\FUObjectArray.hpp"
#include "IntervalCountdown.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::IntervalCountdown::get_Interval() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AIModule::IntervalCountdown::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.IntervalCountdown");
    return result;
}
