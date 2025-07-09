#include "..\FUObjectArray.hpp"
#include "AnimNode_Fabrik.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_RootBone() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_EffectorTransform() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_EffectorTarget() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_TipBone() {
    return (void*)((uintptr_t)this + 0x160);
}
float& _Script_AnimGraphRuntime::AnimNode_Fabrik::get_Precision() {
    return *(float*)((uintptr_t)this + 0x180);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_Fabrik::get_MaxIterations() {
    return *(int32_t*)((uintptr_t)this + 0x184);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_EffectorTransformSpace() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_EffectorRotationSource() {
    return (void*)((uintptr_t)this + 0x189);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_Fabrik::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_Fabrik");
    return result;
}
