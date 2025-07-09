#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleSpawn.hpp"
#include "ParticleModuleSpawnBase.hpp"
void* _Script_Engine::ParticleModuleSpawn::get_RateScale() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::ParticleModuleSpawn::get_Rate() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleModuleSpawn::get_ParticleBurstMethod() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::ParticleModuleSpawn::get_BurstList() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::ParticleModuleSpawn::get_BurstScale() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_Engine::ParticleModuleSpawn::get_bApplyGlobalSpawnRateScale() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleSpawn::set_bApplyGlobalSpawnRateScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleSpawn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleSpawn");
    return result;
}
