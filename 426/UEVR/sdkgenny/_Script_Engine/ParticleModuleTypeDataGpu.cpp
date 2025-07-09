#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleTypeDataBase.hpp"
#include "ParticleModuleTypeDataGpu.hpp"
void _Script_Engine::ParticleModuleTypeDataGpu::set_bClearExistingParticlesOnInit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x414 + 0);
    *(uint8_t*)((uintptr_t)this + 0x414 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataGpu::get_bClearExistingParticlesOnInit() {
    return (*(uint8_t*)((uintptr_t)this + 0x414 + 0)) & 1 != 0;
}
float& _Script_Engine::ParticleModuleTypeDataGpu::get_CameraMotionBlurAmount() {
    return *(float*)((uintptr_t)this + 0x410);
}
void* _Script_Engine::ParticleModuleTypeDataGpu::get_EmitterInfo() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleTypeDataGpu::get_ResourceData() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleTypeDataGpu::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleTypeDataGpu");
    return result;
}
