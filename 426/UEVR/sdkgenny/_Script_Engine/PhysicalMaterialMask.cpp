#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PhysicalMaterialMask.hpp"
int32_t& _Script_Engine::PhysicalMaterialMask::get_UVChannelIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::PhysicalMaterialMask::get_AddressY() {
    return (void*)((uintptr_t)this + 0x2d);
}
void* _Script_Engine::PhysicalMaterialMask::get_AddressX() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicalMaterialMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicalMaterialMask");
    return result;
}
