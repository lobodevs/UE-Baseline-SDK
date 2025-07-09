#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GPUSpriteEmitterInfo.hpp"
#include "ParticleModuleRequired.hpp"
#include "ParticleModuleSpawn.hpp"
#include "ParticleModuleSpawnPerUnit.hpp"
_Script_Engine::ParticleModuleRequired*& _Script_Engine::GPUSpriteEmitterInfo::get_RequiredModule() {
    return *(_Script_Engine::ParticleModuleRequired**)((uintptr_t)this + 0x0);
}
_Script_Engine::ParticleModuleSpawn*& _Script_Engine::GPUSpriteEmitterInfo::get_SpawnModule() {
    return *(_Script_Engine::ParticleModuleSpawn**)((uintptr_t)this + 0x8);
}
_Script_Engine::ParticleModuleSpawnPerUnit*& _Script_Engine::GPUSpriteEmitterInfo::get_SpawnPerUnitModule() {
    return *(_Script_Engine::ParticleModuleSpawnPerUnit**)((uintptr_t)this + 0x10);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_SpawnModules() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_LocalVectorField() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_VectorFieldScale() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_PointAttractorStrength() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_DragCoefficient() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_Resilience() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_ConstantAcceleration() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_PointAttractorPosition() {
    return (void*)((uintptr_t)this + 0x12c);
}
float& _Script_Engine::GPUSpriteEmitterInfo::get_PointAttractorRadiusSq() {
    return *(float*)((uintptr_t)this + 0x138);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_OrbitOffsetBase() {
    return (void*)((uintptr_t)this + 0x13c);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_OrbitOffsetRange() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_InvMaxSize() {
    return (void*)((uintptr_t)this + 0x154);
}
float& _Script_Engine::GPUSpriteEmitterInfo::get_InvRotationRateScale() {
    return *(float*)((uintptr_t)this + 0x15c);
}
float& _Script_Engine::GPUSpriteEmitterInfo::get_MaxLifetime() {
    return *(float*)((uintptr_t)this + 0x160);
}
int32_t& _Script_Engine::GPUSpriteEmitterInfo::get_MaxParticleCount() {
    return *(int32_t*)((uintptr_t)this + 0x164);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_ScreenAlignment() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_LockAxisFlag() {
    return (void*)((uintptr_t)this + 0x169);
}
bool _Script_Engine::GPUSpriteEmitterInfo::get_bEnableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x16c + 0)) & 1 != 0;
}
void _Script_Engine::GPUSpriteEmitterInfo::set_bEnableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16c + 0);
    *(uint8_t*)((uintptr_t)this + 0x16c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_CollisionMode() {
    return (void*)((uintptr_t)this + 0x170);
}
bool _Script_Engine::GPUSpriteEmitterInfo::get_bRemoveHMDRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x174 + 0)) & 1 != 0;
}
void _Script_Engine::GPUSpriteEmitterInfo::set_bRemoveHMDRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x174 + 0);
    *(uint8_t*)((uintptr_t)this + 0x174 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::GPUSpriteEmitterInfo::get_MinFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0x178);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_DynamicColor() {
    return (void*)((uintptr_t)this + 0x180);
}
float& _Script_Engine::GPUSpriteEmitterInfo::get_MaxFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0x17c);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_DynamicAlpha() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_DynamicColorScale() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_Engine::GPUSpriteEmitterInfo::get_DynamicAlphaScale() {
    return (void*)((uintptr_t)this + 0x240);
}
_Script_CoreUObject::Class* _Script_Engine::GPUSpriteEmitterInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.GPUSpriteEmitterInfo");
    return result;
}
