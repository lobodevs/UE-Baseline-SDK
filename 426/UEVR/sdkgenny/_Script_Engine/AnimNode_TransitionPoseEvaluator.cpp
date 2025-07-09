#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_Base.hpp"
#include "AnimNode_TransitionPoseEvaluator.hpp"
int32_t& _Script_Engine::AnimNode_TransitionPoseEvaluator::get_FramesToCachePose() {
    return *(int32_t*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_TransitionPoseEvaluator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_TransitionPoseEvaluator");
    return result;
}
void* _Script_Engine::AnimNode_TransitionPoseEvaluator::get_EvaluatorMode() {
    return (void*)((uintptr_t)this + 0xf1);
}
void* _Script_Engine::AnimNode_TransitionPoseEvaluator::get_DataSource() {
    return (void*)((uintptr_t)this + 0xf0);
}
