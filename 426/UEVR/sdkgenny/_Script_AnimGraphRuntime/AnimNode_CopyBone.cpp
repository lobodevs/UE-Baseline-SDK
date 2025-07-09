#include "..\FUObjectArray.hpp"
#include "AnimNode_CopyBone.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AnimGraphRuntime::AnimNode_CopyBone::set_bCopyScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xea + 0);
    *(uint8_t*)((uintptr_t)this + 0xea + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_CopyBone::get_SourceBone() {
    return (void*)((uintptr_t)this + 0xc8);
}
void _Script_AnimGraphRuntime::AnimNode_CopyBone::set_bCopyTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_CopyBone::get_TargetBone() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyBone::get_bCopyScale() {
    return (*(uint8_t*)((uintptr_t)this + 0xea + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_CopyBone::get_bCopyTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_CopyBone::get_bCopyRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0xe9 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_CopyBone::set_bCopyRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_CopyBone::get_ControlSpace() {
    return (void*)((uintptr_t)this + 0xeb);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_CopyBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_CopyBone");
    return result;
}
