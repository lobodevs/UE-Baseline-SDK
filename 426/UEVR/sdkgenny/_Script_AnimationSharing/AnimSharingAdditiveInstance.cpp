#include "..\FUObjectArray.hpp"
#include "AnimSharingAdditiveInstance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
_Script_CoreUObject::Class* _Script_AnimationSharing::AnimSharingAdditiveInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimationSharing.AnimSharingAdditiveInstance");
    return result;
}
void* _Script_AnimationSharing::AnimSharingAdditiveInstance::get_BaseComponent() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Script_AnimationSharing::AnimSharingAdditiveInstance::get_AdditiveAnimation() {
    return (void*)((uintptr_t)this + 0x2c0);
}
float& _Script_AnimationSharing::AnimSharingAdditiveInstance::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
bool _Script_AnimationSharing::AnimSharingAdditiveInstance::get_bStateBool() {
    return (*(uint8_t*)((uintptr_t)this + 0x2cc + 0)) & 1 != 0;
}
void _Script_AnimationSharing::AnimSharingAdditiveInstance::set_bStateBool(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
