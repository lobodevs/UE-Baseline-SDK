#include "..\FUObjectArray.hpp"
#include "AnimNode_LookAt.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_InterpolationType() {
    return (void*)((uintptr_t)this + 0x15d);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_BoneToModify() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookAtTarget() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookAtLocation() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookAt_Axis() {
    return (void*)((uintptr_t)this + 0x14c);
}
bool _Script_AnimGraphRuntime::AnimNode_LookAt::get_bUseLookUpAxis() {
    return (*(uint8_t*)((uintptr_t)this + 0x15c + 0)) & 1 != 0;
}
float& _Script_AnimGraphRuntime::AnimNode_LookAt::get_InterpolationTriggerThreashold() {
    return *(float*)((uintptr_t)this + 0x178);
}
void _Script_AnimGraphRuntime::AnimNode_LookAt::set_bUseLookUpAxis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15c + 0);
    *(uint8_t*)((uintptr_t)this + 0x15c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookUp_Axis() {
    return (void*)((uintptr_t)this + 0x160);
}
float& _Script_AnimGraphRuntime::AnimNode_LookAt::get_LookAtClamp() {
    return *(float*)((uintptr_t)this + 0x170);
}
float& _Script_AnimGraphRuntime::AnimNode_LookAt::get_InterpolationTime() {
    return *(float*)((uintptr_t)this + 0x174);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_LookAt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_LookAt");
    return result;
}
