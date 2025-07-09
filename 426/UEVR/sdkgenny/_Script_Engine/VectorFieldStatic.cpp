#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VectorField.hpp"
#include "VectorFieldStatic.hpp"
int32_t& _Script_Engine::VectorFieldStatic::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
bool _Script_Engine::VectorFieldStatic::get_bAllowCPUAccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::VectorFieldStatic::get_SizeY() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
int32_t& _Script_Engine::VectorFieldStatic::get_SizeZ() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
void _Script_Engine::VectorFieldStatic::set_bAllowCPUAccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::VectorFieldStatic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VectorFieldStatic");
    return result;
}
