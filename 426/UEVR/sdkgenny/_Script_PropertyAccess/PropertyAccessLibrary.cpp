#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyAccessLibrary.hpp"
void* _Script_PropertyAccess::PropertyAccessLibrary::get_Indirections() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_PropertyAccess::PropertyAccessLibrary::get_PathSegments() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_PropertyAccess::PropertyAccessLibrary::get_DestPaths() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_PropertyAccess::PropertyAccessLibrary::get_SrcPaths() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_PropertyAccess::PropertyAccessLibrary::get_CopyBatches() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_PropertyAccess::PropertyAccessLibrary::get_SrcAccesses() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_PropertyAccess::PropertyAccessLibrary::get_DestAccesses() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_PropertyAccess::PropertyAccessLibrary::get_EventAccessIndices() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_PropertyAccess::PropertyAccessLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PropertyAccess.PropertyAccessLibrary");
    return result;
}
