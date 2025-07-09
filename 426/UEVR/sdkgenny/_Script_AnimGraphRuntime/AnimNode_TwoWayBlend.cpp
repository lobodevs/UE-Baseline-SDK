#include "..\FUObjectArray.hpp"
#include "AnimNode_TwoWayBlend.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
float& _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_A() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_B() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_AlphaInputType() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_bAlphaBoolEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::set_bAlphaBoolEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_bResetChildOnActivation() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 8 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::set_bResetChildOnActivation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_AlphaBoolBlend() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_AlphaCurveName() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_AlphaScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend");
    return result;
}
