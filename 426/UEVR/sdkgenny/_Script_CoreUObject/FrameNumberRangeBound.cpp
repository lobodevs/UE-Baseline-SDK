#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "FrameNumberRangeBound.hpp"
void* _Script_CoreUObject::FrameNumberRangeBound::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::FrameNumberRangeBound::get_Value() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::FrameNumberRangeBound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.FrameNumberRangeBound");
    return result;
}
