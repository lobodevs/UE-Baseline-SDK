#include "..\FUObjectArray.hpp"
#include "ChaosSolverSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
void* _Script_ChaosSolverEngine::ChaosSolverSettings::get_DefaultChaosSolverActorClass() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::ChaosSolverSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosSolverEngine.ChaosSolverSettings");
    return result;
}
