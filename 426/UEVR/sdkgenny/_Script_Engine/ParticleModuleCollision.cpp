#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleCollision.hpp"
#include "ParticleModuleCollisionBase.hpp"
void* _Script_Engine::ParticleModuleCollision::get_CollisionTypes() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Engine::ParticleModuleCollision::get_DampingFactor() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleCollision::get_DampingFactorRotation() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_Engine::ParticleModuleCollision::set_bApplyPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleCollision::get_MaxCollisions() {
    return (void*)((uintptr_t)this + 0xc0);
}
bool _Script_Engine::ParticleModuleCollision::get_bIgnoreTriggerVolumes() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 2 != 0;
}
void* _Script_Engine::ParticleModuleCollision::get_CollisionCompletionOption() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_Engine::ParticleModuleCollision::get_bApplyPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleCollision::set_bIgnoreTriggerVolumes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::ParticleModuleCollision::get_ParticleMass() {
    return (void*)((uintptr_t)this + 0x118);
}
bool _Script_Engine::ParticleModuleCollision::get_bCollideOnlyIfVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 2 != 0;
}
float& _Script_Engine::ParticleModuleCollision::get_DirScalar() {
    return *(float*)((uintptr_t)this + 0x148);
}
bool _Script_Engine::ParticleModuleCollision::get_bPawnsDoNotDecrementCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x14c + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleCollision::set_bPawnsDoNotDecrementCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14c + 0);
    *(uint8_t*)((uintptr_t)this + 0x14c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleCollision::get_bOnlyVerticalNormalsDecrementCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x14c + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleCollision::set_bOnlyVerticalNormalsDecrementCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14c + 0);
    *(uint8_t*)((uintptr_t)this + 0x14c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::ParticleModuleCollision::get_VerticalFudgeFactor() {
    return *(float*)((uintptr_t)this + 0x150);
}
void* _Script_Engine::ParticleModuleCollision::get_DelayAmount() {
    return (void*)((uintptr_t)this + 0x158);
}
bool _Script_Engine::ParticleModuleCollision::get_bDropDetail() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleCollision::set_bDropDetail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModuleCollision::set_bCollideOnlyIfVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleCollision::get_bIgnoreSourceActor() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleCollision::set_bIgnoreSourceActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::ParticleModuleCollision::get_MaxCollisionDistance() {
    return *(float*)((uintptr_t)this + 0x18c);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleCollision::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleCollision");
    return result;
}
