#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StructSerializerMapTestStruct.hpp"
void* _Script_Serialization::StructSerializerMapTestStruct::get_IntToStr() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Serialization::StructSerializerMapTestStruct::get_StrToStr() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Serialization::StructSerializerMapTestStruct::get_StrToVec() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Serialization::StructSerializerMapTestStruct::get_StrToStruct() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerMapTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerMapTestStruct");
    return result;
}
