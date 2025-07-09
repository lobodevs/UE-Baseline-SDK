#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleOrientationAxisLock.hpp"
#include "ParticleModuleOrientationBase.hpp"
void* _Script_Engine::ParticleModuleOrientationAxisLock::get_LockAxisFlags() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleOrientationAxisLock::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleOrientationAxisLock");
    return result;
}
