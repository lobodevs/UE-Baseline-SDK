#include "..\FUObjectArray.hpp"
#include "AnimationSharingManager.hpp"
#include "AnimationSharingSetup.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Skeleton.hpp"
_Script_AnimationSharing::AnimationSharingManager* _Script_AnimationSharing::AnimationSharingManager::GetAnimationSharingManager(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void* _Script_AnimationSharing::AnimationSharingManager::get_Skeletons() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AnimationSharing::AnimationSharingManager::get_PerSkeletonData() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_AnimationSharing::AnimationSharingManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimationSharing.AnimationSharingManager");
    return result;
}
void _Script_AnimationSharing::AnimationSharingManager::RegisterActorWithSkeletonBP(_Script_Engine::Actor* InActor, _Script_Engine::Skeleton* SharingSkeleton) {
    return;
}
bool _Script_AnimationSharing::AnimationSharingManager::CreateAnimationSharingManager(_Script_CoreUObject::Object* WorldContextObject, _Script_AnimationSharing::AnimationSharingSetup* Setup) {
    return;
}
bool _Script_AnimationSharing::AnimationSharingManager::AnimationSharingEnabled() {
    return;
}
