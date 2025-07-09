#include "..\FUObjectArray.hpp"
#include "PositionHistory.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::PositionHistory::get_Positions() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_AnimGraphRuntime::PositionHistory::get_Range() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::PositionHistory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.PositionHistory");
    return result;
}
