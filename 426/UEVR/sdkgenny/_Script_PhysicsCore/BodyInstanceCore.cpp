#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BodyInstanceCore.hpp"
bool _Script_PhysicsCore::BodyInstanceCore::get_bSimulatePhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_PhysicsCore::BodyInstanceCore::set_bAutoWeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_PhysicsCore::BodyInstanceCore::set_bSimulatePhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_PhysicsCore::BodyInstanceCore::get_bOverrideMass() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 2 != 0;
}
void _Script_PhysicsCore::BodyInstanceCore::set_bOverrideMass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_PhysicsCore::BodyInstanceCore::get_bEnableGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 4 != 0;
}
void _Script_PhysicsCore::BodyInstanceCore::set_bEnableGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_PhysicsCore::BodyInstanceCore::get_bAutoWeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 8 != 0;
}
bool _Script_PhysicsCore::BodyInstanceCore::get_bStartAwake() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 16 != 0;
}
void _Script_PhysicsCore::BodyInstanceCore::set_bStartAwake(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_PhysicsCore::BodyInstanceCore::get_bGenerateWakeEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 32 != 0;
}
void _Script_PhysicsCore::BodyInstanceCore::set_bGenerateWakeEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_PhysicsCore::BodyInstanceCore::get_bUpdateMassWhenScaleChanges() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 64 != 0;
}
void _Script_PhysicsCore::BodyInstanceCore::set_bUpdateMassWhenScaleChanges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
_Script_CoreUObject::Class* _Script_PhysicsCore::BodyInstanceCore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysicsCore.BodyInstanceCore");
    return result;
}
