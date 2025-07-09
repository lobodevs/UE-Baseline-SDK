#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "StructSerializerObjectTestStruct.hpp"
void* _Script_Serialization::StructSerializerObjectTestStruct::get_Class() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Serialization::StructSerializerObjectTestStruct::get_SubClass() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Serialization::StructSerializerObjectTestStruct::get_SoftClass() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Serialization::StructSerializerObjectTestStruct::get_WeakObject() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Object*& _Script_Serialization::StructSerializerObjectTestStruct::get_Object() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x38);
}
void* _Script_Serialization::StructSerializerObjectTestStruct::get_ClassPath() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Serialization::StructSerializerObjectTestStruct::get_SoftObject() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Serialization::StructSerializerObjectTestStruct::get_ObjectPath() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerObjectTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerObjectTestStruct");
    return result;
}
