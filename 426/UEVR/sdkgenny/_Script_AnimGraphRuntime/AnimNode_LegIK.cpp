#include "..\FUObjectArray.hpp"
#include "AnimNode_LegIK.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AnimGraphRuntime::AnimNode_LegIK::get_MaxIterations() {
    return *(int32_t*)((uintptr_t)this + 0xcc);
}
float& _Script_AnimGraphRuntime::AnimNode_LegIK::get_ReachPrecision() {
    return *(float*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_LegIK::get_LegsDefinition() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_LegIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_LegIK");
    return result;
}
