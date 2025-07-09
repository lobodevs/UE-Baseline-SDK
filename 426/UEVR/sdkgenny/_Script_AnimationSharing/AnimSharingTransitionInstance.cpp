#include "..\FUObjectArray.hpp"
#include "AnimSharingTransitionInstance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
void* _Script_AnimationSharing::AnimSharingTransitionInstance::get_FromComponent() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Script_AnimationSharing::AnimSharingTransitionInstance::get_ToComponent() {
    return (void*)((uintptr_t)this + 0x2c0);
}
float& _Script_AnimationSharing::AnimSharingTransitionInstance::get_BlendTime() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
bool _Script_AnimationSharing::AnimSharingTransitionInstance::get_bBlendBool() {
    return (*(uint8_t*)((uintptr_t)this + 0x2cc + 0)) & 1 != 0;
}
void _Script_AnimationSharing::AnimSharingTransitionInstance::set_bBlendBool(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimationSharing::AnimSharingTransitionInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimationSharing.AnimSharingTransitionInstance");
    return result;
}
