#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleOrbit.hpp"
#include "ParticleModuleOrbitBase.hpp"
void* _Script_Engine::ParticleModuleOrbit::get_RotationRateOptions() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::ParticleModuleOrbit::get_OffsetOptions() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::ParticleModuleOrbit::get_ChainMode() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleModuleOrbit::get_OffsetAmount() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::ParticleModuleOrbit::get_RotationAmount() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::ParticleModuleOrbit::get_RotationOptions() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_Engine::ParticleModuleOrbit::get_RotationRateAmount() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleOrbit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleOrbit");
    return result;
}
