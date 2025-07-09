#include "..\FUObjectArray.hpp"
#include "ChaosDebugSubstepControl.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ChaosSolverEngine::ChaosDebugSubstepControl::get_bPause() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_ChaosSolverEngine::ChaosDebugSubstepControl::set_bSubstep(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ChaosSolverEngine::ChaosDebugSubstepControl::set_bPause(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ChaosSolverEngine::ChaosDebugSubstepControl::get_bSubstep() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
bool _Script_ChaosSolverEngine::ChaosDebugSubstepControl::get_bStep() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_ChaosSolverEngine::ChaosDebugSubstepControl::set_bStep(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ChaosSolverEngine::ChaosDebugSubstepControl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ChaosSolverEngine.ChaosDebugSubstepControl");
    return result;
}
