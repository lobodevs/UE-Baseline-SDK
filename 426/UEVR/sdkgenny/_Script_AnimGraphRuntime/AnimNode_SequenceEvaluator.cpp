#include "..\FUObjectArray.hpp"
#include "AnimNode_SequenceEvaluator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_AssetPlayerBase.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
bool _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_bTeleportToExplicitTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x45 + 0)) & 1 != 0;
}
_Script_Engine::AnimSequenceBase*& _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_Sequence() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x38);
}
float& _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_ExplicitTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
void* _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_ReinitializationBehavior() {
    return (void*)((uintptr_t)this + 0x46);
}
bool _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_bShouldLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::set_bShouldLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::set_bTeleportToExplicitTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x45 + 0);
    *(uint8_t*)((uintptr_t)this + 0x45 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_SequenceEvaluator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator");
    return result;
}
