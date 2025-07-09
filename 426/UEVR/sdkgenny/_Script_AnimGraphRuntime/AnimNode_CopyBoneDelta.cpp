#include "..\FUObjectArray.hpp"
#include "AnimNode_CopyBoneDelta.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_SourceBone() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_TargetBone() {
    return (void*)((uintptr_t)this + 0xd8);
}
void _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::set_bCopyTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_bCopyTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta");
    return result;
}
void _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::set_bCopyRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_bCopyRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0xe9 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_bCopyScale() {
    return (*(uint8_t*)((uintptr_t)this + 0xea + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::set_bCopyScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xea + 0);
    *(uint8_t*)((uintptr_t)this + 0xea + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_CopyMode() {
    return (void*)((uintptr_t)this + 0xeb);
}
float& _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_TranslationMultiplier() {
    return *(float*)((uintptr_t)this + 0xec);
}
float& _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_RotationMultiplier() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_ScaleMultiplier() {
    return *(float*)((uintptr_t)this + 0xf4);
}
