#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Function.hpp"
#include "PropertyAccessIndirection.hpp"
int32_t& _Script_PropertyAccess::PropertyAccessIndirection::get_ReturnBufferAlignment() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_PropertyAccess::PropertyAccessIndirection::get_ArrayProperty() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Function*& _Script_PropertyAccess::PropertyAccessIndirection::get_Function() {
    return *(_Script_CoreUObject::Function**)((uintptr_t)this + 0x20);
}
void* _Script_PropertyAccess::PropertyAccessIndirection::get_Offset() {
    return (void*)((uintptr_t)this + 0x34);
}
int32_t& _Script_PropertyAccess::PropertyAccessIndirection::get_ReturnBufferSize() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_PropertyAccess::PropertyAccessIndirection::get_ArrayIndex() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_PropertyAccess::PropertyAccessIndirection::get_Type() {
    return (void*)((uintptr_t)this + 0x39);
}
void* _Script_PropertyAccess::PropertyAccessIndirection::get_ObjectType() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_PropertyAccess::PropertyAccessIndirection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PropertyAccess.PropertyAccessIndirection");
    return result;
}
