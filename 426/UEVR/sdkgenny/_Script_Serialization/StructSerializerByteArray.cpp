#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StructSerializerByteArray.hpp"
void* _Script_Serialization::StructSerializerByteArray::get_ByteArray() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Serialization::StructSerializerByteArray::get_Dummy1() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Serialization::StructSerializerByteArray::get_Dummy2() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerByteArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerByteArray");
    return result;
}
void* _Script_Serialization::StructSerializerByteArray::get_Int8Array() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Serialization::StructSerializerByteArray::get_Dummy3() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
