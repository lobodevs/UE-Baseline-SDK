#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StructSerializerBooleanTestStruct.hpp"
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_BoolFalse() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_BoolTrue() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_BoolFalse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_Bitfield1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_BoolTrue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_Bitfield1() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 2 != 0;
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_Bitfield0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_Bitfield0() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_Bitfield2Set() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 4 != 0;
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_Bitfield2Set(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_Bitfield3() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 8 != 0;
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_Bitfield3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_Bitfield4Set() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 16 != 0;
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_Bitfield4Set(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_Bitfield5Set() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 32 != 0;
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_Bitfield5Set(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_Bitfield6() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 64 != 0;
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_Bitfield6(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Serialization::StructSerializerBooleanTestStruct::get_Bitfield7Set() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 128 != 0;
}
void _Script_Serialization::StructSerializerBooleanTestStruct::set_Bitfield7Set(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerBooleanTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerBooleanTestStruct");
    return result;
}
