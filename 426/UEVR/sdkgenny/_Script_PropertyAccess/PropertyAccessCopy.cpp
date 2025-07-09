#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyAccessCopy.hpp"
int32_t& _Script_PropertyAccess::PropertyAccessCopy::get_DestAccessEndIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_PropertyAccess::PropertyAccessCopy::get_AccessIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_PropertyAccess::PropertyAccessCopy::get_DestAccessStartIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_PropertyAccess::PropertyAccessCopy::get_Type() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_PropertyAccess::PropertyAccessCopy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PropertyAccess.PropertyAccessCopy");
    return result;
}
