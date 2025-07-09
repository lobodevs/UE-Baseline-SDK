#include "..\FUObjectArray.hpp"
#include "PerSkeletonAnimationSharingSetup.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\Skeleton.hpp"
void* _Script_AnimationSharing::PerSkeletonAnimationSharingSetup::get_AnimationStates() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AnimationSharing::PerSkeletonAnimationSharingSetup::get_BlendAnimBlueprint() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::Skeleton*& _Script_AnimationSharing::PerSkeletonAnimationSharingSetup::get_Skeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x0);
}
void* _Script_AnimationSharing::PerSkeletonAnimationSharingSetup::get_AdditiveAnimBlueprint() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_Engine::SkeletalMesh*& _Script_AnimationSharing::PerSkeletonAnimationSharingSetup::get_SkeletalMesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x8);
}
void* _Script_AnimationSharing::PerSkeletonAnimationSharingSetup::get_StateProcessorClass() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AnimationSharing::PerSkeletonAnimationSharingSetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationSharing.PerSkeletonAnimationSharingSetup");
    return result;
}
