#include "..\FUObjectArray.hpp"
#include "AnimNode_CCDIK.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_EffectorLocation() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_EffectorLocationSpace() {
    return (void*)((uintptr_t)this + 0xd4);
}
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_EffectorTarget() {
    return (void*)((uintptr_t)this + 0xe0);
}
float& _Script_AnimGraphRuntime::AnimNode_CCDIK::get_Precision() {
    return *(float*)((uintptr_t)this + 0x160);
}
void _Script_AnimGraphRuntime::AnimNode_CCDIK::set_bStartFromTail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x168 + 0);
    *(uint8_t*)((uintptr_t)this + 0x168 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_TipBone() {
    return (void*)((uintptr_t)this + 0x140);
}
bool _Script_AnimGraphRuntime::AnimNode_CCDIK::get_bStartFromTail() {
    return (*(uint8_t*)((uintptr_t)this + 0x168 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_RootBone() {
    return (void*)((uintptr_t)this + 0x150);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_CCDIK::get_MaxIterations() {
    return *(int32_t*)((uintptr_t)this + 0x164);
}
bool _Script_AnimGraphRuntime::AnimNode_CCDIK::get_bEnableRotationLimit() {
    return (*(uint8_t*)((uintptr_t)this + 0x169 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_CCDIK::set_bEnableRotationLimit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x169 + 0);
    *(uint8_t*)((uintptr_t)this + 0x169 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_CCDIK::get_RotationLimitPerJoints() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_CCDIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_CCDIK");
    return result;
}
