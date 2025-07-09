#include "..\FUObjectArray.hpp"
#include "AnimNode_LayeredBoneBlend.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::set_bMeshSpaceScaleBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_BasePose() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_bMeshSpaceRotationBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_BlendWeights() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_BlendPoses() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_LayerSetup() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::set_bMeshSpaceRotationBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_bMeshSpaceScaleBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_CurveBlendOption() {
    return (void*)((uintptr_t)this + 0x52);
}
bool _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_bBlendRootMotionBasedOnRootBone() {
    return (*(uint8_t*)((uintptr_t)this + 0x53 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::set_bBlendRootMotionBasedOnRootBone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53 + 0);
    *(uint8_t*)((uintptr_t)this + 0x53 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_PerBoneBlendWeights() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_SkeletonGuid() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::get_VirtualBoneGuid() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_LayeredBoneBlend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend");
    return result;
}
