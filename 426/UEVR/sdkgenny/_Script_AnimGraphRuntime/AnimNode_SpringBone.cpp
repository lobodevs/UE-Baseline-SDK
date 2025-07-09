#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_SpringBone.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_SpringBone::get_SpringBone() {
    return (void*)((uintptr_t)this + 0xc8);
}
float& _Script_AnimGraphRuntime::AnimNode_SpringBone::get_MaxDisplacement() {
    return *(float*)((uintptr_t)this + 0xd8);
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bLimitDisplacement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_SpringBone::get_SpringStiffness() {
    return *(float*)((uintptr_t)this + 0xdc);
}
float& _Script_AnimGraphRuntime::AnimNode_SpringBone::get_SpringDamping() {
    return *(float*)((uintptr_t)this + 0xe0);
}
float& _Script_AnimGraphRuntime::AnimNode_SpringBone::get_ErrorResetThresh() {
    return *(float*)((uintptr_t)this + 0xe4);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bLimitDisplacement() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bTranslateX() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 2 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bTranslateX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bTranslateY() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 4 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bTranslateY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bTranslateZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 8 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bTranslateZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bRotateX() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 16 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bRotateX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bRotateY() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 32 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bRotateY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_SpringBone::get_bRotateZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 64 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_SpringBone::set_bRotateZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_SpringBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_SpringBone");
    return result;
}
