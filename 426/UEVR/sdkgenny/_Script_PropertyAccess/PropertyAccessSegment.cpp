#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Function.hpp"
#include "..\_Script_CoreUObject\Struct.hpp"
#include "PropertyAccessSegment.hpp"
void* _Script_PropertyAccess::PropertyAccessSegment::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Function*& _Script_PropertyAccess::PropertyAccessSegment::get_Function() {
    return *(_Script_CoreUObject::Function**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Struct*& _Script_PropertyAccess::PropertyAccessSegment::get_Struct() {
    return *(_Script_CoreUObject::Struct**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_PropertyAccess::PropertyAccessSegment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PropertyAccess.PropertyAccessSegment");
    return result;
}
void* _Script_PropertyAccess::PropertyAccessSegment::get_Flags() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_PropertyAccess::PropertyAccessSegment::get_Property() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_PropertyAccess::PropertyAccessSegment::get_ArrayIndex() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
