#include "..\FUObjectArray.hpp"
#include "AnimNode_HandIKRetargeting.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting");
    return result;
}
void* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_RightHandFK() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_RightHandIK() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_LeftHandFK() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_LeftHandIK() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_IKBonesToMove() {
    return (void*)((uintptr_t)this + 0x108);
}
float& _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_HandFKWeight() {
    return *(float*)((uintptr_t)this + 0x118);
}
