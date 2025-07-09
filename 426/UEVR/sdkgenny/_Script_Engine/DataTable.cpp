#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\ScriptStruct.hpp"
#include "DataTable.hpp"
bool _Script_Engine::DataTable::get_bIgnoreMissingFields() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 4 != 0;
}
bool _Script_Engine::DataTable::get_bStripFromClientBuilds() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
_Script_CoreUObject::ScriptStruct*& _Script_Engine::DataTable::get_RowStruct() {
    return *(_Script_CoreUObject::ScriptStruct**)((uintptr_t)this + 0x28);
}
void _Script_Engine::DataTable::set_bIgnoreExtraFields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::DataTable::set_bStripFromClientBuilds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::DataTable::get_bIgnoreExtraFields() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
void _Script_Engine::DataTable::set_bIgnoreMissingFields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::DataTable::get_ImportKeyField() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::DataTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DataTable");
    return result;
}
