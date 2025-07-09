#include "..\FUObjectArray.hpp"
#include "AnimNode_ApplyAdditive.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_Base() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaBoolBlend() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_Additive() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x34);
}
float& _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x90);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaCurveName() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaInputType() {
    return (void*)((uintptr_t)this + 0xc4);
}
bool _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_bAlphaBoolEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xc5 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::set_bAlphaBoolEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive");
    return result;
}
