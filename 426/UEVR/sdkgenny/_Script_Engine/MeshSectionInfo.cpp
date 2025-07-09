#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshSectionInfo.hpp"
int32_t& _Script_Engine::MeshSectionInfo::get_MaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::MeshSectionInfo::get_bEnableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
bool _Script_Engine::MeshSectionInfo::get_bVisibleInRayTracing() {
    return (*(uint8_t*)((uintptr_t)this + 0x6 + 0)) & 1 != 0;
}
void _Script_Engine::MeshSectionInfo::set_bEnableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshSectionInfo::get_bCastShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 1 != 0;
}
void _Script_Engine::MeshSectionInfo::set_bCastShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshSectionInfo::set_bVisibleInRayTracing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshSectionInfo::get_bForceOpaque() {
    return (*(uint8_t*)((uintptr_t)this + 0x7 + 0)) & 1 != 0;
}
void _Script_Engine::MeshSectionInfo::set_bForceOpaque(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MeshSectionInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshSectionInfo");
    return result;
}
