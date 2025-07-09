#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "FrameNumberRange.hpp"
void* _Script_CoreUObject::FrameNumberRange::get_LowerBound() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::FrameNumberRange::get_UpperBound() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_CoreUObject::FrameNumberRange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.FrameNumberRange");
    return result;
}
