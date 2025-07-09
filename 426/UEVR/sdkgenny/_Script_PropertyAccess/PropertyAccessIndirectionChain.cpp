#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyAccessIndirectionChain.hpp"
void* _Script_PropertyAccess::PropertyAccessIndirectionChain::get_Property() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_PropertyAccess::PropertyAccessIndirectionChain::get_IndirectionStartIndex() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_PropertyAccess::PropertyAccessIndirectionChain::get_IndirectionEndIndex() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
int32_t& _Script_PropertyAccess::PropertyAccessIndirectionChain::get_EventId() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_PropertyAccess::PropertyAccessIndirectionChain::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PropertyAccess.PropertyAccessIndirectionChain");
    return result;
}
