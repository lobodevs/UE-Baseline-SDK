#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleBeamBase.hpp"
#include "ParticleModuleBeamSource.hpp"
void* _Script_Engine::ParticleModuleBeamSource::get_Source() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::ParticleModuleBeamSource::get_SourceMethod() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleBeamSource::get_SourceName() {
    return (void*)((uintptr_t)this + 0x34);
}
bool _Script_Engine::ParticleModuleBeamSource::get_bSourceAbsolute() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamSource::set_bSourceAbsolute(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleBeamSource::get_SourceTangentMethod() {
    return (void*)((uintptr_t)this + 0x8c);
}
bool _Script_Engine::ParticleModuleBeamSource::get_bLockSource() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamSource::set_bLockSource(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleBeamSource::get_SourceTangent() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_Engine::ParticleModuleBeamSource::get_bLockSourceTangent() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamSource::set_bLockSourceTangent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleBeamSource::get_SourceStrength() {
    return (void*)((uintptr_t)this + 0xe0);
}
bool _Script_Engine::ParticleModuleBeamSource::get_bLockSourceStength() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamSource::set_bLockSourceStength(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleBeamSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleBeamSource");
    return result;
}
