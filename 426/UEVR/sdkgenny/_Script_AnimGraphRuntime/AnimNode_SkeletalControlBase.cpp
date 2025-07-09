#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_ComponentPose() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_ActualAlpha() {
    return *(float*)((uintptr_t)this + 0x24);
}
bool _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_bAlphaBoolEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_AlphaInputType() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::set_bAlphaBoolEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_AlphaBoolBlend() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_AlphaCurveName() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_AlphaScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase");
    return result;
}
