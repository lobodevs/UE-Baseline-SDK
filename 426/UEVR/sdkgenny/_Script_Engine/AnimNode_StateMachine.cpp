#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_Base.hpp"
#include "AnimNode_StateMachine.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimNode_StateMachine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_StateMachine");
    return result;
}
int32_t& _Script_Engine::AnimNode_StateMachine::get_StateMachineIndexInClass() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::AnimNode_StateMachine::get_MaxTransitionsPerFrame() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
bool _Script_Engine::AnimNode_StateMachine::get_bSkipFirstUpdateTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_Engine::AnimNode_StateMachine::set_bSkipFirstUpdateTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimNode_StateMachine::get_bReinitializeOnBecomingRelevant() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
void _Script_Engine::AnimNode_StateMachine::set_bReinitializeOnBecomingRelevant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
