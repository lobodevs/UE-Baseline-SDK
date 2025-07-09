#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendSpacePlayer.hpp"
#include "AnimNode_RotationOffsetBlendSpace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_BasePose() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_AlphaInputType() {
    return (void*)((uintptr_t)this + 0x18c);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace");
    return result;
}
void* _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x100);
}
float& _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_Alpha() {
    return *(float*)((uintptr_t)this + 0xfc);
}
void* _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_AlphaBoolBlend() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_AlphaCurveName() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_AlphaScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x158);
}
bool _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_bAlphaBoolEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x18d + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::set_bAlphaBoolEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18d + 0);
    *(uint8_t*)((uintptr_t)this + 0x18d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
