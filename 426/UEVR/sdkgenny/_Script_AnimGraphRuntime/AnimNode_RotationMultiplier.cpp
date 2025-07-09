#include "..\FUObjectArray.hpp"
#include "AnimNode_RotationMultiplier.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AnimGraphRuntime::AnimNode_RotationMultiplier::get_Multiplier() {
    return *(float*)((uintptr_t)this + 0xe8);
}
void* _Script_AnimGraphRuntime::AnimNode_RotationMultiplier::get_TargetBone() {
    return (void*)((uintptr_t)this + 0xc8);
}
bool _Script_AnimGraphRuntime::AnimNode_RotationMultiplier::get_bIsAdditive() {
    return (*(uint8_t*)((uintptr_t)this + 0xed + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_RotationMultiplier::get_SourceBone() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_AnimGraphRuntime::AnimNode_RotationMultiplier::get_RotationAxisToRefer() {
    return (void*)((uintptr_t)this + 0xec);
}
void _Script_AnimGraphRuntime::AnimNode_RotationMultiplier::set_bIsAdditive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xed + 0);
    *(uint8_t*)((uintptr_t)this + 0xed + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_RotationMultiplier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier");
    return result;
}
