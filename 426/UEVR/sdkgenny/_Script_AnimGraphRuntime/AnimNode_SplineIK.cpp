#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_SplineIK.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_StartBone() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_EndBone() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_BoneAxis() {
    return (void*)((uintptr_t)this + 0xe8);
}
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_Roll() {
    return *(float*)((uintptr_t)this + 0x100);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_PointCount() {
    return *(int32_t*)((uintptr_t)this + 0xec);
}
bool _Script_AnimGraphRuntime::AnimNode_SplineIK::get_bAutoCalculateSpline() {
    return (*(uint8_t*)((uintptr_t)this + 0xe9 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SplineIK::set_bAutoCalculateSpline(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_ControlPoints() {
    return (void*)((uintptr_t)this + 0xf0);
}
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_TwistStart() {
    return *(float*)((uintptr_t)this + 0x104);
}
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_TwistEnd() {
    return *(float*)((uintptr_t)this + 0x108);
}
void* _Script_AnimGraphRuntime::AnimNode_SplineIK::get_TwistBlend() {
    return (void*)((uintptr_t)this + 0x110);
}
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_Stretch() {
    return *(float*)((uintptr_t)this + 0x140);
}
float& _Script_AnimGraphRuntime::AnimNode_SplineIK::get_Offset() {
    return *(float*)((uintptr_t)this + 0x144);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_SplineIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_SplineIK");
    return result;
}
