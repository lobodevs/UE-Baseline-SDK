#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_TwistCorrectiveNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_BaseFrame() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_Curve() {
    return (void*)((uintptr_t)this + 0x124);
}
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_TwistFrame() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode");
    return result;
}
float& _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_RemappedMin() {
    return *(float*)((uintptr_t)this + 0x11c);
}
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_TwistPlaneNormalAxis() {
    return (void*)((uintptr_t)this + 0x108);
}
float& _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_RangeMax() {
    return *(float*)((uintptr_t)this + 0x118);
}
float& _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_RemappedMax() {
    return *(float*)((uintptr_t)this + 0x120);
}
