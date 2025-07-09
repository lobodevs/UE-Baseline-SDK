#include "..\FUObjectArray.hpp"
#include "AnimationSharingSetup.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_AnimationSharing::AnimationSharingSetup::get_SkeletonSetups() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AnimationSharing::AnimationSharingSetup::get_ScalabilitySettings() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_AnimationSharing::AnimationSharingSetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimationSharing.AnimationSharingSetup");
    return result;
}
