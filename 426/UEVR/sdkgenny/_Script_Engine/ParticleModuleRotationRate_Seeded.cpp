#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleRotationRate.hpp"
#include "ParticleModuleRotationRate_Seeded.hpp"
void* _Script_Engine::ParticleModuleRotationRate_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleRotationRate_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleRotationRate_Seeded");
    return result;
}
