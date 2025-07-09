#include "..\FUObjectArray.hpp"
#include "ChaosHandlerSet.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ChaosSolverEngine::ChaosHandlerSet::get_ChaosHandlers() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::ChaosHandlerSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ChaosSolverEngine.ChaosHandlerSet");
    return result;
}
