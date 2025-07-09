#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StructSerializerSetTestStruct.hpp"
void* _Script_Serialization::StructSerializerSetTestStruct::get_StrSet() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Serialization::StructSerializerSetTestStruct::get_NameSet() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Serialization::StructSerializerSetTestStruct::get_IntSet() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Serialization::StructSerializerSetTestStruct::get_StructSet() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerSetTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerSetTestStruct");
    return result;
}
