#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleSize.hpp"
#include "ParticleModuleSize_Seeded.hpp"
void* _Script_Engine::ParticleModuleSize_Seeded::get_RandomSeedInfo() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleSize_Seeded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleSize_Seeded");
    return result;
}
