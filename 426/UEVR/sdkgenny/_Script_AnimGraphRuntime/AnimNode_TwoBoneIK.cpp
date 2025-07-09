#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_TwoBoneIK.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_IKBone() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_EffectorTarget() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_EffectorLocation() {
    return (void*)((uintptr_t)this + 0xe0);
}
float& _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_StartStretchRatio() {
    return *(float*)((uintptr_t)this + 0xd8);
}
float& _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_MaxStretchScale() {
    return *(float*)((uintptr_t)this + 0xdc);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_JointTargetLocation() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_JointTarget() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_EffectorLocationSpace() {
    return (void*)((uintptr_t)this + 0x1d0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK");
    return result;
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_JointTargetLocationSpace() {
    return (void*)((uintptr_t)this + 0x1d1);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bAllowStretching() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d2 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bAllowStretching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bTakeRotationFromEffectorSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d2 + 0)) & 2 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bTakeRotationFromEffectorSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bMaintainEffectorRelRot() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d2 + 0)) & 4 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bMaintainEffectorRelRot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d2 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bAllowTwist() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d2 + 0)) & 8 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bAllowTwist(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d2 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
