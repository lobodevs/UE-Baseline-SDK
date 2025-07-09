#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_Trail.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_TrailBone() {
    return (void*)((uintptr_t)this + 0x100);
}
bool _Script_AnimGraphRuntime::AnimNode_Trail::get_bLimitRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x115 + 0)) & 4 != 0;
}
int32_t& _Script_AnimGraphRuntime::AnimNode_Trail::get_ChainLength() {
    return *(int32_t*)((uintptr_t)this + 0x110);
}
void _Script_AnimGraphRuntime::AnimNode_Trail::set_bLimitStretch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x115 + 0);
    *(uint8_t*)((uintptr_t)this + 0x115 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_ChainBoneAxis() {
    return (void*)((uintptr_t)this + 0x114);
}
bool _Script_AnimGraphRuntime::AnimNode_Trail::get_bInvertChainBoneAxis() {
    return (*(uint8_t*)((uintptr_t)this + 0x115 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_Trail::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_Trail");
    return result;
}
void _Script_AnimGraphRuntime::AnimNode_Trail::set_bInvertChainBoneAxis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x115 + 0);
    *(uint8_t*)((uintptr_t)this + 0x115 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_Trail::get_bLimitStretch() {
    return (*(uint8_t*)((uintptr_t)this + 0x115 + 0)) & 2 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_Trail::set_bLimitRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x115 + 0);
    *(uint8_t*)((uintptr_t)this + 0x115 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_Trail::get_bUsePlanarLimit() {
    return (*(uint8_t*)((uintptr_t)this + 0x115 + 0)) & 8 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_Trail::set_bUsePlanarLimit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x115 + 0);
    *(uint8_t*)((uintptr_t)this + 0x115 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_Trail::get_bActorSpaceFakeVel() {
    return (*(uint8_t*)((uintptr_t)this + 0x115 + 0)) & 16 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_Trail::set_bActorSpaceFakeVel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x115 + 0);
    *(uint8_t*)((uintptr_t)this + 0x115 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_Trail::get_RelaxationSpeedScale() {
    return *(float*)((uintptr_t)this + 0x11c);
}
bool _Script_AnimGraphRuntime::AnimNode_Trail::get_bReorientParentToChild() {
    return (*(uint8_t*)((uintptr_t)this + 0x115 + 0)) & 32 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_Trail::set_bReorientParentToChild(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x115 + 0);
    *(uint8_t*)((uintptr_t)this + 0x115 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_Trail::get_MaxDeltaTime() {
    return *(float*)((uintptr_t)this + 0x118);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_TrailRelaxationSpeed() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_RelaxationSpeedScaleInputProcessor() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_RotationLimits() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_RotationOffsets() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_PlanarLimits() {
    return (void*)((uintptr_t)this + 0x1f8);
}
float& _Script_AnimGraphRuntime::AnimNode_Trail::get_StretchLimit() {
    return *(float*)((uintptr_t)this + 0x208);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_FakeVelocity() {
    return (void*)((uintptr_t)this + 0x20c);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_BaseJoint() {
    return (void*)((uintptr_t)this + 0x218);
}
float& _Script_AnimGraphRuntime::AnimNode_Trail::get_LastBoneRotationAnimAlphaBlend() {
    return *(float*)((uintptr_t)this + 0x228);
}
