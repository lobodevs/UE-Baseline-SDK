#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChaosPhysicsSettings.hpp"
void* _Script_Engine::ChaosPhysicsSettings::get_DefaultThreadingModel() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ChaosPhysicsSettings::get_DedicatedThreadBufferMode() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_Engine::ChaosPhysicsSettings::get_DedicatedThreadTickMode() {
    return (void*)((uintptr_t)this + 0x1);
}
_Script_CoreUObject::Class* _Script_Engine::ChaosPhysicsSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ChaosPhysicsSettings");
    return result;
}
