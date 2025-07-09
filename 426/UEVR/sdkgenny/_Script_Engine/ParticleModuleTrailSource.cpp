#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleTrailBase.hpp"
#include "ParticleModuleTrailSource.hpp"
void* _Script_Engine::ParticleModuleTrailSource::get_SourceMethod() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::ParticleModuleTrailSource::set_bInheritRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleTrailSource::get_SelectionMethod() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::ParticleModuleTrailSource::get_SourceName() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Engine::ParticleModuleTrailSource::get_SourceStrength() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::ParticleModuleTrailSource::get_bLockSourceStength() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleTrailSource::set_bLockSourceStength(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::ParticleModuleTrailSource::get_SourceOffsetCount() {
    return *(int32_t*)((uintptr_t)this + 0x74);
}
void* _Script_Engine::ParticleModuleTrailSource::get_SourceOffsetDefaults() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_Engine::ParticleModuleTrailSource::get_bInheritRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleTrailSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleTrailSource");
    return result;
}
